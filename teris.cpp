#include <iostream>
#include <windows.h>
#include <time.h>
#include <stdio.h>
#include<fstream>
using namespace std;
#include "screenn.h"
#include "stock.h"
#include "nether.h"
#include "net.h"
#include "self_play.h"
#define ID_TIMER 1
HWND hwnd;
UINT timer_id=0;
LRESULT CALLBACK WndProc(HWND,UINT,WPARAM,LPARAM);

////////////////////////////////////
stock a;
screenn sc;
net nettt;

/////////////////////////////////////


int main()
{

	HINSTANCE hInstance=GetModuleHandle ( NULL );
    TCHAR szAppName[]=TEXT ( "TIMER,10s" );
    MSG msg;
    WNDCLASS wc;
    wc.style=CS_HREDRAW|CS_VREDRAW;
    wc.lpfnWndProc=WndProc;
    wc.cbClsExtra=0;
    wc.cbWndExtra=0;
    wc.hInstance=hInstance;
    wc.hIcon=LoadIcon ( NULL,IDI_APPLICATION );
    wc.hCursor=LoadCursor ( NULL,IDC_ARROW );
    wc.hbrBackground= ( HBRUSH ) GetStockObject ( WHITE_BRUSH );
    wc.lpszMenuName=NULL;
    wc.lpszClassName=szAppName;
    if ( !RegisterClass ( &wc ) )
    {
        printf ( "RegisterClass occur errors!" );
        return 0;
    }
    hwnd=CreateWindow ( szAppName,TEXT ( "TIMER,10s" ),
                        WS_OVERLAPPEDWINDOW,
                        0,0,0,0,
                        NULL,
                        NULL,
                        hInstance,
                        NULL );
    ShowWindow ( hwnd,SW_SHOW );
    UpdateWindow ( hwnd );
    while ( GetMessage ( &msg,NULL,0,0 ) )
    {
        TranslateMessage ( &msg );
        DispatchMessage ( &msg );
    }
    return msg.wParam;
}

LRESULT CALLBACK WndProc ( HWND hwnd,UINT message,WPARAM wParam,LPARAM lParam )
{
    HDC hdc;
    PAINTSTRUCT ps;
    switch ( message )
    {
    case WM_CREATE:
		MoveWindow ( hwnd,400,10,11*(gap+cell)+gap,22*(gap+cell)+gap,FALSE );  
        srand ( time ( NULL ) );
        timer_id=SetTimer ( hwnd,ID_TIMER,500,NULL );
		
        return 0;

    case WM_TIMER:
		hdc=GetDC ( hwnd );
		if(!a.down())
		{
			sc.clearrow();
			a.renew();
		}
		sc.fill(hdc);
        ReleaseDC ( hwnd,hdc );
        return 0;
    
    case WM_PAINT:
        hdc=BeginPaint ( hwnd,&ps );
		sc.prin(hdc);
		sc.fill(hdc);
        EndPaint ( hwnd,&ps );
        return 0;
	case WM_KEYDOWN:
		hdc=GetDC ( hwnd );
		switch ( wParam )
        {
        case VK_LEFT:                           //左移
            a.left();
			sc.fill(hdc);
            break;
        case VK_RIGHT:                          //右移
            a.right();
			sc.fill(hdc);
            break;
        case VK_UP:                             //转向
			a.turn();
			sc.fill(hdc);
            break;
        case VK_DOWN:                           //加速
            a.down();
			sc.fill(hdc);
            break;
        case VK_SPACE:  
			self_play(hdc);
			sc.fill(hdc);
            break;
        }
        ReleaseDC ( hwnd,hdc );
        return 0;


    case WM_DESTROY:
        if ( timer_id ) KillTimer ( hwnd,ID_TIMER );
        PostQuitMessage ( 0 );
        return 0;
    }
    return DefWindowProc ( hwnd,message,wParam,lParam );
}