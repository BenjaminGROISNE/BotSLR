// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_UI_Xaml_Controls_Primitives_0_H
#define WINRT_Windows_UI_Xaml_Controls_Primitives_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    template <typename T> struct __declspec(empty_bases) EventHandler;
    struct EventRegistrationToken;
    template <typename T> struct __declspec(empty_bases) IReference;
    struct Point;
    struct Rect;
    struct Size;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename T> struct __declspec(empty_bases) IVectorView;
    template <typename T> struct __declspec(empty_bases) IVector;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Numerics
{
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct Color;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml
{
    struct CornerRadius;
    struct DataTemplate;
    struct DependencyObject;
    struct DependencyProperty;
    enum class ElementSoundMode : int32_t;
    struct FrameworkElement;
    struct GridLength;
    enum class HorizontalAlignment : int32_t;
    struct RoutedEventHandler;
    struct Thickness;
    struct UIElement;
    enum class VerticalAlignment : int32_t;
    enum class Visibility : int32_t;
    struct XamlRoot;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls
{
    enum class ClickMode : int32_t;
    struct ColorChangedEventArgs;
    enum class ColorPickerHsvChannel : int32_t;
    enum class ColorSpectrumComponents : int32_t;
    enum class ColorSpectrumShape : int32_t;
    struct Control;
    struct IconElement;
    enum class LightDismissOverlayMode : int32_t;
    enum class Orientation : int32_t;
    struct SelectionChangedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Input
{
    struct ICommand;
    struct ProcessKeyboardAcceleratorEventArgs;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media
{
    struct Brush;
    struct ImageSource;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Media::Animation
{
    struct TransitionCollection;
}
WINRT_EXPORT namespace winrt::Windows::UI::Xaml::Controls::Primitives
{
    enum class AnimationDirection : int32_t
    {
        Left = 0,
        Top = 1,
        Right = 2,
        Bottom = 3,
    };
    enum class ComponentResourceLocation : int32_t
    {
        Application = 0,
        Nested = 1,
    };
    enum class EdgeTransitionLocation : int32_t
    {
        Left = 0,
        Top = 1,
        Right = 2,
        Bottom = 3,
    };
    enum class FlyoutPlacementMode : int32_t
    {
        Top = 0,
        Bottom = 1,
        Left = 2,
        Right = 3,
        Full = 4,
        TopEdgeAlignedLeft = 5,
        TopEdgeAlignedRight = 6,
        BottomEdgeAlignedLeft = 7,
        BottomEdgeAlignedRight = 8,
        LeftEdgeAlignedTop = 9,
        LeftEdgeAlignedBottom = 10,
        RightEdgeAlignedTop = 11,
        RightEdgeAlignedBottom = 12,
        Auto = 13,
    };
    enum class FlyoutShowMode : int32_t
    {
        Auto = 0,
        Standard = 1,
        Transient = 2,
        TransientWithDismissOnPointerMoveAway = 3,
    };
    enum class GeneratorDirection : int32_t
    {
        Forward = 0,
        Backward = 1,
    };
    enum class GroupHeaderPlacement : int32_t
    {
        Top = 0,
        Left = 1,
    };
    enum class ListViewItemPresenterCheckMode : int32_t
    {
        Inline = 0,
        Overlay = 1,
    };
    enum class ListViewItemPresenterSelectionIndicatorMode : int32_t
    {
        Inline = 0,
        Overlay = 1,
    };
    enum class PlacementMode : int32_t
    {
        Bottom = 2,
        Left = 9,
        Mouse = 7,
        Right = 4,
        Top = 10,
    };
    enum class PopupPlacementMode : int32_t
    {
        Auto = 0,
        Top = 1,
        Bottom = 2,
        Left = 3,
        Right = 4,
        TopEdgeAlignedLeft = 5,
        TopEdgeAlignedRight = 6,
        BottomEdgeAlignedLeft = 7,
        BottomEdgeAlignedRight = 8,
        LeftEdgeAlignedTop = 9,
        LeftEdgeAlignedBottom = 10,
        RightEdgeAlignedTop = 11,
        RightEdgeAlignedBottom = 12,
    };
    enum class ScrollEventType : int32_t
    {
        SmallDecrement = 0,
        SmallIncrement = 1,
        LargeDecrement = 2,
        LargeIncrement = 3,
        ThumbPosition = 4,
        ThumbTrack = 5,
        First = 6,
        Last = 7,
        EndScroll = 8,
    };
    enum class ScrollingIndicatorMode : int32_t
    {
        None = 0,
        TouchIndicator = 1,
        MouseIndicator = 2,
    };
    enum class SliderSnapsTo : int32_t
    {
        StepValues = 0,
        Ticks = 1,
    };
    enum class SnapPointsAlignment : int32_t
    {
        Near = 0,
        Center = 1,
        Far = 2,
    };
    enum class TickPlacement : int32_t
    {
        None = 0,
        TopLeft = 1,
        BottomRight = 2,
        Outside = 3,
        Inline = 4,
    };
    struct IAppBarButtonTemplateSettings;
    struct IAppBarTemplateSettings;
    struct IAppBarTemplateSettings2;
    struct IAppBarToggleButtonTemplateSettings;
    struct IButtonBase;
    struct IButtonBaseFactory;
    struct IButtonBaseStatics;
    struct ICalendarPanel;
    struct ICalendarViewTemplateSettings;
    struct ICarouselPanel;
    struct ICarouselPanelFactory;
    struct IColorPickerSlider;
    struct IColorPickerSliderFactory;
    struct IColorPickerSliderStatics;
    struct IColorSpectrum;
    struct IColorSpectrumFactory;
    struct IColorSpectrumStatics;
    struct IComboBoxTemplateSettings;
    struct IComboBoxTemplateSettings2;
    struct ICommandBarFlyoutCommandBar;
    struct ICommandBarFlyoutCommandBarFactory;
    struct ICommandBarFlyoutCommandBarTemplateSettings;
    struct ICommandBarTemplateSettings;
    struct ICommandBarTemplateSettings2;
    struct ICommandBarTemplateSettings3;
    struct ICommandBarTemplateSettings4;
    struct IDragCompletedEventArgs;
    struct IDragCompletedEventArgsFactory;
    struct IDragDeltaEventArgs;
    struct IDragDeltaEventArgsFactory;
    struct IDragStartedEventArgs;
    struct IDragStartedEventArgsFactory;
    struct IFlyoutBase;
    struct IFlyoutBase2;
    struct IFlyoutBase3;
    struct IFlyoutBase4;
    struct IFlyoutBase5;
    struct IFlyoutBase6;
    struct IFlyoutBaseClosingEventArgs;
    struct IFlyoutBaseFactory;
    struct IFlyoutBaseOverrides;
    struct IFlyoutBaseOverrides4;
    struct IFlyoutBaseStatics;
    struct IFlyoutBaseStatics2;
    struct IFlyoutBaseStatics3;
    struct IFlyoutBaseStatics5;
    struct IFlyoutBaseStatics6;
    struct IFlyoutShowOptions;
    struct IFlyoutShowOptionsFactory;
    struct IGeneratorPositionHelper;
    struct IGeneratorPositionHelperStatics;
    struct IGridViewItemPresenter;
    struct IGridViewItemPresenterFactory;
    struct IGridViewItemPresenterStatics;
    struct IGridViewItemTemplateSettings;
    struct IItemsChangedEventArgs;
    struct IJumpListItemBackgroundConverter;
    struct IJumpListItemBackgroundConverterStatics;
    struct IJumpListItemForegroundConverter;
    struct IJumpListItemForegroundConverterStatics;
    struct ILayoutInformation;
    struct ILayoutInformationStatics;
    struct ILayoutInformationStatics2;
    struct IListViewItemPresenter;
    struct IListViewItemPresenter2;
    struct IListViewItemPresenter3;
    struct IListViewItemPresenter4;
    struct IListViewItemPresenterFactory;
    struct IListViewItemPresenterStatics;
    struct IListViewItemPresenterStatics2;
    struct IListViewItemPresenterStatics3;
    struct IListViewItemPresenterStatics4;
    struct IListViewItemTemplateSettings;
    struct ILoopingSelector;
    struct ILoopingSelectorItem;
    struct ILoopingSelectorPanel;
    struct ILoopingSelectorStatics;
    struct IMenuFlyoutItemTemplateSettings;
    struct IMenuFlyoutPresenterTemplateSettings;
    struct INavigationViewItemPresenter;
    struct INavigationViewItemPresenterFactory;
    struct INavigationViewItemPresenterStatics;
    struct IOrientedVirtualizingPanel;
    struct IOrientedVirtualizingPanelFactory;
    struct IPickerFlyoutBase;
    struct IPickerFlyoutBaseFactory;
    struct IPickerFlyoutBaseOverrides;
    struct IPickerFlyoutBaseStatics;
    struct IPivotHeaderItem;
    struct IPivotHeaderItemFactory;
    struct IPivotHeaderPanel;
    struct IPivotPanel;
    struct IPopup;
    struct IPopup2;
    struct IPopup3;
    struct IPopup4;
    struct IPopupStatics;
    struct IPopupStatics2;
    struct IPopupStatics3;
    struct IPopupStatics4;
    struct IProgressBarTemplateSettings;
    struct IProgressRingTemplateSettings;
    struct IRangeBase;
    struct IRangeBaseFactory;
    struct IRangeBaseOverrides;
    struct IRangeBaseStatics;
    struct IRangeBaseValueChangedEventArgs;
    struct IRepeatButton;
    struct IRepeatButtonStatics;
    struct IScrollBar;
    struct IScrollBarStatics;
    struct IScrollEventArgs;
    struct IScrollSnapPointsInfo;
    struct ISelector;
    struct ISelectorFactory;
    struct ISelectorItem;
    struct ISelectorItemFactory;
    struct ISelectorItemStatics;
    struct ISelectorStatics;
    struct ISettingsFlyoutTemplateSettings;
    struct ISplitViewTemplateSettings;
    struct IThumb;
    struct IThumbStatics;
    struct ITickBar;
    struct ITickBarStatics;
    struct IToggleButton;
    struct IToggleButtonFactory;
    struct IToggleButtonOverrides;
    struct IToggleButtonStatics;
    struct IToggleSwitchTemplateSettings;
    struct IToolTipTemplateSettings;
    struct AppBarButtonTemplateSettings;
    struct AppBarTemplateSettings;
    struct AppBarToggleButtonTemplateSettings;
    struct ButtonBase;
    struct CalendarPanel;
    struct CalendarViewTemplateSettings;
    struct CarouselPanel;
    struct ColorPickerSlider;
    struct ColorSpectrum;
    struct ComboBoxTemplateSettings;
    struct CommandBarFlyoutCommandBar;
    struct CommandBarFlyoutCommandBarTemplateSettings;
    struct CommandBarTemplateSettings;
    struct DragCompletedEventArgs;
    struct DragDeltaEventArgs;
    struct DragStartedEventArgs;
    struct FlyoutBase;
    struct FlyoutBaseClosingEventArgs;
    struct FlyoutShowOptions;
    struct GeneratorPositionHelper;
    struct GridViewItemPresenter;
    struct GridViewItemTemplateSettings;
    struct ItemsChangedEventArgs;
    struct JumpListItemBackgroundConverter;
    struct JumpListItemForegroundConverter;
    struct LayoutInformation;
    struct ListViewItemPresenter;
    struct ListViewItemTemplateSettings;
    struct LoopingSelector;
    struct LoopingSelectorItem;
    struct LoopingSelectorPanel;
    struct MenuFlyoutItemTemplateSettings;
    struct MenuFlyoutPresenterTemplateSettings;
    struct NavigationViewItemPresenter;
    struct OrientedVirtualizingPanel;
    struct PickerFlyoutBase;
    struct PivotHeaderItem;
    struct PivotHeaderPanel;
    struct PivotPanel;
    struct Popup;
    struct ProgressBarTemplateSettings;
    struct ProgressRingTemplateSettings;
    struct RangeBase;
    struct RangeBaseValueChangedEventArgs;
    struct RepeatButton;
    struct ScrollBar;
    struct ScrollEventArgs;
    struct Selector;
    struct SelectorItem;
    struct SettingsFlyoutTemplateSettings;
    struct SplitViewTemplateSettings;
    struct Thumb;
    struct TickBar;
    struct ToggleButton;
    struct ToggleSwitchTemplateSettings;
    struct ToolTipTemplateSettings;
    struct GeneratorPosition;
    struct DragCompletedEventHandler;
    struct DragDeltaEventHandler;
    struct DragStartedEventHandler;
    struct ItemsChangedEventHandler;
    struct RangeBaseValueChangedEventHandler;
    struct ScrollEventHandler;
}
namespace winrt::impl
{
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBase>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopup4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IPopupStatics4>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBase>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollBar>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelector>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IThumb>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ITickBar>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButton>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>{ using type = interface_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ButtonBase>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBarTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PivotPanel>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::Popup>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBase>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RepeatButton>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollBar>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::Selector>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SelectorItem>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::Thumb>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::TickBar>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToggleButton>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>{ using type = class_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::AnimationDirection>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorDirection>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterSelectionIndicatorMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PlacementMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::PopupPlacementMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventType>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::TickPlacement>{ using type = enum_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>{ using type = struct_category<int32_t, int32_t>; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>{ using type = delegate_category; };
    template <> struct category<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>{ using type = delegate_category; };
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.AppBarButtonTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.AppBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.AppBarToggleButtonTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ButtonBase> = L"Windows.UI.Xaml.Controls.Primitives.ButtonBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::CalendarPanel> = L"Windows.UI.Xaml.Controls.Primitives.CalendarPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.CalendarViewTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::CarouselPanel> = L"Windows.UI.Xaml.Controls.Primitives.CarouselPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider> = L"Windows.UI.Xaml.Controls.Primitives.ColorPickerSlider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum> = L"Windows.UI.Xaml.Controls.Primitives.ColorSpectrum";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ComboBoxTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar> = L"Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBar";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.CommandBarFlyoutCommandBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.CommandBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::FlyoutBase> = L"Windows.UI.Xaml.Controls.Primitives.FlyoutBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.FlyoutBaseClosingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions> = L"Windows.UI.Xaml.Controls.Primitives.FlyoutShowOptions";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper> = L"Windows.UI.Xaml.Controls.Primitives.GeneratorPositionHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter> = L"Windows.UI.Xaml.Controls.Primitives.GridViewItemPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.GridViewItemTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter> = L"Windows.UI.Xaml.Controls.Primitives.JumpListItemBackgroundConverter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter> = L"Windows.UI.Xaml.Controls.Primitives.JumpListItemForegroundConverter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::LayoutInformation> = L"Windows.UI.Xaml.Controls.Primitives.LayoutInformation";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter> = L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ListViewItemTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::LoopingSelector> = L"Windows.UI.Xaml.Controls.Primitives.LoopingSelector";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem> = L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorItem";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel> = L"Windows.UI.Xaml.Controls.Primitives.LoopingSelectorPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutItemTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.MenuFlyoutPresenterTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter> = L"Windows.UI.Xaml.Controls.Primitives.NavigationViewItemPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel> = L"Windows.UI.Xaml.Controls.Primitives.OrientedVirtualizingPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase> = L"Windows.UI.Xaml.Controls.Primitives.PickerFlyoutBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem> = L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderItem";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel> = L"Windows.UI.Xaml.Controls.Primitives.PivotHeaderPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::PivotPanel> = L"Windows.UI.Xaml.Controls.Primitives.PivotPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::Popup> = L"Windows.UI.Xaml.Controls.Primitives.Popup";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ProgressBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ProgressRingTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::RangeBase> = L"Windows.UI.Xaml.Controls.Primitives.RangeBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::RepeatButton> = L"Windows.UI.Xaml.Controls.Primitives.RepeatButton";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ScrollBar> = L"Windows.UI.Xaml.Controls.Primitives.ScrollBar";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.ScrollEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::Selector> = L"Windows.UI.Xaml.Controls.Primitives.Selector";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::SelectorItem> = L"Windows.UI.Xaml.Controls.Primitives.SelectorItem";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.SettingsFlyoutTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.SplitViewTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::Thumb> = L"Windows.UI.Xaml.Controls.Primitives.Thumb";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::TickBar> = L"Windows.UI.Xaml.Controls.Primitives.TickBar";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ToggleButton> = L"Windows.UI.Xaml.Controls.Primitives.ToggleButton";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ToggleSwitchTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ToolTipTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::AnimationDirection> = L"Windows.UI.Xaml.Controls.Primitives.AnimationDirection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ComponentResourceLocation> = L"Windows.UI.Xaml.Controls.Primitives.ComponentResourceLocation";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::EdgeTransitionLocation> = L"Windows.UI.Xaml.Controls.Primitives.EdgeTransitionLocation";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode> = L"Windows.UI.Xaml.Controls.Primitives.FlyoutPlacementMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode> = L"Windows.UI.Xaml.Controls.Primitives.FlyoutShowMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::GeneratorDirection> = L"Windows.UI.Xaml.Controls.Primitives.GeneratorDirection";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::GroupHeaderPlacement> = L"Windows.UI.Xaml.Controls.Primitives.GroupHeaderPlacement";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode> = L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenterCheckMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterSelectionIndicatorMode> = L"Windows.UI.Xaml.Controls.Primitives.ListViewItemPresenterSelectionIndicatorMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::PlacementMode> = L"Windows.UI.Xaml.Controls.Primitives.PlacementMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::PopupPlacementMode> = L"Windows.UI.Xaml.Controls.Primitives.PopupPlacementMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ScrollEventType> = L"Windows.UI.Xaml.Controls.Primitives.ScrollEventType";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode> = L"Windows.UI.Xaml.Controls.Primitives.ScrollingIndicatorMode";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::SliderSnapsTo> = L"Windows.UI.Xaml.Controls.Primitives.SliderSnapsTo";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment> = L"Windows.UI.Xaml.Controls.Primitives.SnapPointsAlignment";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::TickPlacement> = L"Windows.UI.Xaml.Controls.Primitives.TickPlacement";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition> = L"Windows.UI.Xaml.Controls.Primitives.GeneratorPosition";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IAppBarButtonTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IAppBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2> = L"Windows.UI.Xaml.Controls.Primitives.IAppBarTemplateSettings2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IAppBarToggleButtonTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IButtonBase> = L"Windows.UI.Xaml.Controls.Primitives.IButtonBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory> = L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics> = L"Windows.UI.Xaml.Controls.Primitives.IButtonBaseStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel> = L"Windows.UI.Xaml.Controls.Primitives.ICalendarPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ICalendarViewTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel> = L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory> = L"Windows.UI.Xaml.Controls.Primitives.ICarouselPanelFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider> = L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSlider";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory> = L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics> = L"Windows.UI.Xaml.Controls.Primitives.IColorPickerSliderStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum> = L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrum";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory> = L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics> = L"Windows.UI.Xaml.Controls.Primitives.IColorSpectrumStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2> = L"Windows.UI.Xaml.Controls.Primitives.IComboBoxTemplateSettings2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar> = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBar";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory> = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBarFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarFlyoutCommandBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2> = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3> = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4> = L"Windows.UI.Xaml.Controls.Primitives.ICommandBarTemplateSettings4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory> = L"Windows.UI.Xaml.Controls.Primitives.IDragCompletedEventArgsFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory> = L"Windows.UI.Xaml.Controls.Primitives.IDragDeltaEventArgsFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory> = L"Windows.UI.Xaml.Controls.Primitives.IDragStartedEventArgsFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase5";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBase6";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseClosingEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseOverrides4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics5";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutBaseStatics6";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutShowOptions";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory> = L"Windows.UI.Xaml.Controls.Primitives.IFlyoutShowOptionsFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper> = L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelper";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics> = L"Windows.UI.Xaml.Controls.Primitives.IGeneratorPositionHelperStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter> = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory> = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics> = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemPresenterStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IGridViewItemTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.IItemsChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter> = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics> = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemBackgroundConverterStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter> = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics> = L"Windows.UI.Xaml.Controls.Primitives.IJumpListItemForegroundConverterStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation> = L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformation";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics> = L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2> = L"Windows.UI.Xaml.Controls.Primitives.ILayoutInformationStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter4> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenter4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics4> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemPresenterStatics4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IListViewItemTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector> = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelector";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem> = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorItem";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel> = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics> = L"Windows.UI.Xaml.Controls.Primitives.ILoopingSelectorStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutItemTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IMenuFlyoutPresenterTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter> = L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenter";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory> = L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenterFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics> = L"Windows.UI.Xaml.Controls.Primitives.INavigationViewItemPresenterStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel> = L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory> = L"Windows.UI.Xaml.Controls.Primitives.IOrientedVirtualizingPanelFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase> = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory> = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides> = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics> = L"Windows.UI.Xaml.Controls.Primitives.IPickerFlyoutBaseStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem> = L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItem";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory> = L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderItemFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel> = L"Windows.UI.Xaml.Controls.Primitives.IPivotHeaderPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPivotPanel> = L"Windows.UI.Xaml.Controls.Primitives.IPivotPanel";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopup> = L"Windows.UI.Xaml.Controls.Primitives.IPopup";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopup2> = L"Windows.UI.Xaml.Controls.Primitives.IPopup2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopup3> = L"Windows.UI.Xaml.Controls.Primitives.IPopup3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopup4> = L"Windows.UI.Xaml.Controls.Primitives.IPopup4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics> = L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2> = L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics2";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3> = L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics3";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics4> = L"Windows.UI.Xaml.Controls.Primitives.IPopupStatics4";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IProgressBarTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IProgressRingTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IRangeBase> = L"Windows.UI.Xaml.Controls.Primitives.IRangeBase";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory> = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides> = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics> = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.IRangeBaseValueChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IRepeatButton> = L"Windows.UI.Xaml.Controls.Primitives.IRepeatButton";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics> = L"Windows.UI.Xaml.Controls.Primitives.IRepeatButtonStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IScrollBar> = L"Windows.UI.Xaml.Controls.Primitives.IScrollBar";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics> = L"Windows.UI.Xaml.Controls.Primitives.IScrollBarStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs> = L"Windows.UI.Xaml.Controls.Primitives.IScrollEventArgs";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo> = L"Windows.UI.Xaml.Controls.Primitives.IScrollSnapPointsInfo";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISelector> = L"Windows.UI.Xaml.Controls.Primitives.ISelector";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory> = L"Windows.UI.Xaml.Controls.Primitives.ISelectorFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISelectorItem> = L"Windows.UI.Xaml.Controls.Primitives.ISelectorItem";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory> = L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics> = L"Windows.UI.Xaml.Controls.Primitives.ISelectorItemStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics> = L"Windows.UI.Xaml.Controls.Primitives.ISelectorStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ISettingsFlyoutTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.ISplitViewTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IThumb> = L"Windows.UI.Xaml.Controls.Primitives.IThumb";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IThumbStatics> = L"Windows.UI.Xaml.Controls.Primitives.IThumbStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ITickBar> = L"Windows.UI.Xaml.Controls.Primitives.ITickBar";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics> = L"Windows.UI.Xaml.Controls.Primitives.ITickBarStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IToggleButton> = L"Windows.UI.Xaml.Controls.Primitives.IToggleButton";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory> = L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonFactory";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides> = L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonOverrides";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics> = L"Windows.UI.Xaml.Controls.Primitives.IToggleButtonStatics";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IToggleSwitchTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings> = L"Windows.UI.Xaml.Controls.Primitives.IToolTipTemplateSettings";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler> = L"Windows.UI.Xaml.Controls.Primitives.DragCompletedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler> = L"Windows.UI.Xaml.Controls.Primitives.DragDeltaEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler> = L"Windows.UI.Xaml.Controls.Primitives.DragStartedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler> = L"Windows.UI.Xaml.Controls.Primitives.ItemsChangedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler> = L"Windows.UI.Xaml.Controls.Primitives.RangeBaseValueChangedEventHandler";
    template <> inline constexpr auto& name_v<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler> = L"Windows.UI.Xaml.Controls.Primitives.ScrollEventHandler";
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>{ 0xCBC9B39D,0x0C95,0x4951,{ 0xBF,0xF2,0x13,0x96,0x36,0x91,0xC3,0x66 } }; // CBC9B39D-0C95-4951-BFF2-13963691C366
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>{ 0xBCC2A863,0xEB35,0x423C,{ 0x83,0x89,0xD7,0x82,0x7B,0xE3,0xBF,0x67 } }; // BCC2A863-EB35-423C-8389-D7827BE3BF67
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>{ 0xCBE66259,0x0399,0x5BCC,{ 0xB9,0x25,0x4D,0x5F,0x5C,0x9A,0x45,0x68 } }; // CBE66259-0399-5BCC-B925-4D5F5C9A4568
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>{ 0xAAF99C48,0xD8F4,0x40D9,{ 0x9F,0xA3,0x3A,0x64,0xF0,0xFE,0xC5,0xD8 } }; // AAF99C48-D8F4-40D9-9FA3-3A64F0FEC5D8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IButtonBase>{ 0xFA002C1A,0x494E,0x46CF,{ 0x91,0xD4,0xE1,0x4A,0x8D,0x79,0x86,0x74 } }; // FA002C1A-494E-46CF-91D4-E14A8D798674
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>{ 0x389B7C71,0x5220,0x42B2,{ 0x99,0x92,0x26,0x90,0xC1,0xA6,0x70,0x2F } }; // 389B7C71-5220-42B2-9992-2690C1A6702F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>{ 0x67EF17E1,0xFE37,0x474F,{ 0x9E,0x97,0x3B,0x5E,0x0B,0x30,0xF2,0xDF } }; // 67EF17E1-FE37-474F-9E97-3B5E0B30F2DF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>{ 0xFCD55A2D,0x02D3,0x4EE6,{ 0x9A,0x90,0x9D,0xF3,0xEA,0xD0,0x09,0x94 } }; // FCD55A2D-02D3-4EE6-9A90-9DF3EAD00994
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>{ 0x56C71483,0x64E1,0x477C,{ 0x8A,0x0B,0xCB,0x2F,0x33,0x34,0xB9,0xB0 } }; // 56C71483-64E1-477C-8A0B-CB2F3334B9B0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>{ 0xDEAB78B2,0x373B,0x4151,{ 0x87,0x85,0xE5,0x44,0xD0,0xD9,0x36,0x2B } }; // DEAB78B2-373B-4151-8785-E544D0D9362B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>{ 0xC1109404,0x9AE1,0x440E,{ 0xA0,0xDD,0xBB,0xB6,0xE2,0x29,0x3C,0xBE } }; // C1109404-9AE1-440E-A0DD-BBB6E2293CBE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>{ 0x94394D83,0xE0DF,0x4C5F,{ 0xBB,0xCD,0x81,0x55,0xF4,0x02,0x04,0x40 } }; // 94394D83-E0DF-4C5F-BBCD-8155F4020440
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>{ 0x06D879A2,0x8C07,0x4B1E,{ 0xA9,0x40,0x9F,0xBC,0xE8,0xF4,0x96,0x39 } }; // 06D879A2-8C07-4B1E-A940-9FBCE8F49639
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>{ 0x22EAFC6A,0x9FE3,0x4EEE,{ 0x87,0x34,0xA1,0x39,0x8E,0xC4,0x41,0x3A } }; // 22EAFC6A-9FE3-4EEE-8734-A1398EC4413A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>{ 0xCE46F271,0xF509,0x4F98,{ 0x82,0x88,0xE4,0x94,0x2F,0xB3,0x85,0xDF } }; // CE46F271-F509-4F98-8288-E4942FB385DF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>{ 0x90C7E61E,0x904D,0x42AB,{ 0xB4,0x4F,0xE6,0x8D,0xBF,0x0C,0xDE,0xE9 } }; // 90C7E61E-904D-42AB-B44F-E68DBF0CDEE9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>{ 0x906BEE7C,0x2CEE,0x4E90,{ 0x96,0x8B,0xF0,0xA5,0xBD,0x69,0x1B,0x4A } }; // 906BEE7C-2CEE-4E90-968B-F0A5BD691B4A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>{ 0x83285C4E,0x17F6,0x4AA3,{ 0xB6,0x1B,0xE8,0x7C,0x71,0x86,0x04,0xEA } }; // 83285C4E-17F6-4AA3-B61B-E87C718604EA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>{ 0x00E90CD7,0x68BE,0x449D,{ 0xB5,0xA7,0x76,0xE2,0x6F,0x70,0x3E,0x9B } }; // 00E90CD7-68BE-449D-B5A7-76E26F703E9B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>{ 0x14146E7C,0x38C4,0x55C4,{ 0xB7,0x06,0xCE,0x18,0xF6,0x06,0x1E,0x7E } }; // 14146E7C-38C4-55C4-B706-CE18F6061E7E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>{ 0xF8236F9F,0x5559,0x5697,{ 0x8E,0x6F,0x20,0xD7,0x0C,0xA1,0x7D,0xD0 } }; // F8236F9F-5559-5697-8E6F-20D70CA17DD0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>{ 0x47642C44,0x26FF,0x5D14,{ 0x9C,0xFC,0x77,0xDC,0x64,0xF3,0xA4,0x47 } }; // 47642C44-26FF-5D14-9CFC-77DC64F3A447
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>{ 0x61C8F92C,0x05AA,0x414A,{ 0xA2,0xAE,0x48,0x2C,0x5A,0x46,0xC0,0x8E } }; // 61C8F92C-05AA-414A-A2AE-482C5A46C08E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>{ 0xFBB24F93,0xC2E2,0x4177,{ 0xA2,0xB6,0x3C,0xD7,0x05,0x07,0x3C,0xF6 } }; // FBB24F93-C2E2-4177-A2B6-3CD705073CF6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>{ 0x3BD71EBA,0x3403,0x4BFE,{ 0x84,0x2D,0x2C,0xE8,0xC5,0x11,0xD2,0x45 } }; // 3BD71EBA-3403-4BFE-842D-2CE8C511D245
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>{ 0xF2562DD3,0xAA58,0x59C5,{ 0x85,0x3B,0x82,0x8A,0x19,0xD1,0x21,0x4E } }; // F2562DD3-AA58-59C5-853B-828A19D1214E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>{ 0xB04F29A1,0xBD16,0x48F6,{ 0xA5,0x11,0x9C,0x27,0x63,0x64,0x13,0x31 } }; // B04F29A1-BD16-48F6-A511-9C2763641331
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>{ 0x36A7D99D,0x148C,0x495F,{ 0xA0,0xFC,0xAF,0xC8,0x71,0xD6,0x2F,0x33 } }; // 36A7D99D-148C-495F-A0FC-AFC871D62F33
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>{ 0x2C2DD73C,0x2806,0x49FC,{ 0xAA,0xE9,0x6D,0x79,0x2B,0x57,0x2B,0x6A } }; // 2C2DD73C-2806-49FC-AAE9-6D792B572B6A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>{ 0x46E7A1EF,0xAE15,0x44A6,{ 0x8A,0x04,0x95,0xB0,0xBF,0x9A,0xB8,0x76 } }; // 46E7A1EF-AE15-44A6-8A04-95B0BF9AB876
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>{ 0x9F915DD0,0xA124,0x4366,{ 0xBD,0x85,0x24,0x08,0x21,0x4A,0xEE,0xD4 } }; // 9F915DD0-A124-4366-BD85-2408214AEED4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>{ 0x5EEFE579,0xC706,0x4781,{ 0xA3,0x08,0xC9,0xE7,0xF4,0xC6,0xA1,0xD7 } }; // 5EEFE579-C706-4781-A308-C9E7F4C6A1D7
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>{ 0x723EEA0B,0xD12E,0x430D,{ 0xA9,0xF0,0x9B,0xB3,0x2B,0xBF,0x99,0x13 } }; // 723EEA0B-D12E-430D-A9F0-9BB32BBF9913
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>{ 0xF82B435E,0x65B3,0x41C6,{ 0xA9,0xE2,0x77,0xB6,0x7B,0xC4,0xC0,0x0C } }; // F82B435E-65B3-41C6-A9E2-77B67BC4C00C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>{ 0xA89C9712,0x48E0,0x4240,{ 0x95,0xB9,0x0D,0xFD,0x08,0x26,0xA8,0xD3 } }; // A89C9712-48E0-4240-95B9-0DFD0826A8D3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>{ 0xE3897D69,0xA37F,0x4828,{ 0x9B,0x70,0x0E,0xF6,0x7C,0x03,0xB5,0xF8 } }; // E3897D69-A37F-4828-9B70-0EF67C03B5F8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>{ 0xAD3EC0C7,0x12BB,0x5A73,{ 0xB7,0x8E,0x10,0x51,0x92,0xCA,0x73,0xD6 } }; // AD3EC0C7-12BB-5A73-B78E-105192CA73D6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>{ 0x5399DE8C,0x06CC,0x5B52,{ 0xB6,0x5A,0xFF,0x93,0x22,0xD1,0xC9,0x40 } }; // 5399DE8C-06CC-5B52-B65A-FF9322D1C940
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>{ 0xD075852D,0xB09A,0x4FD1,{ 0xB0,0x05,0xDB,0x2B,0xA0,0x12,0x06,0xFB } }; // D075852D-B09A-4FD1-B005-DB2BA01206FB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>{ 0x1C3363D7,0xFCA7,0x407E,{ 0x92,0x0E,0x70,0xE1,0x5E,0x9F,0x0B,0xF1 } }; // 1C3363D7-FCA7-407E-920E-70E15E9F0BF1
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>{ 0x101DEC86,0x6F4D,0x45A4,{ 0x9D,0x0E,0x3E,0xCE,0x6F,0x16,0x97,0x7E } }; // 101DEC86-6F4D-45A4-9D0E-3ECE6F16977E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>{ 0xA6BFD04D,0x5FF3,0x4418,{ 0xAD,0xD8,0x40,0x42,0xA8,0x8D,0x2D,0xA5 } }; // A6BFD04D-5FF3-4418-ADD8-4042A88D2DA5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>{ 0xE2D795E3,0x85C0,0x4DE2,{ 0xBA,0xC1,0x52,0x94,0xCA,0x01,0x1A,0x78 } }; // E2D795E3-85C0-4DE2-BAC1-5294CA011A78
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>{ 0xA8E913FE,0x2D60,0x4307,{ 0xAA,0xD9,0x56,0xB4,0x50,0x12,0x1B,0x58 } }; // A8E913FE-2D60-4307-AAD9-56B450121B58
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>{ 0x7BA92E4F,0xDD16,0x4BE4,{ 0x99,0xDB,0xBD,0x9D,0x44,0x06,0xC0,0xF8 } }; // 7BA92E4F-DD16-4BE4-99DB-BD9D4406C0F8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>{ 0x69EDB25C,0x992A,0x542B,{ 0xBC,0xFF,0x2F,0x7F,0x85,0x55,0x23,0xBD } }; // 69EDB25C-992A-542B-BCFF-2F7F855523BD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>{ 0x96D49254,0xC91B,0x5246,{ 0x8B,0x39,0xAF,0xC2,0xA2,0xC5,0x0C,0xF8 } }; // 96D49254-C91B-5246-8B39-AFC2A2C50CF8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>{ 0x57D693AD,0x0C74,0x54DD,{ 0xB1,0x10,0x1E,0xE4,0x3F,0xAB,0xAD,0xD9 } }; // 57D693AD-0C74-54DD-B110-1EE43FABADD9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>{ 0xCE596F61,0x2EB4,0x5B4E,{ 0xAF,0x69,0xF9,0xAF,0x42,0x32,0x0E,0xEE } }; // CE596F61-2EB4-5B4E-AF69-F9AF42320EEE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>{ 0xCD40318D,0x7745,0x40D9,{ 0xAB,0x9D,0xAB,0xBD,0xA4,0xA7,0xFF,0xEA } }; // CD40318D-7745-40D9-AB9D-ABBDA4A7FFEA
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>{ 0xAD4095CD,0x60EC,0x4588,{ 0x8D,0x60,0x39,0xD2,0x90,0x97,0xA4,0xDF } }; // AD4095CD-60EC-4588-8D60-39D29097A4DF
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>{ 0x214F9010,0x56E2,0x4821,{ 0x8A,0x1C,0x23,0x05,0x70,0x9A,0xF9,0x4B } }; // 214F9010-56E2-4821-8A1C-2305709AF94B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>{ 0x53C12178,0x63BB,0x4A65,{ 0xA3,0xF1,0xAB,0x11,0x4C,0xFC,0x6F,0xFE } }; // 53C12178-63BB-4A65-A3F1-AB114CFC6FFE
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>{ 0xE958F8C4,0x277E,0x4A72,{ 0xA0,0x1E,0x9E,0x16,0x88,0x98,0x01,0x78 } }; // E958F8C4-277E-4A72-A01E-9E1688980178
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>{ 0x9E30BAAF,0x165D,0x4267,{ 0xA4,0x5E,0x1A,0x43,0xA7,0x57,0x06,0xAC } }; // 9E30BAAF-165D-4267-A45E-1A43A75706AC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>{ 0xE8B45568,0x7D10,0x421E,{ 0xBE,0x29,0x81,0x83,0x9A,0x91,0xDE,0x20 } }; // E8B45568-7D10-421E-BE29-81839A91DE20
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>{ 0x81177858,0xD224,0x410C,{ 0xB1,0x6C,0xC5,0xB6,0xBB,0x61,0x88,0xB2 } }; // 81177858-D224-410C-B16C-C5B6BB6188B2
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>{ 0x20E7C3DD,0x6F27,0x4808,{ 0xB0,0xBE,0x83,0xE0,0xE9,0xB5,0xCC,0x45 } }; // 20E7C3DD-6F27-4808-B0BE-83E0E9B5CC45
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>{ 0x1590ED38,0xC504,0x4796,{ 0xA6,0x3A,0x5B,0xFC,0x9E,0xEF,0xAA,0xE8 } }; // 1590ED38-C504-4796-A63A-5BFC9EEFAAE8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>{ 0x474E7352,0x210C,0x4673,{ 0xAC,0x6A,0x41,0x3F,0x0E,0x2C,0x77,0x50 } }; // 474E7352-210C-4673-AC6A-413F0E2C7750
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>{ 0xB5384C9B,0xC8CF,0x41B3,{ 0xBF,0x16,0x18,0xC8,0x42,0x0E,0x72,0xC9 } }; // B5384C9B-C8CF-41B3-BF16-18C8420E72C9
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>{ 0xCF06CF99,0x58E9,0x4682,{ 0x83,0x26,0x50,0xCA,0xAB,0x65,0xED,0x7C } }; // CF06CF99-58E9-4682-8326-50CAAB65ED7C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>{ 0x760315B5,0x6D4E,0x4939,{ 0xAC,0x61,0x63,0x98,0x63,0xCE,0xA3,0x6B } }; // 760315B5-6D4E-4939-AC61-639863CEA36B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>{ 0xFC8946BD,0xA3A2,0x4969,{ 0x81,0x74,0x25,0xB5,0xD3,0xC2,0x80,0x33 } }; // FC8946BD-A3A2-4969-8174-25B5D3C28033
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>{ 0xF5DC5496,0xE122,0x4C57,{ 0xA6,0x25,0xAC,0x4B,0x08,0xFB,0x2D,0x4C } }; // F5DC5496-E122-4C57-A625-AC4B08FB2D4C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>{ 0x36620013,0x0390,0x4E30,{ 0xAD,0x97,0x87,0x44,0x40,0x4F,0x70,0x10 } }; // 36620013-0390-4E30-AD97-8744404F7010
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter4>{ 0xDA600AC1,0xADEA,0x5940,{ 0xA1,0x8F,0x57,0x58,0x2F,0x96,0xD9,0x9A } }; // DA600AC1-ADEA-5940-A18F-57582F96D99A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>{ 0xE0777CFD,0xF7E4,0x4A67,{ 0x9A,0xC0,0xA9,0x94,0xFC,0xAC,0xD0,0x20 } }; // E0777CFD-F7E4-4A67-9AC0-A994FCACD020
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>{ 0x6504A55A,0x15DD,0x42FB,{ 0xAA,0x5D,0x2D,0x8C,0xE2,0xE9,0xC2,0x94 } }; // 6504A55A-15DD-42FB-AA5D-2D8CE2E9C294
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>{ 0x4CB3B945,0xD24D,0x42A3,{ 0x9E,0x83,0xA8,0x6D,0x06,0x18,0xBF,0x1B } }; // 4CB3B945-D24D-42A3-9E83-A86D0618BF1B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>{ 0xC3D3D11E,0xFA26,0x4CE7,{ 0xA4,0xED,0xFF,0x94,0x8F,0x01,0xB7,0xC0 } }; // C3D3D11E-FA26-4CE7-A4ED-FF948F01B7C0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics4>{ 0x3917159E,0x74A1,0x5E7E,{ 0xA7,0x43,0xE4,0x5B,0xE9,0xFB,0x91,0x9B } }; // 3917159E-74A1-5E7E-A743-E45BE9FB919B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>{ 0x67AF84BF,0x8279,0x4686,{ 0x93,0x26,0xCD,0x18,0x9F,0x27,0x57,0x5D } }; // 67AF84BF-8279-4686-9326-CD189F27575D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>{ 0x4C9A3E04,0x4827,0x49D9,{ 0x88,0x06,0x09,0x39,0x57,0xB0,0xFD,0x21 } }; // 4C9A3E04-4827-49D9-8806-093957B0FD21
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>{ 0xC69714B9,0x27C6,0x4433,{ 0x9D,0x7C,0x0D,0xBF,0xB2,0xF4,0x34,0x4F } }; // C69714B9-27C6-4433-9D7C-0DBFB2F4344F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>{ 0x40A9BA70,0x1011,0x4778,{ 0x87,0xF7,0x6B,0xFD,0x20,0xD6,0x37,0x7D } }; // 40A9BA70-1011-4778-87F7-6BFD20D6377D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>{ 0x03E8BAFA,0x8C7D,0x4FC5,{ 0xB9,0x2A,0xF0,0x49,0xFB,0x93,0x3C,0xC5 } }; // 03E8BAFA-8C7D-4FC5-B92A-F049FB933CC5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>{ 0x56AD1809,0x3A16,0x4147,{ 0x81,0xCB,0xD0,0xB3,0x5C,0x83,0x4E,0x0F } }; // 56AD1809-3A16-4147-81CB-D0B35C834E0F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>{ 0xD68FD00D,0x629D,0x4349,{ 0xAC,0x51,0xB8,0x77,0xC8,0x09,0x83,0xB8 } }; // D68FD00D-629D-4349-AC51-B877C80983B8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>{ 0x9956D3FC,0x4693,0x59CB,{ 0xB6,0xBF,0x37,0x24,0x90,0x58,0xBE,0x96 } }; // 9956D3FC-4693-59CB-B6BF-37249058BE96
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>{ 0xBB062C50,0x4A36,0x52E7,{ 0x94,0x59,0xE8,0x9D,0x02,0xF3,0xFC,0x42 } }; // BB062C50-4A36-52E7-9459-E89D02F3FC42
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>{ 0x52814604,0xCFC1,0x5AD5,{ 0xA3,0xAA,0xFA,0x35,0x5B,0xE6,0xBD,0x76 } }; // 52814604-CFC1-5AD5-A3AA-FA355BE6BD76
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>{ 0xF077B577,0x39BD,0x46EE,{ 0xBD,0xD7,0x08,0x26,0xBE,0xED,0x71,0xB8 } }; // F077B577-39BD-46EE-BDD7-0826BEED71B8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>{ 0x7B8EAEAF,0xF92F,0x439D,{ 0x9E,0xBF,0xE9,0x91,0x9F,0x56,0xC9,0x4D } }; // 7B8EAEAF-F92F-439D-9EBF-E9919F56C94D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>{ 0xE33574EA,0x1076,0x44D1,{ 0x93,0x83,0xDC,0x24,0xAC,0x5C,0xFF,0x2A } }; // E33574EA-1076-44D1-9383-DC24AC5CFF2A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>{ 0x7EC27A53,0x9502,0x4BEB,{ 0xB3,0x42,0x00,0x56,0x6C,0x8F,0x16,0xB0 } }; // 7EC27A53-9502-4BEB-B342-00566C8F16B0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>{ 0x5BFC4F4A,0x4822,0x47B4,{ 0xA9,0x58,0x77,0xC2,0x0B,0xA1,0x20,0xD3 } }; // 5BFC4F4A-4822-47B4-A958-77C20BA120D3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>{ 0x5A4D0AC5,0x89AE,0x40E5,{ 0xA7,0xF1,0xBB,0x70,0x23,0x55,0xAD,0xF3 } }; // 5A4D0AC5-89AE-40E5-A7F1-BB702355ADF3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>{ 0x594572C2,0x82AA,0x410B,{ 0x9E,0x55,0xFD,0x8E,0x2C,0x98,0x86,0x2D } }; // 594572C2-82AA-410B-9E55-FD8E2C98862D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>{ 0x14308B37,0x185B,0x4117,{ 0xBC,0x77,0xDD,0xA2,0xEB,0x26,0x1B,0x99 } }; // 14308B37-185B-4117-BC77-DDA2EB261B99
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>{ 0x21484EBC,0x9241,0x4203,{ 0xBD,0x37,0x6C,0x08,0xFB,0x09,0x66,0x12 } }; // 21484EBC-9241-4203-BD37-6C08FB096612
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>{ 0xAD4EBE80,0x22A9,0x4CA3,{ 0x92,0x12,0x27,0x73,0xB6,0x35,0x9F,0xF3 } }; // AD4EBE80-22A9-4CA3-9212-2773B6359FF3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopup>{ 0x62418240,0xE6D3,0x4705,{ 0xA1,0xDC,0x39,0x15,0x64,0x56,0xEE,0x29 } }; // 62418240-E6D3-4705-A1DC-39156456EE29
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopup2>{ 0x376A8C4C,0xAAC0,0x4B20,{ 0x96,0x6A,0x0B,0x93,0x64,0xFE,0xB4,0xB5 } }; // 376A8C4C-AAC0-4B20-966A-0B9364FEB4B5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopup3>{ 0xF9C46915,0xA65C,0x5F68,{ 0x9F,0x54,0x31,0x0A,0x1B,0x51,0x09,0x5F } }; // F9C46915-A65C-5F68-9F54-310A1B51095F
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopup4>{ 0x1870B836,0xDF2F,0x5FC6,{ 0xA5,0xF2,0x74,0x8E,0xD6,0xCE,0x73,0x21 } }; // 1870B836-DF2F-5FC6-A5F2-748ED6CE7321
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>{ 0x5AE3BF1A,0x6E34,0x40D6,{ 0x8A,0x7F,0xCA,0x82,0x2A,0xAF,0x59,0xE3 } }; // 5AE3BF1A-6E34-40D6-8A7F-CA822AAF59E3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>{ 0x2B9AE9EC,0x55EF,0x43B6,{ 0xB4,0x59,0x12,0xE4,0x0F,0xFA,0x43,0x02 } }; // 2B9AE9EC-55EF-43B6-B459-12E40FFA4302
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>{ 0x00789589,0xC580,0x558F,{ 0x94,0x5A,0x7D,0x02,0xEE,0x00,0x4D,0x3E } }; // 00789589-C580-558F-945A-7D02EE004D3E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IPopupStatics4>{ 0xD1A42C06,0x8BFA,0x5164,{ 0x85,0x54,0x48,0xBF,0xE6,0xBD,0x4C,0xC6 } }; // D1A42C06-8BFA-5164-8554-48BFE6BD4CC6
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>{ 0x3FE2EA2A,0xE3F2,0x4C2B,{ 0x94,0x88,0x91,0x8D,0x77,0xD2,0xBB,0xE4 } }; // 3FE2EA2A-E3F2-4C2B-9488-918D77D2BBE4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>{ 0xB9B675EC,0xC723,0x42E6,{ 0x83,0xE9,0x98,0x26,0x27,0x2B,0xDC,0x0E } }; // B9B675EC-C723-42E6-83E9-9826272BDC0E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IRangeBase>{ 0xFA002C1A,0x494E,0x46CF,{ 0x91,0xD4,0xE1,0x4A,0x8D,0x79,0x86,0x75 } }; // FA002C1A-494E-46CF-91D4-E14A8D798675
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>{ 0x389B7C71,0x5220,0x42B2,{ 0x99,0x92,0x26,0x90,0xC1,0xA6,0x70,0x30 } }; // 389B7C71-5220-42B2-9992-2690C1A67030
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>{ 0x4291AF39,0x7F0B,0x4BC2,{ 0x99,0xC4,0x06,0xE7,0x06,0x26,0x82,0xD8 } }; // 4291AF39-7F0B-4BC2-99C4-06E7062682D8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>{ 0x67EF17E1,0xFE37,0x474F,{ 0x9E,0x97,0x3B,0x5E,0x0B,0x30,0xF2,0xE0 } }; // 67EF17E1-FE37-474F-9E97-3B5E0B30F2E0
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>{ 0xA1921777,0xD5C1,0x4F9C,{ 0xA7,0xB0,0x04,0x01,0xB7,0xE6,0xDC,0x5C } }; // A1921777-D5C1-4F9C-A7B0-0401B7E6DC5C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>{ 0x02200DF9,0x021A,0x484A,{ 0xA9,0x3B,0x0F,0x31,0x02,0x03,0x14,0xE5 } }; // 02200DF9-021A-484A-A93B-0F31020314E5
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>{ 0x3914AC4E,0xF462,0x4F73,{ 0x81,0x97,0xE8,0x84,0x66,0x39,0xC6,0x82 } }; // 3914AC4E-F462-4F73-8197-E8846639C682
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IScrollBar>{ 0xF57AE6CA,0xD1A6,0x4B90,{ 0xA4,0xE9,0x54,0xDF,0x1B,0xA8,0xD2,0xEC } }; // F57AE6CA-D1A6-4B90-A4E9-54DF1BA8D2EC
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>{ 0x45EAF38D,0xB814,0x48CF,{ 0x97,0xF2,0x53,0x9E,0xB1,0x6D,0xFD,0x4D } }; // 45EAF38D-B814-48CF-97F2-539EB16DFD4D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>{ 0xC57E5168,0x3AFE,0x448D,{ 0xB7,0x52,0x2F,0x36,0x4C,0x75,0xD7,0x43 } }; // C57E5168-3AFE-448D-B752-2F364C75D743
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>{ 0x1B5D1336,0xE61B,0x4D51,{ 0xBE,0x41,0xFD,0x8D,0xDC,0x55,0xC5,0x8C } }; // 1B5D1336-E61B-4D51-BE41-FD8DDC55C58C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISelector>{ 0xE30EB3A5,0xB36B,0x42DC,{ 0x85,0x27,0xCD,0x25,0x13,0x6C,0x08,0x3C } }; // E30EB3A5-B36B-42DC-8527-CD25136C083C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>{ 0xC9BE2995,0xD136,0x4600,{ 0xB1,0x87,0x8A,0xD5,0x60,0x79,0xB4,0x8A } }; // C9BE2995-D136-4600-B187-8AD56079B48A
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>{ 0x541C8D6C,0x0283,0x4581,{ 0xB9,0x45,0x2A,0x64,0xC2,0x8A,0x06,0x46 } }; // 541C8D6C-0283-4581-B945-2A64C28A0646
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>{ 0xB9363945,0xC86A,0x4B1E,{ 0x94,0x40,0x18,0x79,0x37,0x8D,0x53,0x13 } }; // B9363945-C86A-4B1E-9440-1879378D5313
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>{ 0x2A353AB8,0xCBE9,0x4303,{ 0x92,0xE7,0xC8,0x90,0x6E,0x21,0x83,0x92 } }; // 2A353AB8-CBE9-4303-92E7-C8906E218392
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>{ 0x13300B06,0xBD10,0x4E09,{ 0xBF,0xF7,0x71,0xEF,0xB8,0xBB,0xB4,0x2B } }; // 13300B06-BD10-4E09-BFF7-71EFB8BBB42B
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>{ 0xBCF14C10,0xCEA7,0x43F1,{ 0x9D,0x68,0x57,0x60,0x5D,0xED,0x69,0xD4 } }; // BCF14C10-CEA7-43F1-9D68-57605DED69D4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>{ 0xC16AB5A7,0x4996,0x4443,{ 0xB1,0x99,0x6B,0x6B,0x89,0x12,0x4E,0xAB } }; // C16AB5A7-4996-4443-B199-6B6B89124EAB
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IThumb>{ 0xE8B2B281,0x0D6A,0x45CF,{ 0xB3,0x33,0x24,0x02,0xB0,0x37,0xF0,0x99 } }; // E8B2B281-0D6A-45CF-B333-2402B037F099
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>{ 0x955024EB,0x36F3,0x4672,{ 0xA1,0x86,0xBA,0xAF,0x62,0x6A,0xC4,0xAD } }; // 955024EB-36F3-4672-A186-BAAF626AC4AD
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ITickBar>{ 0x994683FA,0xF1F6,0x487D,{ 0xA5,0xAC,0xC1,0x59,0x21,0xBF,0xA9,0x95 } }; // 994683FA-F1F6-487D-A5AC-C15921BFA995
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>{ 0x2C6D7E40,0x799D,0x4A54,{ 0xBE,0x09,0x1F,0xEF,0xC6,0x1D,0x01,0x8E } }; // 2C6D7E40-799D-4A54-BE09-1FEFC61D018E
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IToggleButton>{ 0x589877FB,0x0FC7,0x4036,{ 0x9D,0x8B,0x12,0x7D,0xFA,0x75,0xC1,0x6D } }; // 589877FB-0FC7-4036-9D8B-127DFA75C16D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>{ 0xD56AA2FC,0xFC7F,0x449C,{ 0x98,0x55,0x7A,0x10,0x55,0xD6,0x68,0xA8 } }; // D56AA2FC-FC7F-449C-9855-7A1055D668A8
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>{ 0xD20E4C28,0xF18B,0x491A,{ 0x9A,0x45,0xF1,0xA0,0x4A,0x93,0x69,0xA4 } }; // D20E4C28-F18B-491A-9A45-F1A04A9369A4
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>{ 0xAF1EAB12,0x0128,0x4F67,{ 0x9C,0x5A,0x82,0x32,0x0C,0x44,0x5D,0x19 } }; // AF1EAB12-0128-4F67-9C5A-82320C445D19
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>{ 0x02B7BDCD,0x628A,0x4363,{ 0x86,0xE0,0x51,0xD6,0xE2,0xE8,0x9E,0x58 } }; // 02B7BDCD-628A-4363-86E0-51D6E2E89E58
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>{ 0xD4388247,0x0EC4,0x4506,{ 0xAF,0xFD,0xAF,0xAC,0x22,0x25,0xB4,0x8C } }; // D4388247-0EC4-4506-AFFD-AFAC2225B48C
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>{ 0x36B28888,0x19AC,0x4B4E,{ 0x91,0x37,0xA6,0xCF,0x2B,0x02,0x38,0x83 } }; // 36B28888-19AC-4B4E-9137-A6CF2B023883
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>{ 0x4AC24F9F,0xAC28,0x49E9,{ 0x91,0x89,0xDC,0xCF,0xFE,0xB6,0x64,0x72 } }; // 4AC24F9F-AC28-49E9-9189-DCCFFEB66472
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>{ 0xD2EEA48A,0xC65A,0x495D,{ 0xA2,0xF1,0x72,0xC6,0x69,0x89,0x14,0x2D } }; // D2EEA48A-C65A-495D-A2F1-72C66989142D
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>{ 0x178257BE,0xA304,0x482F,{ 0x8B,0xF0,0xB9,0xD2,0xE3,0x96,0x12,0xA3 } }; // 178257BE-A304-482F-8BF0-B9D2E39612A3
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>{ 0xE3906FD9,0x4D1B,0x4AC8,{ 0xA4,0x3C,0xC3,0xB9,0x08,0x74,0x27,0x99 } }; // E3906FD9-4D1B-4AC8-A43C-C3B908742799
    template <> inline constexpr guid guid_v<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>{ 0x8860B0A4,0xA383,0x4C83,{ 0xB3,0x06,0xA1,0xC3,0x9D,0x7D,0xB8,0x7F } }; // 8860B0A4-A383-4C83-B306-A1C39D7DB87F
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarButtonTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::AppBarToggleButtonTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ButtonBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IButtonBase; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CalendarPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::ICalendarPanel; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CalendarViewTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CarouselPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::ICarouselPanel; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider>{ using type = Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum>{ using type = Windows::UI::Xaml::Controls::Primitives::IColorSpectrum; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ComboBoxTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar>{ using type = Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBarTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::CommandBarTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutBase; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions>{ using type = Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GeneratorPositionHelper>{ using type = Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter>{ using type = Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::GridViewItemTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::JumpListItemBackgroundConverter>{ using type = Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::JumpListItemForegroundConverter>{ using type = Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LayoutInformation>{ using type = Windows::UI::Xaml::Controls::Primitives::ILayoutInformation; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter>{ using type = Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ListViewItemTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelector>{ using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelector; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorItem>{ using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::LoopingSelectorPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutItemTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::MenuFlyoutPresenterTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter>{ using type = Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::OrientedVirtualizingPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem>{ using type = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotHeaderPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::PivotPanel>{ using type = Windows::UI::Xaml::Controls::Primitives::IPivotPanel; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Popup>{ using type = Windows::UI::Xaml::Controls::Primitives::IPopup; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ProgressBarTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ProgressRingTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RangeBase>{ using type = Windows::UI::Xaml::Controls::Primitives::IRangeBase; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::RepeatButton>{ using type = Windows::UI::Xaml::Controls::Primitives::IRepeatButton; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ScrollBar>{ using type = Windows::UI::Xaml::Controls::Primitives::IScrollBar; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ScrollEventArgs>{ using type = Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Selector>{ using type = Windows::UI::Xaml::Controls::Primitives::ISelector; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SelectorItem>{ using type = Windows::UI::Xaml::Controls::Primitives::ISelectorItem; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SettingsFlyoutTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::SplitViewTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::Thumb>{ using type = Windows::UI::Xaml::Controls::Primitives::IThumb; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::TickBar>{ using type = Windows::UI::Xaml::Controls::Primitives::ITickBar; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToggleButton>{ using type = Windows::UI::Xaml::Controls::Primitives::IToggleButton; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToggleSwitchTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings; };
    template <> struct default_interface<Windows::UI::Xaml::Controls::Primitives::ToolTipTemplateSettings>{ using type = Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings; };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAcceleratorTextMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CompactVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_CompactRootMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_MinimalVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_MinimalRootMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_HiddenVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_HiddenRootMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NegativeCompactVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeMinimalVerticalDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeHiddenVerticalDelta(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAcceleratorTextMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClickMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ClickMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_IsPointerOver(bool*) noexcept = 0;
            virtual int32_t __stdcall get_IsPressed(bool*) noexcept = 0;
            virtual int32_t __stdcall get_Command(void**) noexcept = 0;
            virtual int32_t __stdcall put_Command(void*) noexcept = 0;
            virtual int32_t __stdcall get_CommandParameter(void**) noexcept = 0;
            virtual int32_t __stdcall put_CommandParameter(void*) noexcept = 0;
            virtual int32_t __stdcall add_Click(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Click(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ClickModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPointerOverProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsPressedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CommandProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CommandParameterProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinViewWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_HeaderText(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay1(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay2(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay3(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay4(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay5(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay6(void**) noexcept = 0;
            virtual int32_t __stdcall get_WeekDay7(void**) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreContentAfter(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreContentBefore(bool*) noexcept = 0;
            virtual int32_t __stdcall get_HasMoreViews(bool*) noexcept = 0;
            virtual int32_t __stdcall get_ClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_CenterX(double*) noexcept = 0;
            virtual int32_t __stdcall get_CenterY(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanVerticallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanVerticallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanHorizontallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanHorizontallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExtentWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExtentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollOwner(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScrollOwner(void*) noexcept = 0;
            virtual int32_t __stdcall LineUp() noexcept = 0;
            virtual int32_t __stdcall LineDown() noexcept = 0;
            virtual int32_t __stdcall LineLeft() noexcept = 0;
            virtual int32_t __stdcall LineRight() noexcept = 0;
            virtual int32_t __stdcall PageUp() noexcept = 0;
            virtual int32_t __stdcall PageDown() noexcept = 0;
            virtual int32_t __stdcall PageLeft() noexcept = 0;
            virtual int32_t __stdcall PageRight() noexcept = 0;
            virtual int32_t __stdcall MouseWheelUp() noexcept = 0;
            virtual int32_t __stdcall MouseWheelDown() noexcept = 0;
            virtual int32_t __stdcall MouseWheelLeft() noexcept = 0;
            virtual int32_t __stdcall MouseWheelRight() noexcept = 0;
            virtual int32_t __stdcall SetHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall SetVerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall MakeVisible(void*, Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorChannel(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ColorChannel(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorChannelProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Color(struct struct_Windows_UI_Color*) noexcept = 0;
            virtual int32_t __stdcall put_Color(struct struct_Windows_UI_Color) noexcept = 0;
            virtual int32_t __stdcall get_HsvColor(Windows::Foundation::Numerics::float4*) noexcept = 0;
            virtual int32_t __stdcall put_HsvColor(Windows::Foundation::Numerics::float4) noexcept = 0;
            virtual int32_t __stdcall get_MinHue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinHue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxHue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxHue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MinSaturation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinSaturation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxSaturation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxSaturation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MinValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MinValue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxValue(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_MaxValue(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Shape(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Shape(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Components(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Components(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_ColorChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ColorChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HsvColorProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinHueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxHueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinSaturationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxSaturationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MinValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaxValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShapeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ComponentsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DropDownOpenedHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_DropDownClosedHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_DropDownOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItemDirection(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DropDownContentMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FlyoutTemplateSettings(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_OpenAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_CloseAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurrentWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandedWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionDelta(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionMoreButtonAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_WidthExpansionMoreButtonAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpOverflowVerticalPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownOverflowVerticalPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandUpAnimationHoldPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExpandDownAnimationHoldPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ContentClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentClipRect(Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ContentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentClipRect(Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentMinWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentMaxHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeOverflowContentHeight(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverflowContentMaxWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EffectiveOverflowButtonVisibility(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverflowContentCompactYTranslation(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentMinimalYTranslation(double*) noexcept = 0;
            virtual int32_t __stdcall get_OverflowContentHiddenYTranslation(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_Canceled(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double, double, bool, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalChange(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalChange(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithHorizontalChangeAndVerticalChange(double, double, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstanceWithHorizontalOffsetAndVerticalOffset(double, double, void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Placement(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Placement(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Opened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Opening(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opening(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall ShowAt(void*) noexcept = 0;
            virtual int32_t __stdcall Hide() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Target(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusOnInteraction(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowFocusOnInteraction(bool) noexcept = 0;
            virtual int32_t __stdcall get_LightDismissOverlayMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LightDismissOverlayMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusWhenDisabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AllowFocusWhenDisabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ElementSoundMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Closing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closing(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverlayInputPassThroughElement(void**) noexcept = 0;
            virtual int32_t __stdcall put_OverlayInputPassThroughElement(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall TryInvokeKeyboardAccelerator(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShowMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ShowMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_InputDevicePrefersPrimaryCommands(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AreOpenCloseAnimationsEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_AreOpenCloseAnimationsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall ShowAt(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBounds(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldConstrainToRootBounds(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsConstrainedToRootBounds(bool*) noexcept = 0;
            virtual int32_t __stdcall get_XamlRoot(void**) noexcept = 0;
            virtual int32_t __stdcall put_XamlRoot(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Cancel(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Cancel(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreatePresenter(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnProcessKeyboardAccelerators(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlacementProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AttachedFlyoutProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetAttachedFlyout(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetAttachedFlyout(void*, void*) noexcept = 0;
            virtual int32_t __stdcall ShowAttachedFlyout(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AllowFocusOnInteractionProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LightDismissOverlayModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AllowFocusWhenDisabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ElementSoundModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OverlayInputPassThroughElementProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ShowModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_InputDevicePrefersPrimaryCommandsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_AreOpenCloseAnimationsEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOpenProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBoundsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Position(void**) noexcept = 0;
            virtual int32_t __stdcall put_Position(void*) noexcept = 0;
            virtual int32_t __stdcall get_ExclusionRect(void**) noexcept = 0;
            virtual int32_t __stdcall put_ExclusionRect(void*) noexcept = 0;
            virtual int32_t __stdcall get_ShowMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ShowMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Placement(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Placement(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall FromIndexAndOffset(int32_t, int32_t, struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionCheckMarkVisualEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckHintBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckSelectingBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PlaceholderBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DisabledOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DragOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReorderHintOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterHorizontalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GridViewItemPresenterHorizontalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterVerticalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_GridViewItemPresenterVerticalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_GridViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterHorizontalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterVerticalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_GridViewItemPresenterPaddingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMarginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentMarginProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DragItemsCount(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Action(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Position(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition*) noexcept = 0;
            virtual int32_t __stdcall get_OldPosition(struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition*) noexcept = 0;
            virtual int32_t __stdcall get_ItemCount(int32_t*) noexcept = 0;
            virtual int32_t __stdcall get_ItemUICount(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Enabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(void*) noexcept = 0;
            virtual int32_t __stdcall get_Disabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Disabled(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Enabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Enabled(void*) noexcept = 0;
            virtual int32_t __stdcall get_Disabled(void**) noexcept = 0;
            virtual int32_t __stdcall put_Disabled(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetLayoutExceptionElement(void*, void**) noexcept = 0;
            virtual int32_t __stdcall GetLayoutSlot(void*, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetAvailableSize(void*, Windows::Foundation::Size*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionCheckMarkVisualEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckHintBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckSelectingBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_DragForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_DragForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PlaceholderBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedForeground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPointerOverBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBorderThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DisabledOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacity(double*) noexcept = 0;
            virtual int32_t __stdcall put_DragOpacity(double) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_ReorderHintOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterHorizontalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListViewItemPresenterHorizontalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterVerticalContentAlignment(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ListViewItemPresenterVerticalContentAlignment(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ListViewItemPresenterPadding(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBackgroundMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_ContentMargin(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_ContentMargin(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedPressedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPressedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_PressedBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PressedBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_FocusSecondaryBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_FocusSecondaryBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_CheckMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverForeground(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverForeground(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RevealBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_RevealBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_RevealBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall put_RevealBorderThickness(struct struct_Windows_UI_Xaml_Thickness) noexcept = 0;
            virtual int32_t __stdcall get_RevealBackgroundShowsAboveContent(bool*) noexcept = 0;
            virtual int32_t __stdcall put_RevealBackgroundShowsAboveContent(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedDisabledBackground(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedDisabledBackground(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckPressedBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckPressedBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckDisabledBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckDisabledBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPointerOverBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxPointerOverBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPressedBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxPressedBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxDisabledBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxDisabledBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxSelectedBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedPointerOverBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxSelectedPointerOverBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedPressedBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxSelectedPressedBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedDisabledBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxSelectedDisabledBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPointerOverBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxPointerOverBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPressedBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxPressedBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxDisabledBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxDisabledBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxCornerRadius(struct struct_Windows_UI_Xaml_CornerRadius*) noexcept = 0;
            virtual int32_t __stdcall put_CheckBoxCornerRadius(struct struct_Windows_UI_Xaml_CornerRadius) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorCornerRadius(struct struct_Windows_UI_Xaml_CornerRadius*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionIndicatorCornerRadius(struct struct_Windows_UI_Xaml_CornerRadius) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorVisualEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionIndicatorVisualEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectionIndicatorMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectionIndicatorBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorPointerOverBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectionIndicatorPointerOverBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorPressedBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectionIndicatorPressedBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorDisabledBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectionIndicatorDisabledBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPressedBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedPressedBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedDisabledBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedDisabledBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedInnerBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedInnerBorderBrush(void*) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall put_PointerOverBorderBrush(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectionCheckMarkVisualEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckHintBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckSelectingBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PlaceholderBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedForegroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPointerOverBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DisabledOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DragOpacityProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ReorderHintOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterHorizontalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterVerticalContentAlignmentProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ListViewItemPresenterPaddingProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBackgroundMarginProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentMarginProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedPressedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PressedBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_FocusSecondaryBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverForegroundProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_RevealBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RevealBorderThicknessProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_RevealBackgroundShowsAboveContentProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedDisabledBackgroundProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckPressedBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckDisabledBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPointerOverBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPressedBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxDisabledBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedPointerOverBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedPressedBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxSelectedDisabledBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPointerOverBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxPressedBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxDisabledBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_CheckBoxCornerRadiusProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorCornerRadiusProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorVisualEnabledProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorModeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorPointerOverBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorPressedBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectionIndicatorDisabledBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedPressedBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedDisabledBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedInnerBorderBrushProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_PointerOverBorderBrushProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DragItemsCount(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldLoop(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldLoop(bool) noexcept = 0;
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
            virtual int32_t __stdcall put_Items(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedItem(void*) noexcept = 0;
            virtual int32_t __stdcall get_ItemWidth(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ItemWidth(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ItemHeight(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ItemHeight(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplate(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemTemplate(void*) noexcept = 0;
            virtual int32_t __stdcall add_SelectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldLoopProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItemProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemWidthProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemHeightProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ItemTemplateProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KeyboardAcceleratorTextMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FlyoutContentMinWidth(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Icon(void**) noexcept = 0;
            virtual int32_t __stdcall put_Icon(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IconProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_CanVerticallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanVerticallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_CanHorizontallyScroll(bool*) noexcept = 0;
            virtual int32_t __stdcall put_CanHorizontallyScroll(bool) noexcept = 0;
            virtual int32_t __stdcall get_ExtentWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ExtentHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportWidth(double*) noexcept = 0;
            virtual int32_t __stdcall get_ViewportHeight(double*) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollOwner(void**) noexcept = 0;
            virtual int32_t __stdcall put_ScrollOwner(void*) noexcept = 0;
            virtual int32_t __stdcall LineUp() noexcept = 0;
            virtual int32_t __stdcall LineDown() noexcept = 0;
            virtual int32_t __stdcall LineLeft() noexcept = 0;
            virtual int32_t __stdcall LineRight() noexcept = 0;
            virtual int32_t __stdcall PageUp() noexcept = 0;
            virtual int32_t __stdcall PageDown() noexcept = 0;
            virtual int32_t __stdcall PageLeft() noexcept = 0;
            virtual int32_t __stdcall PageRight() noexcept = 0;
            virtual int32_t __stdcall MouseWheelUp() noexcept = 0;
            virtual int32_t __stdcall MouseWheelDown() noexcept = 0;
            virtual int32_t __stdcall MouseWheelLeft() noexcept = 0;
            virtual int32_t __stdcall MouseWheelRight() noexcept = 0;
            virtual int32_t __stdcall SetHorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall SetVerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall MakeVisible(void*, Windows::Foundation::Rect, Windows::Foundation::Rect*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnConfirmed() noexcept = 0;
            virtual int32_t __stdcall ShouldShowConfirmationButtons(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_TitleProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetTitle(void*, void**) noexcept = 0;
            virtual int32_t __stdcall SetTitle(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Child(void**) noexcept = 0;
            virtual int32_t __stdcall put_Child(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsOpen(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsOpen(bool) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_HorizontalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall put_VerticalOffset(double) noexcept = 0;
            virtual int32_t __stdcall get_ChildTransitions(void**) noexcept = 0;
            virtual int32_t __stdcall put_ChildTransitions(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsLightDismissEnabled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsLightDismissEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall add_Opened(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Opened(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Closed(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Closed(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LightDismissOverlayMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_LightDismissOverlayMode(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBounds(bool*) noexcept = 0;
            virtual int32_t __stdcall put_ShouldConstrainToRootBounds(bool) noexcept = 0;
            virtual int32_t __stdcall get_IsConstrainedToRootBounds(bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopup4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlacementTarget(void**) noexcept = 0;
            virtual int32_t __stdcall put_PlacementTarget(void*) noexcept = 0;
            virtual int32_t __stdcall get_DesiredPlacement(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_DesiredPlacement(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ActualPlacement(int32_t*) noexcept = 0;
            virtual int32_t __stdcall add_ActualPlacementChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ActualPlacementChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ChildProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsOpenProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_HorizontalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_VerticalOffsetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ChildTransitionsProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsLightDismissEnabledProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_LightDismissOverlayModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ShouldConstrainToRootBoundsProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IPopupStatics4>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_PlacementTargetProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_DesiredPlacementProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EllipseDiameter(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseAnimationWellPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerAnimationStartPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_ContainerAnimationEndPosition(double*) noexcept = 0;
            virtual int32_t __stdcall get_IndicatorLengthDelta(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_EllipseDiameter(double*) noexcept = 0;
            virtual int32_t __stdcall get_EllipseOffset(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_MaxSideLength(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Minimum(double*) noexcept = 0;
            virtual int32_t __stdcall put_Minimum(double) noexcept = 0;
            virtual int32_t __stdcall get_Maximum(double*) noexcept = 0;
            virtual int32_t __stdcall put_Maximum(double) noexcept = 0;
            virtual int32_t __stdcall get_SmallChange(double*) noexcept = 0;
            virtual int32_t __stdcall put_SmallChange(double) noexcept = 0;
            virtual int32_t __stdcall get_LargeChange(double*) noexcept = 0;
            virtual int32_t __stdcall put_LargeChange(double) noexcept = 0;
            virtual int32_t __stdcall get_Value(double*) noexcept = 0;
            virtual int32_t __stdcall put_Value(double) noexcept = 0;
            virtual int32_t __stdcall add_ValueChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_ValueChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnMinimumChanged(double, double) noexcept = 0;
            virtual int32_t __stdcall OnMaximumChanged(double, double) noexcept = 0;
            virtual int32_t __stdcall OnValueChanged(double, double) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinimumProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_MaximumProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SmallChangeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_LargeChangeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ValueProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OldValue(double*) noexcept = 0;
            virtual int32_t __stdcall get_NewValue(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Delay(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Delay(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_Interval(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Interval(int32_t) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_DelayProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IntervalProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Orientation(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_Orientation(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_ViewportSize(double*) noexcept = 0;
            virtual int32_t __stdcall put_ViewportSize(double) noexcept = 0;
            virtual int32_t __stdcall get_IndicatorMode(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_IndicatorMode(int32_t) noexcept = 0;
            virtual int32_t __stdcall add_Scroll(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Scroll(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OrientationProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_ViewportSizeProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IndicatorModeProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_NewValue(double*) noexcept = 0;
            virtual int32_t __stdcall get_ScrollEventType(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_AreHorizontalSnapPointsRegular(bool*) noexcept = 0;
            virtual int32_t __stdcall get_AreVerticalSnapPointsRegular(bool*) noexcept = 0;
            virtual int32_t __stdcall add_HorizontalSnapPointsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_HorizontalSnapPointsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_VerticalSnapPointsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_VerticalSnapPointsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetIrregularSnapPoints(int32_t, int32_t, void**) noexcept = 0;
            virtual int32_t __stdcall GetRegularSnapPoints(int32_t, int32_t, float*, float*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelector>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedIndex(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_SelectedIndex(int32_t) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedItem(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValue(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedValue(void*) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValuePath(void**) noexcept = 0;
            virtual int32_t __stdcall put_SelectedValuePath(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsSynchronizedWithCurrentItem(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsSynchronizedWithCurrentItem(void*) noexcept = 0;
            virtual int32_t __stdcall add_SelectionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_SelectionChanged(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelected(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsSelected(bool) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsSelectedProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_SelectedIndexProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedItemProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValueProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_SelectedValuePathProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsSynchronizedWithCurrentItemProperty(void**) noexcept = 0;
            virtual int32_t __stdcall GetIsSelectionActive(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_HeaderBackground(void**) noexcept = 0;
            virtual int32_t __stdcall get_HeaderForeground(void**) noexcept = 0;
            virtual int32_t __stdcall get_BorderBrush(void**) noexcept = 0;
            virtual int32_t __stdcall get_BorderThickness(struct struct_Windows_UI_Xaml_Thickness*) noexcept = 0;
            virtual int32_t __stdcall get_IconSource(void**) noexcept = 0;
            virtual int32_t __stdcall get_ContentTransitions(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OpenPaneLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeOpenPaneLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_OpenPaneLengthMinusCompactLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_NegativeOpenPaneLengthMinusCompactLength(double*) noexcept = 0;
            virtual int32_t __stdcall get_OpenPaneGridLength(struct struct_Windows_UI_Xaml_GridLength*) noexcept = 0;
            virtual int32_t __stdcall get_CompactPaneGridLength(struct struct_Windows_UI_Xaml_GridLength*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IThumb>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDragging(bool*) noexcept = 0;
            virtual int32_t __stdcall add_DragStarted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragStarted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DragDelta(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragDelta(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_DragCompleted(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_DragCompleted(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall CancelDrag() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsDraggingProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ITickBar>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Fill(void**) noexcept = 0;
            virtual int32_t __stdcall put_Fill(void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FillProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsChecked(void**) noexcept = 0;
            virtual int32_t __stdcall put_IsChecked(void*) noexcept = 0;
            virtual int32_t __stdcall get_IsThreeState(bool*) noexcept = 0;
            virtual int32_t __stdcall put_IsThreeState(bool) noexcept = 0;
            virtual int32_t __stdcall add_Checked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Checked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Unchecked(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Unchecked(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_Indeterminate(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_Indeterminate(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateInstance(void*, void**, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall OnToggle() noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_IsCheckedProperty(void**) noexcept = 0;
            virtual int32_t __stdcall get_IsThreeStateProperty(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_KnobCurrentToOnOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_KnobCurrentToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_KnobOnToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_KnobOffToOnOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainCurrentToOnOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainCurrentToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainOnToOffOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_CurtainOffToOnOffset(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_FromHorizontalOffset(double*) noexcept = 0;
            virtual int32_t __stdcall get_FromVerticalOffset(double*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ItemsChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler>
    {
        struct __declspec(novtable) type : unknown_abi
        {
            virtual int32_t __stdcall Invoke(void*, void*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) KeyboardAcceleratorTextMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarButtonTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarButtonTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) ClipRect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CompactVerticalDelta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) CompactRootMargin() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MinimalVerticalDelta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) MinimalRootMargin() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HiddenVerticalDelta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) HiddenRootMargin() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) NegativeCompactVerticalDelta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) NegativeMinimalVerticalDelta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) NegativeHiddenVerticalDelta() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarTemplateSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarTemplateSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) KeyboardAcceleratorTextMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IAppBarToggleButtonTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IAppBarToggleButtonTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::ClickMode) ClickMode() const;
        WINRT_IMPL_AUTO(void) ClickMode(Windows::UI::Xaml::Controls::ClickMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPointerOver() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsPressed() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Input::ICommand) Command() const;
        WINRT_IMPL_AUTO(void) Command(Windows::UI::Xaml::Input::ICommand const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) CommandParameter() const;
        WINRT_IMPL_AUTO(void) CommandParameter(Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Click(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Click_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IButtonBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IButtonBase>::remove_Click>;
        [[nodiscard]] Click_revoker Click(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Click(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ButtonBase) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ClickModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsPointerOverProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsPressedProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CommandProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CommandParameterProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IButtonBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IButtonBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICalendarPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICalendarPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICalendarPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) MinViewWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) HeaderText() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WeekDay1() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WeekDay2() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WeekDay3() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WeekDay4() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WeekDay5() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WeekDay6() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WeekDay7() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasMoreContentAfter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasMoreContentBefore() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) HasMoreViews() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) ClipRect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterX() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CenterY() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICalendarViewTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICalendarViewTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanVerticallyScroll() const;
        WINRT_IMPL_AUTO(void) CanVerticallyScroll(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanHorizontallyScroll() const;
        WINRT_IMPL_AUTO(void) CanHorizontallyScroll(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExtentWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExtentHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ViewportWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ViewportHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) ScrollOwner() const;
        WINRT_IMPL_AUTO(void) ScrollOwner(Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(void) LineUp() const;
        WINRT_IMPL_AUTO(void) LineDown() const;
        WINRT_IMPL_AUTO(void) LineLeft() const;
        WINRT_IMPL_AUTO(void) LineRight() const;
        WINRT_IMPL_AUTO(void) PageUp() const;
        WINRT_IMPL_AUTO(void) PageDown() const;
        WINRT_IMPL_AUTO(void) PageLeft() const;
        WINRT_IMPL_AUTO(void) PageRight() const;
        WINRT_IMPL_AUTO(void) MouseWheelUp() const;
        WINRT_IMPL_AUTO(void) MouseWheelDown() const;
        WINRT_IMPL_AUTO(void) MouseWheelLeft() const;
        WINRT_IMPL_AUTO(void) MouseWheelRight() const;
        WINRT_IMPL_AUTO(void) SetHorizontalOffset(double offset) const;
        WINRT_IMPL_AUTO(void) SetVerticalOffset(double offset) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICarouselPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::CarouselPanel) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICarouselPanelFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICarouselPanelFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::ColorPickerHsvChannel) ColorChannel() const;
        WINRT_IMPL_AUTO(void) ColorChannel(Windows::UI::Xaml::Controls::ColorPickerHsvChannel const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSlider>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSlider<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ColorPickerSlider) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ColorChannelProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorPickerSliderStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorPickerSliderStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Color) Color() const;
        WINRT_IMPL_AUTO(void) Color(Windows::UI::Color const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Numerics::float4) HsvColor() const;
        WINRT_IMPL_AUTO(void) HsvColor(Windows::Foundation::Numerics::float4 const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MinHue() const;
        WINRT_IMPL_AUTO(void) MinHue(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxHue() const;
        WINRT_IMPL_AUTO(void) MaxHue(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MinSaturation() const;
        WINRT_IMPL_AUTO(void) MinSaturation(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxSaturation() const;
        WINRT_IMPL_AUTO(void) MaxSaturation(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MinValue() const;
        WINRT_IMPL_AUTO(void) MinValue(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) MaxValue() const;
        WINRT_IMPL_AUTO(void) MaxValue(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::ColorSpectrumShape) Shape() const;
        WINRT_IMPL_AUTO(void) Shape(Windows::UI::Xaml::Controls::ColorSpectrumShape const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::ColorSpectrumComponents) Components() const;
        WINRT_IMPL_AUTO(void) Components(Windows::UI::Xaml::Controls::ColorSpectrumComponents const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) ColorChanged(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& handler) const;
        using ColorChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>::remove_ColorChanged>;
        [[nodiscard]] ColorChanged_revoker ColorChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::ColorSpectrum, Windows::UI::Xaml::Controls::ColorChangedEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) ColorChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrum>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrum<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ColorSpectrum) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ColorProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) HsvColorProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MinHueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MaxHueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MinSaturationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MaxSaturationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MinValueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MaxValueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ShapeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ComponentsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IColorSpectrumStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IColorSpectrumStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) DropDownOpenedHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DropDownClosedHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DropDownOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::AnimationDirection) SelectedItemDirection() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) DropDownContentMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IComboBoxTemplateSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IComboBoxTemplateSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBar
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBarTemplateSettings) FlyoutTemplateSettings() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBar>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::CommandBarFlyoutCommandBar) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) OpenAnimationStartPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OpenAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CloseAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CurrentWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandedWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) WidthExpansionDelta() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) WidthExpansionAnimationStartPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) WidthExpansionAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) WidthExpansionMoreButtonAnimationStartPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) WidthExpansionMoreButtonAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandUpOverflowVerticalPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandDownOverflowVerticalPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandUpAnimationStartPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandUpAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandUpAnimationHoldPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandDownAnimationStartPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandDownAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExpandDownAnimationHoldPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) ContentClipRect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) OverflowContentClipRect() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarFlyoutCommandBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarFlyoutCommandBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) ContentHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Rect) OverflowContentClipRect() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentMinWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentMaxHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentHorizontalOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) NegativeOverflowContentHeight() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentMaxWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Visibility) EffectiveOverflowButtonVisibility() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentCompactYTranslation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentMinimalYTranslation() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OverflowContentHiddenYTranslation() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ICommandBarTemplateSettings4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ICommandBarTemplateSettings4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Canceled() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::DragCompletedEventArgs) CreateInstanceWithHorizontalChangeVerticalChangeAndCanceled(double horizontalChange, double verticalChange, bool canceled, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragCompletedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragCompletedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalChange() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalChange() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::DragDeltaEventArgs) CreateInstanceWithHorizontalChangeAndVerticalChange(double horizontalChange, double verticalChange, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragDeltaEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragDeltaEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalOffset() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::DragStartedEventArgs) CreateInstanceWithHorizontalOffsetAndVerticalOffset(double horizontalOffset, double verticalOffset, Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IDragStartedEventArgsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IDragStartedEventArgsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode) Placement() const;
        WINRT_IMPL_AUTO(void) Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Opened_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Opened>;
        [[nodiscard]] Opened_revoker Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Opened(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Opening(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Opening_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>::remove_Opening>;
        [[nodiscard]] Opening_revoker Opening(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Opening(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) ShowAt(Windows::UI::Xaml::FrameworkElement const& placementTarget) const;
        WINRT_IMPL_AUTO(void) Hide() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::FrameworkElement) Target() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowFocusOnInteraction() const;
        WINRT_IMPL_AUTO(void) AllowFocusOnInteraction(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::LightDismissOverlayMode) LightDismissOverlayMode() const;
        WINRT_IMPL_AUTO(void) LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AllowFocusWhenDisabled() const;
        WINRT_IMPL_AUTO(void) AllowFocusWhenDisabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::ElementSoundMode) ElementSoundMode() const;
        WINRT_IMPL_AUTO(void) ElementSoundMode(Windows::UI::Xaml::ElementSoundMode const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Closing(Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& handler) const;
        using Closing_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>::remove_Closing>;
        [[nodiscard]] Closing_revoker Closing(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::UI::Xaml::Controls::Primitives::FlyoutBase, Windows::UI::Xaml::Controls::Primitives::FlyoutBaseClosingEventArgs> const& handler) const;
        WINRT_IMPL_AUTO(void) Closing(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyObject) OverlayInputPassThroughElement() const;
        WINRT_IMPL_AUTO(void) OverlayInputPassThroughElement(Windows::UI::Xaml::DependencyObject const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4
    {
        WINRT_IMPL_AUTO(void) TryInvokeKeyboardAccelerator(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode) ShowMode() const;
        WINRT_IMPL_AUTO(void) ShowMode(Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) InputDevicePrefersPrimaryCommands() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AreOpenCloseAnimationsEnabled() const;
        WINRT_IMPL_AUTO(void) AreOpenCloseAnimationsEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOpen() const;
        WINRT_IMPL_AUTO(void) ShowAt(Windows::UI::Xaml::DependencyObject const& placementTarget, Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions const& showOptions) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase6
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldConstrainToRootBounds() const;
        WINRT_IMPL_AUTO(void) ShouldConstrainToRootBounds(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsConstrainedToRootBounds() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::XamlRoot) XamlRoot() const;
        WINRT_IMPL_AUTO(void) XamlRoot(Windows::UI::Xaml::XamlRoot const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBase6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBase6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) Cancel() const;
        WINRT_IMPL_AUTO(void) Cancel(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseClosingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseClosingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::FlyoutBase) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Control) CreatePresenter() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4
    {
        WINRT_IMPL_AUTO(void) OnProcessKeyboardAccelerators(Windows::UI::Xaml::Input::ProcessKeyboardAcceleratorEventArgs const& args) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseOverrides4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseOverrides4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PlacementProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AttachedFlyoutProperty() const;
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::FlyoutBase) GetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element) const;
        WINRT_IMPL_AUTO(void) SetAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& element, Windows::UI::Xaml::Controls::Primitives::FlyoutBase const& value) const;
        WINRT_IMPL_AUTO(void) ShowAttachedFlyout(Windows::UI::Xaml::FrameworkElement const& flyoutOwner) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AllowFocusOnInteractionProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LightDismissOverlayModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AllowFocusWhenDisabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ElementSoundModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) OverlayInputPassThroughElementProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics5
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ShowModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) InputDevicePrefersPrimaryCommandsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) AreOpenCloseAnimationsEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsOpenProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics5>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics5<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics6
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ShouldConstrainToRootBoundsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutBaseStatics6>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutBaseStatics6<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptions
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::Point>) Position() const;
        WINRT_IMPL_AUTO(void) Position(Windows::Foundation::IReference<Windows::Foundation::Point> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<Windows::Foundation::Rect>) ExclusionRect() const;
        WINRT_IMPL_AUTO(void) ExclusionRect(Windows::Foundation::IReference<Windows::Foundation::Rect> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode) ShowMode() const;
        WINRT_IMPL_AUTO(void) ShowMode(Windows::UI::Xaml::Controls::Primitives::FlyoutShowMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode) Placement() const;
        WINRT_IMPL_AUTO(void) Placement(Windows::UI::Xaml::Controls::Primitives::FlyoutPlacementMode const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptions>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptions<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptionsFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::FlyoutShowOptions) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IFlyoutShowOptionsFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IFlyoutShowOptionsFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelper
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelper>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelper<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::GeneratorPosition) FromIndexAndOffset(int32_t index, int32_t offset) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGeneratorPositionHelperStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGeneratorPositionHelperStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SelectionCheckMarkVisualEnabled() const;
        WINRT_IMPL_AUTO(void) SelectionCheckMarkVisualEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckHintBrush() const;
        WINRT_IMPL_AUTO(void) CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckSelectingBrush() const;
        WINRT_IMPL_AUTO(void) CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBrush() const;
        WINRT_IMPL_AUTO(void) CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) DragBackground() const;
        WINRT_IMPL_AUTO(void) DragBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) DragForeground() const;
        WINRT_IMPL_AUTO(void) DragForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) FocusBorderBrush() const;
        WINRT_IMPL_AUTO(void) FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) PlaceholderBackground() const;
        WINRT_IMPL_AUTO(void) PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) PointerOverBackground() const;
        WINRT_IMPL_AUTO(void) PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedBackground() const;
        WINRT_IMPL_AUTO(void) SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedForeground() const;
        WINRT_IMPL_AUTO(void) SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedPointerOverBackground() const;
        WINRT_IMPL_AUTO(void) SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedPointerOverBorderBrush() const;
        WINRT_IMPL_AUTO(void) SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) SelectedBorderThickness() const;
        WINRT_IMPL_AUTO(void) SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DisabledOpacity() const;
        WINRT_IMPL_AUTO(void) DisabledOpacity(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DragOpacity() const;
        WINRT_IMPL_AUTO(void) DragOpacity(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ReorderHintOffset() const;
        WINRT_IMPL_AUTO(void) ReorderHintOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::HorizontalAlignment) GridViewItemPresenterHorizontalContentAlignment() const;
        WINRT_IMPL_AUTO(void) GridViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::VerticalAlignment) GridViewItemPresenterVerticalContentAlignment() const;
        WINRT_IMPL_AUTO(void) GridViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) GridViewItemPresenterPadding() const;
        WINRT_IMPL_AUTO(void) GridViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) PointerOverBackgroundMargin() const;
        WINRT_IMPL_AUTO(void) PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) ContentMargin() const;
        WINRT_IMPL_AUTO(void) ContentMargin(Windows::UI::Xaml::Thickness const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::GridViewItemPresenter) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionCheckMarkVisualEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckHintBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckSelectingBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DragBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DragForegroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FocusBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PlaceholderBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointerOverBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedForegroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedPointerOverBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedPointerOverBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedBorderThicknessProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DisabledOpacityProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DragOpacityProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ReorderHintOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) GridViewItemPresenterHorizontalContentAlignmentProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) GridViewItemPresenterVerticalContentAlignmentProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) GridViewItemPresenterPaddingProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointerOverBackgroundMarginProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ContentMarginProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemPresenterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemPresenterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) DragItemsCount() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IGridViewItemTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IGridViewItemTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Action() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::GeneratorPosition) Position() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::GeneratorPosition) OldPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ItemCount() const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ItemUICount() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IItemsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IItemsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) Enabled() const;
        WINRT_IMPL_AUTO(void) Enabled(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) Disabled() const;
        WINRT_IMPL_AUTO(void) Disabled(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) EnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DisabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemBackgroundConverterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemBackgroundConverterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) Enabled() const;
        WINRT_IMPL_AUTO(void) Enabled(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) Disabled() const;
        WINRT_IMPL_AUTO(void) Disabled(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) EnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DisabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IJumpListItemForegroundConverterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IJumpListItemForegroundConverterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformation
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformation>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformation<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) GetLayoutExceptionElement(Windows::Foundation::IInspectable const& dispatcher) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) GetLayoutSlot(Windows::UI::Xaml::FrameworkElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2
    {
        WINRT_IMPL_AUTO(Windows::Foundation::Size) GetAvailableSize(Windows::UI::Xaml::UIElement const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILayoutInformationStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILayoutInformationStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SelectionCheckMarkVisualEnabled() const;
        WINRT_IMPL_AUTO(void) SelectionCheckMarkVisualEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckHintBrush() const;
        WINRT_IMPL_AUTO(void) CheckHintBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckSelectingBrush() const;
        WINRT_IMPL_AUTO(void) CheckSelectingBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBrush() const;
        WINRT_IMPL_AUTO(void) CheckBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) DragBackground() const;
        WINRT_IMPL_AUTO(void) DragBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) DragForeground() const;
        WINRT_IMPL_AUTO(void) DragForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) FocusBorderBrush() const;
        WINRT_IMPL_AUTO(void) FocusBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) PlaceholderBackground() const;
        WINRT_IMPL_AUTO(void) PlaceholderBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) PointerOverBackground() const;
        WINRT_IMPL_AUTO(void) PointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedBackground() const;
        WINRT_IMPL_AUTO(void) SelectedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedForeground() const;
        WINRT_IMPL_AUTO(void) SelectedForeground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedPointerOverBackground() const;
        WINRT_IMPL_AUTO(void) SelectedPointerOverBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedPointerOverBorderBrush() const;
        WINRT_IMPL_AUTO(void) SelectedPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) SelectedBorderThickness() const;
        WINRT_IMPL_AUTO(void) SelectedBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DisabledOpacity() const;
        WINRT_IMPL_AUTO(void) DisabledOpacity(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) DragOpacity() const;
        WINRT_IMPL_AUTO(void) DragOpacity(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ReorderHintOffset() const;
        WINRT_IMPL_AUTO(void) ReorderHintOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::HorizontalAlignment) ListViewItemPresenterHorizontalContentAlignment() const;
        WINRT_IMPL_AUTO(void) ListViewItemPresenterHorizontalContentAlignment(Windows::UI::Xaml::HorizontalAlignment const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::VerticalAlignment) ListViewItemPresenterVerticalContentAlignment() const;
        WINRT_IMPL_AUTO(void) ListViewItemPresenterVerticalContentAlignment(Windows::UI::Xaml::VerticalAlignment const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) ListViewItemPresenterPadding() const;
        WINRT_IMPL_AUTO(void) ListViewItemPresenterPadding(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) PointerOverBackgroundMargin() const;
        WINRT_IMPL_AUTO(void) PointerOverBackgroundMargin(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) ContentMargin() const;
        WINRT_IMPL_AUTO(void) ContentMargin(Windows::UI::Xaml::Thickness const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedPressedBackground() const;
        WINRT_IMPL_AUTO(void) SelectedPressedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) PressedBackground() const;
        WINRT_IMPL_AUTO(void) PressedBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) FocusSecondaryBorderBrush() const;
        WINRT_IMPL_AUTO(void) FocusSecondaryBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode) CheckMode() const;
        WINRT_IMPL_AUTO(void) CheckMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterCheckMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) PointerOverForeground() const;
        WINRT_IMPL_AUTO(void) PointerOverForeground(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) RevealBackground() const;
        WINRT_IMPL_AUTO(void) RevealBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) RevealBorderBrush() const;
        WINRT_IMPL_AUTO(void) RevealBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) RevealBorderThickness() const;
        WINRT_IMPL_AUTO(void) RevealBorderThickness(Windows::UI::Xaml::Thickness const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) RevealBackgroundShowsAboveContent() const;
        WINRT_IMPL_AUTO(void) RevealBackgroundShowsAboveContent(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedDisabledBackground() const;
        WINRT_IMPL_AUTO(void) SelectedDisabledBackground(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckPressedBrush() const;
        WINRT_IMPL_AUTO(void) CheckPressedBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckDisabledBrush() const;
        WINRT_IMPL_AUTO(void) CheckDisabledBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxPointerOverBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxPointerOverBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxPressedBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxPressedBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxDisabledBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxDisabledBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxSelectedBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxSelectedBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxSelectedPointerOverBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxSelectedPointerOverBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxSelectedPressedBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxSelectedPressedBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxSelectedDisabledBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxSelectedDisabledBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxBorderBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxPointerOverBorderBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxPointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxPressedBorderBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxPressedBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) CheckBoxDisabledBorderBrush() const;
        WINRT_IMPL_AUTO(void) CheckBoxDisabledBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::CornerRadius) CheckBoxCornerRadius() const;
        WINRT_IMPL_AUTO(void) CheckBoxCornerRadius(Windows::UI::Xaml::CornerRadius const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::CornerRadius) SelectionIndicatorCornerRadius() const;
        WINRT_IMPL_AUTO(void) SelectionIndicatorCornerRadius(Windows::UI::Xaml::CornerRadius const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) SelectionIndicatorVisualEnabled() const;
        WINRT_IMPL_AUTO(void) SelectionIndicatorVisualEnabled(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterSelectionIndicatorMode) SelectionIndicatorMode() const;
        WINRT_IMPL_AUTO(void) SelectionIndicatorMode(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenterSelectionIndicatorMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectionIndicatorBrush() const;
        WINRT_IMPL_AUTO(void) SelectionIndicatorBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectionIndicatorPointerOverBrush() const;
        WINRT_IMPL_AUTO(void) SelectionIndicatorPointerOverBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectionIndicatorPressedBrush() const;
        WINRT_IMPL_AUTO(void) SelectionIndicatorPressedBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectionIndicatorDisabledBrush() const;
        WINRT_IMPL_AUTO(void) SelectionIndicatorDisabledBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedBorderBrush() const;
        WINRT_IMPL_AUTO(void) SelectedBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedPressedBorderBrush() const;
        WINRT_IMPL_AUTO(void) SelectedPressedBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedDisabledBorderBrush() const;
        WINRT_IMPL_AUTO(void) SelectedDisabledBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) SelectedInnerBorderBrush() const;
        WINRT_IMPL_AUTO(void) SelectedInnerBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) PointerOverBorderBrush() const;
        WINRT_IMPL_AUTO(void) PointerOverBorderBrush(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenter4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenter4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ListViewItemPresenter) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionCheckMarkVisualEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckHintBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckSelectingBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DragBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DragForegroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FocusBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PlaceholderBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointerOverBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedForegroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedPointerOverBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedPointerOverBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedBorderThicknessProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DisabledOpacityProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DragOpacityProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ReorderHintOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ListViewItemPresenterHorizontalContentAlignmentProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ListViewItemPresenterVerticalContentAlignmentProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ListViewItemPresenterPaddingProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointerOverBackgroundMarginProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ContentMarginProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedPressedBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PressedBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FocusSecondaryBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointerOverForegroundProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RevealBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RevealBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RevealBorderThicknessProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) RevealBackgroundShowsAboveContentProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedDisabledBackgroundProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckPressedBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckDisabledBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxPointerOverBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxPressedBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxDisabledBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxSelectedBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxSelectedPointerOverBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxSelectedPressedBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxSelectedDisabledBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxPointerOverBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxPressedBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxDisabledBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) CheckBoxCornerRadiusProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionIndicatorCornerRadiusProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionIndicatorVisualEnabledProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionIndicatorModeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionIndicatorBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionIndicatorPointerOverBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionIndicatorPressedBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectionIndicatorDisabledBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedPressedBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedDisabledBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedInnerBorderBrushProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PointerOverBorderBrushProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemPresenterStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemPresenterStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) DragItemsCount() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IListViewItemTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IListViewItemTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldLoop() const;
        WINRT_IMPL_AUTO(void) ShouldLoop(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Foundation::IInspectable>) Items() const;
        WINRT_IMPL_AUTO(void) Items(param::vector<Windows::Foundation::IInspectable> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) SelectedIndex() const;
        WINRT_IMPL_AUTO(void) SelectedIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) SelectedItem() const;
        WINRT_IMPL_AUTO(void) SelectedItem(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ItemWidth() const;
        WINRT_IMPL_AUTO(void) ItemWidth(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) ItemHeight() const;
        WINRT_IMPL_AUTO(void) ItemHeight(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DataTemplate) ItemTemplate() const;
        WINRT_IMPL_AUTO(void) ItemTemplate(Windows::UI::Xaml::DataTemplate const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        using SelectionChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>::remove_SelectionChanged>;
        [[nodiscard]] SelectionChanged_revoker SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) SelectionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelector>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorItem
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorItem>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ShouldLoopProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ItemsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedIndexProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedItemProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ItemWidthProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ItemHeightProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ItemTemplateProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ILoopingSelectorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ILoopingSelectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) KeyboardAcceleratorTextMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutItemTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutItemTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) FlyoutContentMinWidth() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IMenuFlyoutPresenterTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IMenuFlyoutPresenterTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenter
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::IconElement) Icon() const;
        WINRT_IMPL_AUTO(void) Icon(Windows::UI::Xaml::Controls::IconElement const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenter>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenter<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::NavigationViewItemPresenter) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IconProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::INavigationViewItemPresenterStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_INavigationViewItemPresenterStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanVerticallyScroll() const;
        WINRT_IMPL_AUTO(void) CanVerticallyScroll(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) CanHorizontallyScroll() const;
        WINRT_IMPL_AUTO(void) CanHorizontallyScroll(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExtentWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ExtentHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ViewportWidth() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ViewportHeight() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) ScrollOwner() const;
        WINRT_IMPL_AUTO(void) ScrollOwner(Windows::Foundation::IInspectable const& value) const;
        WINRT_IMPL_AUTO(void) LineUp() const;
        WINRT_IMPL_AUTO(void) LineDown() const;
        WINRT_IMPL_AUTO(void) LineLeft() const;
        WINRT_IMPL_AUTO(void) LineRight() const;
        WINRT_IMPL_AUTO(void) PageUp() const;
        WINRT_IMPL_AUTO(void) PageDown() const;
        WINRT_IMPL_AUTO(void) PageLeft() const;
        WINRT_IMPL_AUTO(void) PageRight() const;
        WINRT_IMPL_AUTO(void) MouseWheelUp() const;
        WINRT_IMPL_AUTO(void) MouseWheelDown() const;
        WINRT_IMPL_AUTO(void) MouseWheelLeft() const;
        WINRT_IMPL_AUTO(void) MouseWheelRight() const;
        WINRT_IMPL_AUTO(void) SetHorizontalOffset(double offset) const;
        WINRT_IMPL_AUTO(void) SetVerticalOffset(double offset) const;
        WINRT_IMPL_AUTO(Windows::Foundation::Rect) MakeVisible(Windows::UI::Xaml::UIElement const& visual, Windows::Foundation::Rect const& rectangle) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanelFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IOrientedVirtualizingPanelFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IOrientedVirtualizingPanelFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBase
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::PickerFlyoutBase) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides
    {
        WINRT_IMPL_AUTO(void) OnConfirmed() const;
        WINRT_IMPL_AUTO(bool) ShouldShowConfirmationButtons() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) TitleProperty() const;
        WINRT_IMPL_AUTO(hstring) GetTitle(Windows::UI::Xaml::DependencyObject const& element) const;
        WINRT_IMPL_AUTO(void) SetTitle(Windows::UI::Xaml::DependencyObject const& element, param::hstring const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPickerFlyoutBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPickerFlyoutBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItem
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItem>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::PivotHeaderItem) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderItemFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotHeaderPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotHeaderPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPivotPanel
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPivotPanel>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPivotPanel<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::UIElement) Child() const;
        WINRT_IMPL_AUTO(void) Child(Windows::UI::Xaml::UIElement const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsOpen() const;
        WINRT_IMPL_AUTO(void) IsOpen(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) HorizontalOffset() const;
        WINRT_IMPL_AUTO(void) HorizontalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) VerticalOffset() const;
        WINRT_IMPL_AUTO(void) VerticalOffset(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Animation::TransitionCollection) ChildTransitions() const;
        WINRT_IMPL_AUTO(void) ChildTransitions(Windows::UI::Xaml::Media::Animation::TransitionCollection const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsLightDismissEnabled() const;
        WINRT_IMPL_AUTO(void) IsLightDismissEnabled(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Opened(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Opened_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IPopup>::remove_Opened>;
        [[nodiscard]] Opened_revoker Opened(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Opened(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Closed(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using Closed_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IPopup>::remove_Closed>;
        [[nodiscard]] Closed_revoker Closed(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) Closed(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::LightDismissOverlayMode) LightDismissOverlayMode() const;
        WINRT_IMPL_AUTO(void) LightDismissOverlayMode(Windows::UI::Xaml::Controls::LightDismissOverlayMode const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) ShouldConstrainToRootBounds() const;
        WINRT_IMPL_AUTO(void) ShouldConstrainToRootBounds(bool value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsConstrainedToRootBounds() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopup4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::FrameworkElement) PlacementTarget() const;
        WINRT_IMPL_AUTO(void) PlacementTarget(Windows::UI::Xaml::FrameworkElement const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::PopupPlacementMode) DesiredPlacement() const;
        WINRT_IMPL_AUTO(void) DesiredPlacement(Windows::UI::Xaml::Controls::Primitives::PopupPlacementMode const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::PopupPlacementMode) ActualPlacement() const;
        WINRT_IMPL_AUTO(winrt::event_token) ActualPlacementChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using ActualPlacementChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IPopup4, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IPopup4>::remove_ActualPlacementChanged>;
        [[nodiscard]] ActualPlacementChanged_revoker ActualPlacementChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) ActualPlacementChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopup4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopup4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ChildProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsOpenProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) HorizontalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) VerticalOffsetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ChildTransitionsProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsLightDismissEnabledProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LightDismissOverlayModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics2>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics3
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ShouldConstrainToRootBoundsProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics3>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics4
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) PlacementTargetProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DesiredPlacementProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IPopupStatics4>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IPopupStatics4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) EllipseDiameter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) EllipseOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) EllipseAnimationWellPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) EllipseAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ContainerAnimationStartPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ContainerAnimationEndPosition() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) IndicatorLengthDelta() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IProgressBarTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IProgressBarTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) EllipseDiameter() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) EllipseOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) MaxSideLength() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IProgressRingTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IProgressRingTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) Minimum() const;
        WINRT_IMPL_AUTO(void) Minimum(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Maximum() const;
        WINRT_IMPL_AUTO(void) Maximum(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) SmallChange() const;
        WINRT_IMPL_AUTO(void) SmallChange(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) LargeChange() const;
        WINRT_IMPL_AUTO(void) LargeChange(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) Value() const;
        WINRT_IMPL_AUTO(void) Value(double value) const;
        WINRT_IMPL_AUTO(winrt::event_token) ValueChanged(Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& handler) const;
        using ValueChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IRangeBase, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IRangeBase>::remove_ValueChanged>;
        [[nodiscard]] ValueChanged_revoker ValueChanged(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::RangeBaseValueChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) ValueChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBase>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBase<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::RangeBase) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides
    {
        WINRT_IMPL_AUTO(void) OnMinimumChanged(double oldMinimum, double newMinimum) const;
        WINRT_IMPL_AUTO(void) OnMaximumChanged(double oldMaximum, double newMaximum) const;
        WINRT_IMPL_AUTO(void) OnValueChanged(double oldValue, double newValue) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MinimumProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) MaximumProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SmallChangeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) LargeChangeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ValueProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) OldValue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) NewValue() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRangeBaseValueChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRangeBaseValueChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Delay() const;
        WINRT_IMPL_AUTO(void) Delay(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) Interval() const;
        WINRT_IMPL_AUTO(void) Interval(int32_t value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRepeatButton>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButton<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) DelayProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IntervalProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IRepeatButtonStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IRepeatButtonStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Orientation) Orientation() const;
        WINRT_IMPL_AUTO(void) Orientation(Windows::UI::Xaml::Controls::Orientation const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) ViewportSize() const;
        WINRT_IMPL_AUTO(void) ViewportSize(double value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode) IndicatorMode() const;
        WINRT_IMPL_AUTO(void) IndicatorMode(Windows::UI::Xaml::Controls::Primitives::ScrollingIndicatorMode const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Scroll(Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& handler) const;
        using Scroll_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollBar, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollBar>::remove_Scroll>;
        [[nodiscard]] Scroll_revoker Scroll(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::ScrollEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Scroll(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollBar>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) OrientationProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) ViewportSizeProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IndicatorModeProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollBarStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollBarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) NewValue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ScrollEventType) ScrollEventType() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AreHorizontalSnapPointsRegular() const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) AreVerticalSnapPointsRegular() const;
        WINRT_IMPL_AUTO(winrt::event_token) HorizontalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using HorizontalSnapPointsChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>::remove_HorizontalSnapPointsChanged>;
        [[nodiscard]] HorizontalSnapPointsChanged_revoker HorizontalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) HorizontalSnapPointsChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) VerticalSnapPointsChanged(Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        using VerticalSnapPointsChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>::remove_VerticalSnapPointsChanged>;
        [[nodiscard]] VerticalSnapPointsChanged_revoker VerticalSnapPointsChanged(auto_revoke_t, Windows::Foundation::EventHandler<Windows::Foundation::IInspectable> const& handler) const;
        WINRT_IMPL_AUTO(void) VerticalSnapPointsChanged(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<float>) GetIrregularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment) const;
        WINRT_IMPL_AUTO(float) GetRegularSnapPoints(Windows::UI::Xaml::Controls::Orientation const& orientation, Windows::UI::Xaml::Controls::Primitives::SnapPointsAlignment const& alignment, float& offset) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IScrollSnapPointsInfo>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IScrollSnapPointsInfo<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelector
    {
        [[nodiscard]] WINRT_IMPL_AUTO(int32_t) SelectedIndex() const;
        WINRT_IMPL_AUTO(void) SelectedIndex(int32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) SelectedItem() const;
        WINRT_IMPL_AUTO(void) SelectedItem(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) SelectedValue() const;
        WINRT_IMPL_AUTO(void) SelectedValue(Windows::Foundation::IInspectable const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) SelectedValuePath() const;
        WINRT_IMPL_AUTO(void) SelectedValuePath(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<bool>) IsSynchronizedWithCurrentItem() const;
        WINRT_IMPL_AUTO(void) IsSynchronizedWithCurrentItem(Windows::Foundation::IReference<bool> const& value) const;
        WINRT_IMPL_AUTO(winrt::event_token) SelectionChanged(Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        using SelectionChanged_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::ISelector, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::ISelector>::remove_SelectionChanged>;
        [[nodiscard]] SelectionChanged_revoker SelectionChanged(auto_revoke_t, Windows::UI::Xaml::Controls::SelectionChangedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) SelectionChanged(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelector>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelector<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorFactory
    {
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsSelected() const;
        WINRT_IMPL_AUTO(void) IsSelected(bool value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItem>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItem<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::SelectorItem) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItemFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsSelectedProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorItemStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorItemStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedIndexProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedItemProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedValueProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) SelectedValuePathProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsSynchronizedWithCurrentItemProperty() const;
        WINRT_IMPL_AUTO(bool) GetIsSelectionActive(Windows::UI::Xaml::DependencyObject const& element) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISelectorStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISelectorStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) HeaderBackground() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) HeaderForeground() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) BorderBrush() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Thickness) BorderThickness() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::ImageSource) IconSource() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Animation::TransitionCollection) ContentTransitions() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISettingsFlyoutTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISettingsFlyoutTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) OpenPaneLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) NegativeOpenPaneLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) OpenPaneLengthMinusCompactLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) NegativeOpenPaneLengthMinusCompactLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::GridLength) OpenPaneGridLength() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::GridLength) CompactPaneGridLength() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ISplitViewTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ISplitViewTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IThumb
    {
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsDragging() const;
        WINRT_IMPL_AUTO(winrt::event_token) DragStarted(Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& handler) const;
        using DragStarted_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragStarted>;
        [[nodiscard]] DragStarted_revoker DragStarted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragStartedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) DragStarted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DragDelta(Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& handler) const;
        using DragDelta_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragDelta>;
        [[nodiscard]] DragDelta_revoker DragDelta(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragDeltaEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) DragDelta(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) DragCompleted(Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& handler) const;
        using DragCompleted_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IThumb, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IThumb>::remove_DragCompleted>;
        [[nodiscard]] DragCompleted_revoker DragCompleted(auto_revoke_t, Windows::UI::Xaml::Controls::Primitives::DragCompletedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) DragCompleted(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(void) CancelDrag() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IThumb>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IThumb<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IThumbStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsDraggingProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IThumbStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IThumbStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ITickBar
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::Media::Brush) Fill() const;
        WINRT_IMPL_AUTO(void) Fill(Windows::UI::Xaml::Media::Brush const& value) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ITickBar>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ITickBar<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) FillProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::ITickBarStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_ITickBarStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IReference<bool>) IsChecked() const;
        WINRT_IMPL_AUTO(void) IsChecked(Windows::Foundation::IReference<bool> const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(bool) IsThreeState() const;
        WINRT_IMPL_AUTO(void) IsThreeState(bool value) const;
        WINRT_IMPL_AUTO(winrt::event_token) Checked(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Checked_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Checked>;
        [[nodiscard]] Checked_revoker Checked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Checked(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Unchecked(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Unchecked_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Unchecked>;
        [[nodiscard]] Unchecked_revoker Unchecked(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Unchecked(winrt::event_token const& token) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) Indeterminate(Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        using Indeterminate_revoker = impl::event_revoker<Windows::UI::Xaml::Controls::Primitives::IToggleButton, &impl::abi_t<Windows::UI::Xaml::Controls::Primitives::IToggleButton>::remove_Indeterminate>;
        [[nodiscard]] Indeterminate_revoker Indeterminate(auto_revoke_t, Windows::UI::Xaml::RoutedEventHandler const& handler) const;
        WINRT_IMPL_AUTO(void) Indeterminate(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButton>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButton<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory
    {
        WINRT_IMPL_AUTO(Windows::UI::Xaml::Controls::Primitives::ToggleButton) CreateInstance(Windows::Foundation::IInspectable const& baseInterface, Windows::Foundation::IInspectable& innerInterface) const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonFactory>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonFactory<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides
    {
        WINRT_IMPL_AUTO(void) OnToggle() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonOverrides>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonOverrides<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsCheckedProperty() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::UI::Xaml::DependencyProperty) IsThreeStateProperty() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleButtonStatics>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleButtonStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) KnobCurrentToOnOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) KnobCurrentToOffOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) KnobOnToOffOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) KnobOffToOnOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CurtainCurrentToOnOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CurtainCurrentToOffOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CurtainOnToOffOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) CurtainOffToOnOffset() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToggleSwitchTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToggleSwitchTemplateSettings<D>;
    };
    template <typename D>
    struct consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings
    {
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromHorizontalOffset() const;
        [[nodiscard]] WINRT_IMPL_AUTO(double) FromVerticalOffset() const;
    };
    template <> struct consume<Windows::UI::Xaml::Controls::Primitives::IToolTipTemplateSettings>
    {
        template <typename D> using type = consume_Windows_UI_Xaml_Controls_Primitives_IToolTipTemplateSettings<D>;
    };
    struct struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition
    {
        int32_t Index;
        int32_t Offset;
    };
    template <> struct abi<Windows::UI::Xaml::Controls::Primitives::GeneratorPosition>
    {
        using type = struct_Windows_UI_Xaml_Controls_Primitives_GeneratorPosition;
    };
}
#endif
