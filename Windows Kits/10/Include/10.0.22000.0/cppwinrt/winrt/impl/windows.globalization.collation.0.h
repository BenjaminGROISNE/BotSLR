// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Globalization_Collation_0_H
#define WINRT_Windows_Globalization_Collation_0_H
WINRT_EXPORT namespace winrt::Windows::Globalization::Collation
{
    struct ICharacterGrouping;
    struct ICharacterGroupings;
    struct ICharacterGroupingsFactory;
    struct CharacterGrouping;
    struct CharacterGroupings;
}
namespace winrt::impl
{
    template <> struct category<Windows::Globalization::Collation::ICharacterGrouping>{ using type = interface_category; };
    template <> struct category<Windows::Globalization::Collation::ICharacterGroupings>{ using type = interface_category; };
    template <> struct category<Windows::Globalization::Collation::ICharacterGroupingsFactory>{ using type = interface_category; };
    template <> struct category<Windows::Globalization::Collation::CharacterGrouping>{ using type = class_category; };
    template <> struct category<Windows::Globalization::Collation::CharacterGroupings>{ using type = class_category; };
    template <> inline constexpr auto& name_v<Windows::Globalization::Collation::CharacterGrouping> = L"Windows.Globalization.Collation.CharacterGrouping";
    template <> inline constexpr auto& name_v<Windows::Globalization::Collation::CharacterGroupings> = L"Windows.Globalization.Collation.CharacterGroupings";
    template <> inline constexpr auto& name_v<Windows::Globalization::Collation::ICharacterGrouping> = L"Windows.Globalization.Collation.ICharacterGrouping";
    template <> inline constexpr auto& name_v<Windows::Globalization::Collation::ICharacterGroupings> = L"Windows.Globalization.Collation.ICharacterGroupings";
    template <> inline constexpr auto& name_v<Windows::Globalization::Collation::ICharacterGroupingsFactory> = L"Windows.Globalization.Collation.ICharacterGroupingsFactory";
    template <> inline constexpr guid guid_v<Windows::Globalization::Collation::ICharacterGrouping>{ 0xFAE761BB,0x805D,0x4BB0,{ 0x95,0xBB,0xC1,0xF7,0xC3,0xE8,0xEB,0x8E } }; // FAE761BB-805D-4BB0-95BB-C1F7C3E8EB8E
    template <> inline constexpr guid guid_v<Windows::Globalization::Collation::ICharacterGroupings>{ 0xB8D20A75,0xD4CF,0x4055,{ 0x80,0xE5,0xCE,0x16,0x9C,0x22,0x64,0x96 } }; // B8D20A75-D4CF-4055-80E5-CE169C226496
    template <> inline constexpr guid guid_v<Windows::Globalization::Collation::ICharacterGroupingsFactory>{ 0x99EA9FD9,0x886D,0x4401,{ 0x9F,0x98,0x69,0xC8,0x2D,0x4C,0x2F,0x78 } }; // 99EA9FD9-886D-4401-9F98-69C82D4C2F78
    template <> struct default_interface<Windows::Globalization::Collation::CharacterGrouping>{ using type = Windows::Globalization::Collation::ICharacterGrouping; };
    template <> struct default_interface<Windows::Globalization::Collation::CharacterGroupings>{ using type = Windows::Globalization::Collation::ICharacterGroupings; };
    template <> struct abi<Windows::Globalization::Collation::ICharacterGrouping>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall get_First(void**) noexcept = 0;
            virtual int32_t __stdcall get_Label(void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::Collation::ICharacterGroupings>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Lookup(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<Windows::Globalization::Collation::ICharacterGroupingsFactory>
    {
        struct __declspec(novtable) type : inspectable_abi
        {
            virtual int32_t __stdcall Create(void*, void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_Globalization_Collation_ICharacterGrouping
    {
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) First() const;
        [[nodiscard]] WINRT_IMPL_AUTO(hstring) Label() const;
    };
    template <> struct consume<Windows::Globalization::Collation::ICharacterGrouping>
    {
        template <typename D> using type = consume_Windows_Globalization_Collation_ICharacterGrouping<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_Collation_ICharacterGroupings
    {
        WINRT_IMPL_AUTO(hstring) Lookup(param::hstring const& text) const;
    };
    template <> struct consume<Windows::Globalization::Collation::ICharacterGroupings>
    {
        template <typename D> using type = consume_Windows_Globalization_Collation_ICharacterGroupings<D>;
    };
    template <typename D>
    struct consume_Windows_Globalization_Collation_ICharacterGroupingsFactory
    {
        WINRT_IMPL_AUTO(Windows::Globalization::Collation::CharacterGroupings) Create(param::hstring const& language) const;
    };
    template <> struct consume<Windows::Globalization::Collation::ICharacterGroupingsFactory>
    {
        template <typename D> using type = consume_Windows_Globalization_Collation_ICharacterGroupingsFactory<D>;
    };
}
#endif
