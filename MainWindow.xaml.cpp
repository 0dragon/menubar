// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#include "pch.h"
#include "MainWindow.xaml.h"
#if __has_include("MainWindow.g.cpp")
#include "MainWindow.g.cpp"
#endif

using namespace winrt;
using namespace Microsoft::UI::Xaml;

// To learn more about WinUI, the WinUI project structure,
// and more about our project templates, see: http://aka.ms/winui-project-info.

namespace winrt::menubar::implementation
{
    MainWindow::MainWindow()
    {
        InitializeComponent();
        this->Title(L"메뉴바 제작");
        TBlock_2().Text(L"State : ON");
    }

    int32_t MainWindow::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void MainWindow::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Save");
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Open");
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_2(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Cut");
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_3(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Copy");
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_4(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Paste");
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_5(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    MessageBox(NULL, L"도움말", L"도움말", MB_OK);
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_6(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : Bluetooth");
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_7(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock().Text(L"You Clicked : E-mail");
}


void winrt::menubar::implementation::MainWindow::RadioMenuFlyoutItem_Click(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock_2().Text(L"State : ON");
}


void winrt::menubar::implementation::MainWindow::RadioMenuFlyoutItem_Click_1(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    TBlock_2().Text(L"State : OFF");
}


void winrt::menubar::implementation::MainWindow::MenuFlyoutItem_Click_8(winrt::Windows::Foundation::IInspectable const& sender, winrt::Microsoft::UI::Xaml::RoutedEventArgs const& e)
{
    MessageBox(NULL, L"Hi", L"I love WinUI3", NULL);
}
