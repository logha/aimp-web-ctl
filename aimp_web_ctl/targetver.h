#pragma once

// ��������� ������� ���������� ����������� ���������� � ������ ���������. ����������� ���������� � ������ ���������
// - ��� ����� ������ ������ Windows, Internet Explorer � �. �., ������� ��� ����������� ������� ��� ���������� 
// ������ ����������. � ���������� ���������� ������� ���������� ��� �������, ��������� ��� ������ ��������� ������ �� ��������� � 
// ������� ��������� ������.

// �������� ��������� �����������, ���� ������ ����� ��������� ����� ������, ��� ��������� ����.
// ��������� ������ � ��������������� ��������� ��� ��������� �������� ��. � MSDN.
#ifndef WINVER                          // ���������, ��� ���������� ����������� ������� ��������� �������� Windows XP.
#define WINVER 0x0501           // �������� ��������, ����������� �� ������ ������ Windows.
#endif

#ifndef _WIN32_WINNT            // ���������, ��� ���������� ����������� ������� ��������� �������� Windows XP.
#define _WIN32_WINNT 0x0501     // �������� ��������, ����������� �� ������ ������ Windows.
#endif

#ifndef _WIN32_WINDOWS          // ���������, ��� ���������� ����������� ������� ��������� �������� Windows XP.
#define _WIN32_WINDOWS 0x0501 // �������� ��������, ����������� �� Windows Me ��� ����� ������� ������ Windows.
#endif

#ifndef _WIN32_IE                       // ���������, ��� ���������� ����������� ������� ��������� �������� Internet Explorer 6.0.
#define _WIN32_IE 0x0600        // �������� ��������, ����������� �� ������ ������ Internet Explorer.
#endif
