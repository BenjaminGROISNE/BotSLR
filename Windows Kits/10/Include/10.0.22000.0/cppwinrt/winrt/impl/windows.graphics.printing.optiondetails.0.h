// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Graphics_Printing_OptionDetails_0_H
#define WINRT_Windows_Graphics_Printing_OptionDetails_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    template <typename TSender, typename TResult> struct __declspec(empty_bases) TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::Foundation::Collections
{
    template <typename K, typename V> struct __declspec(empty_bases) IMapView;
    template <typename T> struct __declspec(empty_bases) IVectorView;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing
{
    struct PrintTaskOptions;
}
WINRT_EXPORT namespace winrt::Windows::Storage::Streams
{
    struct IRandomAccessStreamWithContentType;
}
WINRT_EXPORT namespace winrt::Windows::Graphics::Printing::OptionDetails
{
    enum class PrintOptionStates : uint32_t
    {
        None = 0,
        Enabled = 0x1,
        Constrained = 0x2,
    };
    enum class PrintOptionType : int32_t
    {
        Unknown = 0,
        Number = 1,
        Text = 2,
        ItemList = 3,
        Toggle = 4,
    };
    struct IPrintBindingOptionDetails;
    struct IPrintBorderingOptionDetails;
    struct IPrintCollationOptionDetails;
    struct IPrintColorModeOptionDetails;
    struct IPrintCopiesOptionDetails;
    struct IPrintCustomItemDetails;
    struct IPrintCustomItemListOptionDetails;
    struct IPrintCustomItemListOptionDetails2;
    struct IPrintCustomItemListOptionDetails3;
    struct IPrintCustomOptionDetails;
    struct IPrintCustomTextOptionDetails;
    struct IPrintCustomTextOptionDetails2;
    struct IPrintCustomToggleOptionDetails;
    struct IPrintDuplexOptionDetails;
    struct IPrintHolePunchOptionDetails;
    struct IPrintItemListOptionDetails;
    struct IPrintMediaSizeOptionDetails;
    struct IPrintMediaTypeOptionDetails;
    struct IPrintNumberOptionDetails;
    struct IPrintOptionDetails;
    struct IPrintOrientationOptionDetails;
    struct IPrintPageRangeOptionDetails;
    struct IPrintQualityOptionDetails;
    struct IPrintStapleOptionDetails;
    struct IPrintTaskOptionChangedEventArgs;
    struct IPrintTaskOptionDetails;
    struct IPrintTaskOptionDetails2;
    struct IPrintTaskOptionDetailsStatic;
    struct IPrintTextOptionDetails;
    struct PrintBindingOptionDetails;
    struct PrintBorderingOptionDetails;
    struct PrintCollationOptionDetails;
    struct PrintColorModeOptionDetails;
    struct PrintCopiesOptionDetails;
    struct PrintCustomItemDetails;
    struct PrintCustomItemListOptionDetails;
    struct PrintCustomTextOptionDetails;
    struct PrintCustomToggleOptionDetails;
    struct PrintDuplexOptionDetails;
    struct PrintHolePunchOptionDetails;
    struct PrintMediaSizeOptionDetails;
    struct PrintMediaTypeOptionDetails;
    struct PrintOrientationOptionDetails;
    struct PrintPageRangeOptionDetails;
    struct PrintQualityOptionDetails;
    struct PrintStapleOptionDetails;
    struct PrintTaskOptionChangedEventArgs;
    struct PrintTaskOptionDetails;
}
namespace winrt::impl
{
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>{ using type = interface_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintPageRangeOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>{ using type = class_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintOptionStates>{ using type = enum_category; };
    template <> struct category<Windows::Graphics::Printing::OptionDetails::PrintOptionType>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintBindingOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintBorderingOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintCollationOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintColorModeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintCopiesOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintCustomItemListOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintCustomTextOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintCustomToggleOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintDuplexOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintHolePunchOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintMediaSizeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintMediaTypeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintOrientationOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintPageRangeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintPageRangeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintQualityOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintStapleOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.PrintTaskOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintOptionStates> = L"Windows.Graphics.Printing.OptionDetails.PrintOptionStates";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::PrintOptionType> = L"Windows.Graphics.Printing.OptionDetails.PrintOptionType";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintBindingOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintBorderingOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintCollationOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintColorModeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintCopiesOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomItemListOptionDetails3";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomTextOptionDetails2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintCustomToggleOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintDuplexOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintHolePunchOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintItemListOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintMediaSizeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintMediaTypeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintNumberOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintOrientationOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintPageRangeOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintQualityOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintStapleOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs> = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionChangedEventArgs";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2> = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetails2";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic> = L"Windows.Graphics.Printing.OptionDetails.IPrintTaskOptionDetailsStatic";
    template <> inline constexpr auto& name_v<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails> = L"Windows.Graphics.Printing.OptionDetails.IPrintTextOptionDetails";
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails>{ 0xC3F4CC98,0x9564,0x4F16,{ 0xA0,0x55,0xA9,0x8B,0x9A,0x49,0xE9,0xD3 } }; // C3F4CC98-9564-4F16-A055-A98B9A49E9D3
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails>{ 0x4D73BC8F,0xFB53,0x4EB2,{ 0x98,0x5F,0x1D,0x91,0xDE,0x0B,0x76,0x39 } }; // 4D73BC8F-FB53-4EB2-985F-1D91DE0B7639
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails>{ 0xD6ABB166,0xA5A6,0x40DC,{ 0xAC,0xC3,0x73,0x9F,0x28,0xF1,0xE5,0xD3 } }; // D6ABB166-A5A6-40DC-ACC3-739F28F1E5D3
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails>{ 0xDBA97704,0xF1D6,0x4843,{ 0xA4,0x84,0x9B,0x44,0x7C,0xDC,0xF3,0xB6 } }; // DBA97704-F1D6-4843-A484-9B447CDCF3B6
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails>{ 0x42053099,0x4339,0x4343,{ 0x89,0x8D,0x2C,0x47,0xB5,0xE0,0xC3,0x41 } }; // 42053099-4339-4343-898D-2C47B5E0C341
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>{ 0x5704B637,0x5C3A,0x449A,{ 0xAA,0x36,0xB3,0x29,0x1B,0x11,0x92,0xFD } }; // 5704B637-5C3A-449A-AA36-B3291B1192FD
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>{ 0xA5FAFD88,0x58F2,0x4EBD,{ 0xB9,0x0F,0x51,0xE4,0xF2,0x94,0x4C,0x5D } }; // A5FAFD88-58F2-4EBD-B90F-51E4F2944C5D
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2>{ 0xC9D6353D,0x651C,0x4A39,{ 0x90,0x6E,0x10,0x91,0xA1,0x80,0x1B,0xF1 } }; // C9D6353D-651C-4A39-906E-1091A1801BF1
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3>{ 0x4FA1B53F,0x3C34,0x4868,{ 0xA4,0x07,0xFC,0x5E,0xAB,0x25,0x9B,0x21 } }; // 4FA1B53F-3C34-4868-A407-FC5EAB259B21
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>{ 0xE32BDE1C,0x28AF,0x4B90,{ 0x95,0xDA,0xA3,0xAC,0xF3,0x20,0xB9,0x29 } }; // E32BDE1C-28AF-4B90-95DA-A3ACF320B929
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>{ 0x2AD171F8,0xC8BD,0x4905,{ 0x91,0x92,0x0D,0x75,0x13,0x6E,0x8B,0x31 } }; // 2AD171F8-C8BD-4905-9192-0D75136E8B31
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2>{ 0xCEA70B54,0xB977,0x4718,{ 0x83,0x38,0x7E,0xD2,0xB0,0xD8,0x6F,0xE3 } }; // CEA70B54-B977-4718-8338-7ED2B0D86FE3
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails>{ 0x9DB4D514,0xE461,0x4608,{ 0x8E,0xE9,0xDB,0x6F,0x5E,0xD0,0x73,0xC6 } }; // 9DB4D514-E461-4608-8EE9-DB6F5ED073C6
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails>{ 0xFCD94591,0xD4A4,0x44FA,{ 0xB3,0xFE,0x42,0xE0,0xBA,0x28,0xD5,0xAD } }; // FCD94591-D4A4-44FA-B3FE-42E0BA28D5AD
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails>{ 0xA6DE1F18,0x482C,0x4657,{ 0x9D,0x71,0x8D,0xDD,0xDB,0xEA,0x1E,0x1E } }; // A6DE1F18-482C-4657-9D71-8DDDDBEA1E1E
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>{ 0x9A2257BF,0xFE61,0x43D8,{ 0xA2,0x4F,0xA3,0xF6,0xAB,0x73,0x20,0xE7 } }; // 9A2257BF-FE61-43D8-A24F-A3F6AB7320E7
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails>{ 0x6C8D5BCF,0xC0BF,0x47C8,{ 0xB8,0x4A,0x62,0x8E,0x7D,0x0D,0x1A,0x1D } }; // 6C8D5BCF-C0BF-47C8-B84A-628E7D0D1A1D
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails>{ 0xF8C7000B,0xABF3,0x4ABC,{ 0x8E,0x86,0x22,0xAB,0xC5,0x74,0x4A,0x43 } }; // F8C7000B-ABF3-4ABC-8E86-22ABC5744A43
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>{ 0x4D01BBAF,0x645C,0x4DE9,{ 0x96,0x5F,0x6F,0xC6,0xBB,0xC4,0x7C,0xAB } }; // 4D01BBAF-645C-4DE9-965F-6FC6BBC47CAB
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>{ 0x390686CF,0xD682,0x495F,{ 0xAD,0xFE,0xD7,0x33,0x3F,0x5C,0x18,0x08 } }; // 390686CF-D682-495F-ADFE-D7333F5C1808
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails>{ 0x46C38879,0x66E0,0x4DA0,{ 0x87,0xB4,0xD2,0x54,0x57,0x82,0x4E,0xB7 } }; // 46C38879-66E0-4DA0-87B4-D25457824EB7
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails>{ 0x5A19E4B7,0x2BE8,0x4AA7,{ 0x9E,0xA5,0xDE,0xFB,0xE8,0x71,0x3B,0x4E } }; // 5A19E4B7-2BE8-4AA7-9EA5-DEFBE8713B4E
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails>{ 0x2DD06BA1,0xCE1A,0x44E6,{ 0x84,0xF9,0x3A,0x92,0xEA,0x1E,0x30,0x44 } }; // 2DD06BA1-CE1A-44E6-84F9-3A92EA1E3044
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails>{ 0xD43175BD,0x9C0B,0x44E0,{ 0x84,0xF6,0xCE,0xEB,0xCE,0x65,0x38,0x00 } }; // D43175BD-9C0B-44E0-84F6-CEEBCE653800
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>{ 0x65197D05,0xA5EE,0x4307,{ 0x94,0x07,0x9A,0xCA,0xD1,0x47,0x67,0x9C } }; // 65197D05-A5EE-4307-9407-9ACAD147679C
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>{ 0xF5720AF1,0xA89E,0x42A6,{ 0x81,0xAF,0xF8,0xE0,0x10,0xB3,0x8A,0x68 } }; // F5720AF1-A89E-42A6-81AF-F8E010B38A68
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2>{ 0x53730A09,0xF968,0x4692,{ 0xA1,0x77,0xC0,0x74,0x59,0x71,0x86,0xDB } }; // 53730A09-F968-4692-A177-C074597186DB
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>{ 0x135DA193,0x0961,0x4B6E,{ 0x87,0x66,0xF1,0x3B,0x7F,0xBC,0xCD,0x58 } }; // 135DA193-0961-4B6E-8766-F13B7FBCCD58
    template <> inline constexpr guid guid_v<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>{ 0xAD75E563,0x5CE4,0x46BC,{ 0x99,0x18,0xAB,0x9F,0xAD,0x14,0x4C,0x5B } }; // AD75E563-5CE4-46BC-9918-AB9FAD144C5B
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintBindingOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintBorderingOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCollationOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintColorModeOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCopiesOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCustomItemDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintDuplexOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintHolePunchOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintMediaSizeOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintMediaTypeOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintOrientationOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintPageRangeOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintQualityOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintStapleOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs; };
    template <> struct default_interface<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails>{ using type = Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails; };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_ItemId(void**) noexcept = 0;
            virtual int32_t __stdcall put_ItemDisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_ItemDisplayName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddItem(void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall AddItem(void*, void*, void*, void*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_DisplayName(void*) noexcept = 0;
            virtual int32_t __stdcall get_DisplayName(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_MaxCharacters(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_MaxCharacters(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Items(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MinValue(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_MaxValue(uint32_t*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OptionId(void**) noexcept = 0;
            virtual int32_t __stdcall get_OptionType(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_ErrorText(void*) noexcept = 0;
            virtual int32_t __stdcall get_ErrorText(void**) noexcept = 0;
            virtual int32_t __stdcall put_State(uint32_t) noexcept = 0;
            virtual int32_t __stdcall get_State(uint32_t*) noexcept = 0;
            virtual int32_t __stdcall get_Value(void**) noexcept = 0;
            virtual int32_t __stdcall TrySetValue(void*, bool*) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall put_WarningText(void*) noexcept = 0;
            virtual int32_t __stdcall get_WarningText(void**) noexcept = 0;
            virtual int32_t __stdcall put_Description(void*) noexcept = 0;
            virtual int32_t __stdcall get_Description(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_OptionId(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_Options(void**) noexcept = 0;
            virtual int32_t __stdcall CreateItemListOption(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall CreateTextOption(void*, void*, void**) noexcept = 0;
            virtual int32_t __stdcall add_OptionChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OptionChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_BeginValidation(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_BeginValidation(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall CreateToggleOption(void*, void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall GetFromPrintTaskOptions(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_MaxCharacters(uint32_t*) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintBindingOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintBindingOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintBindingOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintBorderingOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintBorderingOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintBorderingOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCollationOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCollationOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCollationOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintColorModeOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintColorModeOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintColorModeOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCopiesOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCopiesOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCopiesOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ItemId() const;
        WINRT_IMPL_AUTO(void) ItemDisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ItemDisplayName() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails
    {
        WINRT_IMPL_AUTO(void) AddItem(param::hstring const& itemId, param::hstring const& displayName) const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails2
    {
        WINRT_IMPL_AUTO(void) AddItem(param::hstring const& itemId, param::hstring const& displayName, param::hstring const& description, Windows::Storage::Streams::IRandomAccessStreamWithContentType const& icon) const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails3
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomItemListOptionDetails3>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomItemListOptionDetails3<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails
    {
        WINRT_IMPL_AUTO(void) DisplayName(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) DisplayName() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails
    {
        WINRT_IMPL_AUTO(void) MaxCharacters(uint32_t value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxCharacters() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails2
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomTextOptionDetails2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomTextOptionDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomToggleOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintCustomToggleOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintCustomToggleOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintDuplexOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintDuplexOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintDuplexOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintHolePunchOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintHolePunchOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintHolePunchOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Foundation::IInspectable>) Items() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintItemListOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintItemListOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaSizeOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintMediaSizeOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaSizeOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaTypeOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintMediaTypeOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintMediaTypeOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MinValue() const;
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxValue() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintNumberOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintNumberOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) OptionId() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::OptionDetails::PrintOptionType) OptionType() const;
        WINRT_IMPL_AUTO(void) ErrorText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) ErrorText() const;
        WINRT_IMPL_AUTO(void) State(Windows::Graphics::Printing::OptionDetails::PrintOptionStates const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Graphics::Printing::OptionDetails::PrintOptionStates) State() const;
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) Value() const;
        WINRT_IMPL_AUTO(bool) TrySetValue(Windows::Foundation::IInspectable const& value) const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintOrientationOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintOrientationOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintOrientationOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintPageRangeOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintPageRangeOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintPageRangeOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintQualityOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintQualityOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintQualityOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintStapleOptionDetails
    {
        WINRT_IMPL_AUTO(void) WarningText(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) WarningText() const;
        WINRT_IMPL_AUTO(void) Description(param::hstring const& value) const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Description() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintStapleOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintStapleOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::IInspectable) OptionId() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(Windows::Foundation::Collections::IMapView<hstring, Windows::Graphics::Printing::OptionDetails::IPrintOptionDetails>) Options() const;
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::OptionDetails::PrintCustomItemListOptionDetails) CreateItemListOption(param::hstring const& optionId, param::hstring const& displayName) const;
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::OptionDetails::PrintCustomTextOptionDetails) CreateTextOption(param::hstring const& optionId, param::hstring const& displayName) const;
        WINRT_IMPL_AUTO(winrt::event_token) OptionChanged(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const;
        using OptionChanged_revoker = impl::event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails, &impl::abi_t<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>::remove_OptionChanged>;
        [[nodiscard]] OptionChanged_revoker OptionChanged(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Graphics::Printing::OptionDetails::PrintTaskOptionChangedEventArgs> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) OptionChanged(winrt::event_token const& eventCookie) const noexcept;
        WINRT_IMPL_AUTO(winrt::event_token) BeginValidation(Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const;
        using BeginValidation_revoker = impl::event_revoker<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails, &impl::abi_t<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>::remove_BeginValidation>;
        [[nodiscard]] BeginValidation_revoker BeginValidation(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails, Windows::Foundation::IInspectable> const& eventHandler) const;
        WINRT_IMPL_AUTO(void) BeginValidation(winrt::event_token const& eventCookie) const noexcept;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails2
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::OptionDetails::PrintCustomToggleOptionDetails) CreateToggleOption(param::hstring const& optionId, param::hstring const& displayName) const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetails2>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetails2<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic
    {
        WINRT_IMPL_AUTO(Windows::Graphics::Printing::OptionDetails::PrintTaskOptionDetails) GetFromPrintTaskOptions(Windows::Graphics::Printing::PrintTaskOptions const& printTaskOptions) const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTaskOptionDetailsStatic>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTaskOptionDetailsStatic<D>;
    };
    template <typename D>
    struct consume_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails
    {
        [[nodiscard]] WINRT_IMPL_AUTO(uint32_t) MaxCharacters() const;
    };
    template <> struct consume<Windows::Graphics::Printing::OptionDetails::IPrintTextOptionDetails>
    {
        template <typename D> using type = consume_Windows_Graphics_Printing_OptionDetails_IPrintTextOptionDetails<D>;
    };
}
#endif
