#ifndef UNICODE
#define UNICODE
#endif // !UNICODE

#include <Windows.h>
#include <d2d1.h>

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
void paintRect(HWND hWnd);

int WINAPI wWinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {

	// Register the window class.
	const wchar_t CLASS_NAME[] = L"Game Window";

	WNDCLASS window_class= {};

	window_class.lpfnWndProc = WindowProc;
	window_class.hInstance = hInstance;
	window_class.lpszClassName = CLASS_NAME;

	RegisterClass(&window_class);

	//Create window

	HWND hwnd = CreateWindowEx(
		0,						// Optional window styles.
		CLASS_NAME,				// Window class
		L"My first game",		// Window text
		WS_OVERLAPPEDWINDOW,	// window style

		// Size and position
		CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

		NULL,					// Parent window
		NULL,					// Menu
		hInstance,				// Instance handle
		NULL					// Additional application data
		);

	if (hwnd == NULL) {
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);

	// Run the message loop

	MSG message = {};

	while (GetMessage(&message, NULL, 0, 0) > 0) 
	{
		TranslateMessage(&message);
		DispatchMessage(&message);
	}

	return 0;

}

LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{

	


	switch(uMsg) 
	{
		case WM_CLOSE:
		case WM_DESTROY: 
		{
			PostQuitMessage(0);
			return 0;
		}break;
		case WM_PAINT:
		{
			//PAINTSTRUCT ps;
			//HDC hdc = BeginPaint(hwnd, &ps);

			//All painting occurs here, between BeginPaint and EndPaint.
			
			paintRect(hwnd);

			//FillRect(hdc, &ps.rcPaint, (HBRUSH)(COLOR_WINDOW + 1));
			//EndPaint(hwnd, &ps);
			
		}break;
		
		return 0;

	}
	return DefWindowProc(hwnd, uMsg, wParam, lParam);
}

void paintRect(HWND hWnd)
{
	PAINTSTRUCT ps;
	LOGBRUSH lb;
	RECT rc;
	HDC hdc;
	int i;
	HGDIOBJ hPen = NULL;
	HGDIOBJ hPenOld;
	DWORD dwPenStyle[] = {
						   PS_DASH,
						   PS_DASHDOT,
						   PS_DOT,
						   PS_INSIDEFRAME,
						   PS_NULL,
						   PS_SOLID
	};
	UINT uHatch[] = {
					  HS_BDIAGONAL,
					  HS_CROSS,
					  HS_DIAGCROSS,
					  HS_FDIAGONAL,
					  HS_HORIZONTAL,
					  HS_VERTICAL
	};
	GetClientRect(hWnd, &rc);
	rc.left += 10;
	rc.top += 10;
	rc.bottom -= 10;

	// Initialize the pen's brush.
	lb.lbStyle = BS_SOLID;
	lb.lbColor = RGB(255, 0, 0);
	lb.lbHatch = 0;

	hdc = BeginPaint(hWnd, &ps);
	for (i = 0; i < 6; i++)
	{
		hPen = ExtCreatePen(PS_COSMETIC | dwPenStyle[i],
			1, &lb, 0, NULL);
		hPenOld = SelectObject(hdc, hPen);
		MoveToEx(hdc, rc.left + (i * 20), rc.top, NULL);
		LineTo(hdc, rc.left + (i * 20), rc.bottom);
		SelectObject(hdc, hPenOld);
		DeleteObject(hPen);
	}
	rc.left += 150;
	for (i = 0; i < 6; i++)
	{
		lb.lbStyle = BS_HATCHED;
		lb.lbColor = RGB(0, 0, 255);
		lb.lbHatch = uHatch[i];
		hPen = ExtCreatePen(PS_GEOMETRIC,
			5, &lb, 0, NULL);
		hPenOld = SelectObject(hdc, hPen);
		MoveToEx(hdc, rc.left + (i * 20), rc.top, NULL);
		LineTo(hdc, rc.left + (i * 20), rc.bottom);
		SelectObject(hdc, hPenOld);
		DeleteObject(hPen);
	}
	EndPaint(hWnd, &ps);
}
