#include <windows.h>

#include "color.h"
#include "effects.h"
#include "sound.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd) {

	if (MessageBoxW(NULL, L"trichloromethane-safety.exe GDI?.", L"trichloromethane-safety.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
	{
		ExitProcess(0);
	}
	else
	{
		if (MessageBoxW(NULL, L"Are you sure final chance of stoping it.", L"trichloromethane-safety.exe", MB_YESNO | MB_ICONEXCLAMATION) == IDNO)
		{
			ExitProcess(0);
		}
		else
		{
			Sleep(5000);
            		HANDLE thread1 = CreateThread(0, 0, shader1, 0, 0, 0);
			sound1();
			Sleep(30000);
			TerminateThread(thread1, 0);
			CloseHandle(thread1);
			//TerminateThread(thread1dot1, 0);
			//CloseHandle(thread1dot1);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread2 = CreateThread(0, 0, wef, 0, 0, 0);
			HANDLE thread2dot1 = CreateThread(0, 0, shake, 0, 0, 0);
			HANDLE thread2dot2 = CreateThread(0, 0, patblt, 0, 0, 0);
			sound2();
			Sleep(30000);
			TerminateThread(thread2, 0);
			CloseHandle(thread2);
			TerminateThread(thread2dot1, 0);
			CloseHandle(thread2dot1);
			TerminateThread(thread2dot2, 0);
			CloseHandle(thread2dot2);
			InvalidateRect(0, 0, 0);
			Sleep(100);
			HANDLE thread3 = CreateThread(0, 0, shader2, 0, 0, 0);
			sound3();
			Sleep(30000);
			TerminateThread(thread3, 0);
			CloseHandle(thread3);
			InvalidateRect(0, 0, 0);
			HANDLE thread4 = CreateThread(0, 0, shader3, 0, 0, 0);
			sound4();
			Sleep(30000);
			TerminateThread(thread4, 0);
			CloseHandle(thread4);
			InvalidateRect(0, 0, 0);
			HANDLE thread5 = CreateThread(0, 0, train, 0, 0, 0);
			HANDLE thread5dot1 = CreateThread(0, 0, drawEllipse, 0, 0, 0);
			sound5();
			Sleep(30000);
			TerminateThread(thread5, 0);
			CloseHandle(thread5);
			InvalidateRect(0, 0, 0);
			HANDLE thread6 = CreateThread(0, 0, shader4, 0, 0, 0);
			Sleep(30000);
			TerminateThread(thread6, 0);
			CloseHandle(thread6);
			TerminateThread(thread5dot1, 0);
			CloseHandle(thread5dot1);
			TerminateThread(thread6, 0);
			CloseHandle(thread6);
			InvalidateRect(0, 0, 0);
			Sleep(10);
			HANDLE thread7 = CreateThread(0, 0, textout, 0, 0, 0);
			sound6();
			Sleep(30000);
			TerminateThread(thread7, 0);
			CloseHandle(thread7);
			InvalidateRect(0, 0, 0);
			HANDLE thread8 = CreateThread(0, 0, hslfill, 0, 0, 0);
			Sleep(30000);
			TerminateThread(thread8, 0);
			CloseHandle(thread8);
			InvalidateRect(0, 0, 0);
			HANDLE thread9 = CreateThread(0, 0, masher, 0, 0, 0);
			HANDLE thread9dot1 = CreateThread(0, 0, squares, 0, 0, 0);
			sound7();
			Sleep(30000);
			TerminateThread(thread9, 0);
			CloseHandle(thread9);
			TerminateThread(thread9dot1, 0);
			CloseHandle(thread9dot1);
			TerminateThread(thread9, 0);
			CloseHandle(thread9);
			InvalidateRect(0, 0, 0);
			Sleep(10);
			HANDLE thread10 = CreateThread(0, 0, shader5, 0, 0, 0);
			sound8();
			Sleep(30000);
		}
	}
}