﻿// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

class NavigationViewItemRevokers : public winrt::implements<NavigationViewItemRevokers, winrt::IInspectable>
{
public:
    winrt::UIElement::Tapped_revoker tappedRevoker{};
    winrt::UIElement::KeyDown_revoker keyDownRevoker{};
    winrt::UIElement::KeyUp_revoker keyUpRevoker{};
    winrt::UIElement::GotFocus_revoker gotFocusRevoker{};
    winrt::NavigationViewItem::NavigationViewItemInvoked_revoker pointerPressedRevoker{};
    PropertyChanged_revoker isSelectedRevoker{};
};
