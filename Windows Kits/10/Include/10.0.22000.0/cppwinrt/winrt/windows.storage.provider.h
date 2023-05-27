// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_Storage_Provider_H
#define WINRT_Windows_Storage_Provider_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.Storage.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Storage.2.h"
#include "winrt/impl/Windows.Storage.Streams.2.h"
#include "winrt/impl/Windows.Storage.Provider.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterStatics<D>::SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterStatics)->SetUpdateInformation(*(void**)(&file), *(void**)(&contentId), static_cast<int32_t>(readMode), static_cast<int32_t>(writeMode), static_cast<uint32_t>(options)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::Title(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->put_Title(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::CachedFileTarget) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UpdateTarget() const
    {
        Windows::Storage::Provider::CachedFileTarget value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UpdateTarget(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->add_FileUpdateRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested_revoker consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const& handler) const
    {
        return impl::make_event_revoker<D, FileUpdateRequested_revoker>(this, FileUpdateRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::FileUpdateRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_FileUpdateRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->add_UIRequested(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested_revoker consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, UIRequested_revoker>(this, UIRequested(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIRequested(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->remove_UIRequested(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::UIStatus) consume_Windows_Storage_Provider_ICachedFileUpdaterUI<D>::UIStatus() const
    {
        Windows::Storage::Provider::UIStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI)->get_UIStatus(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::FileUpdateRequest) consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::UpdateRequest() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI2)->get_UpdateRequest(&value));
        return Windows::Storage::Provider::FileUpdateRequest{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::FileUpdateRequestDeferral) consume_Windows_Storage_Provider_ICachedFileUpdaterUI2<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::ICachedFileUpdaterUI2)->GetDeferral(&value));
        return Windows::Storage::Provider::FileUpdateRequestDeferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::ContentId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_ContentId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::StorageFile) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::File() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_File(&value));
        return Windows::Storage::StorageFile{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::FileUpdateStatus) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status() const
    {
        Windows::Storage::Provider::FileUpdateStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::Status(Windows::Storage::Provider::FileUpdateStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->put_Status(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::FileUpdateRequestDeferral) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::GetDeferral() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->GetDeferral(&value));
        return Windows::Storage::Provider::FileUpdateRequestDeferral{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequest<D>::UpdateLocalFile(Windows::Storage::IStorageFile const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest)->UpdateLocalFile(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest2)->get_UserInputNeededMessage(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequest2<D>::UserInputNeededMessage(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequest2)->put_UserInputNeededMessage(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IFileUpdateRequestDeferral<D>::Complete() const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequestDeferral)->Complete());
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::FileUpdateRequest) consume_Windows_Storage_Provider_IFileUpdateRequestedEventArgs<D>::Request() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IFileUpdateRequestedEventArgs)->get_Request(&value));
        return Windows::Storage::Provider::FileUpdateRequest{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderError<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderError<D>::Title() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->get_Title(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderError<D>::Message() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->get_Message(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderError<D>::FilePath() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->get_FilePath(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderError<D>::FilePath(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->put_FilePath(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderErrorCommand) consume_Windows_Storage_Provider_IStorageProviderError<D>::PrimaryAction() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->get_PrimaryAction(&value));
        return Windows::Storage::Provider::StorageProviderErrorCommand{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderError<D>::PrimaryAction(Windows::Storage::Provider::StorageProviderErrorCommand const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->put_PrimaryAction(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderErrorCommand) consume_Windows_Storage_Provider_IStorageProviderError<D>::SecondaryAction() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->get_SecondaryAction(&value));
        return Windows::Storage::Provider::StorageProviderErrorCommand{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderError<D>::SecondaryAction(Windows::Storage::Provider::StorageProviderErrorCommand const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->put_SecondaryAction(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderErrorCommand) consume_Windows_Storage_Provider_IStorageProviderError<D>::InformationalLink() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->get_InformationalLink(&value));
        return Windows::Storage::Provider::StorageProviderErrorCommand{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderError<D>::InformationalLink(Windows::Storage::Provider::StorageProviderErrorCommand const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderError)->put_InformationalLink(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderErrorCommand<D>::Label() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderErrorCommand)->get_Label(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_Storage_Provider_IStorageProviderErrorCommand<D>::ActionUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderErrorCommand)->get_ActionUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderErrorCommand) consume_Windows_Storage_Provider_IStorageProviderErrorCommandFactory<D>::CreateInstance(param::hstring const& label, Windows::Foundation::Uri const& actionUri) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderErrorCommandFactory)->CreateInstance(*(void**)(&label), *(void**)(&actionUri), &value));
        return Windows::Storage::Provider::StorageProviderErrorCommand{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderError) consume_Windows_Storage_Provider_IStorageProviderErrorFactory<D>::CreateInstance(param::hstring const& id, param::hstring const& title, param::hstring const& message) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderErrorFactory)->CreateInstance(*(void**)(&id), *(void**)(&title), *(void**)(&message), &value));
        return Windows::Storage::Provider::StorageProviderError{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderFileTypeInfo<D>::FileExtension() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderFileTypeInfo)->get_FileExtension(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderFileTypeInfo<D>::IconResource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderFileTypeInfo)->get_IconResource(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderFileTypeInfo) consume_Windows_Storage_Provider_IStorageProviderFileTypeInfoFactory<D>::CreateInstance(param::hstring const& fileExtension, param::hstring const& iconResource) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory)->CreateInstance(*(void**)(&fileExtension), *(void**)(&iconResource), &value));
        return Windows::Storage::Provider::StorageProviderFileTypeInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderUriSourceStatus) consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::Status() const
    {
        Windows::Storage::Provider::StorageProviderUriSourceStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->put_Status(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->get_ContentUri(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentUri(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->put_ContentUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->get_ContentId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderGetContentInfoForPathResult<D>::ContentId(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult)->put_ContentId(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderUriSourceStatus) consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Status() const
    {
        Windows::Storage::Provider::StorageProviderUriSourceStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Status(Windows::Storage::Provider::StorageProviderUriSourceStatus const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->put_Status(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->get_Path(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderGetPathForContentUriResult<D>::Path(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult)->put_Path(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::IStorageProviderStatusSource) consume_Windows_Storage_Provider_IStorageProviderHandlerFactory<D>::GetStatusSource(param::hstring const& syncRootId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderHandlerFactory)->GetStatusSource(*(void**)(&syncRootId), &result));
        return Windows::Storage::Provider::IStorageProviderStatusSource{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_Storage_Provider_IStorageProviderItemPropertiesStatics<D>::SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties) const
    {
        void* operation{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertiesStatics)->SetAsync(*(void**)(&item), *(void**)(&itemProperties), &operation));
        return Windows::Foundation::IAsyncAction{ operation, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Id(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->put_Id(value));
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Id() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->get_Id(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Value(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->put_Value(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::IconResource(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->put_IconResource(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderItemProperty<D>::IconResource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemProperty)->get_IconResource(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(int32_t) consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::Id() const
    {
        int32_t value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->get_Id(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::Id(int32_t value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->put_Id(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::DisplayNameResource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->get_DisplayNameResource(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderItemPropertyDefinition<D>::DisplayNameResource(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertyDefinition)->put_DisplayNameResource(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty>) consume_Windows_Storage_Provider_IStorageProviderItemPropertySource<D>::GetItemProperties(param::hstring const& itemPath) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderItemPropertySource)->GetItemProperties(*(void**)(&itemPath), &result));
        return Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Storage_Provider_IStorageProviderPropertyCapabilities<D>::IsPropertySupported(param::hstring const& propertyCanonicalName) const
    {
        bool isSupported{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderPropertyCapabilities)->IsPropertySupported(*(void**)(&propertyCanonicalName), &isSupported));
        return isSupported;
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderStatus<D>::Message() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatus)->get_Message(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderState) consume_Windows_Storage_Provider_IStorageProviderStatus<D>::State() const
    {
        Windows::Storage::Provider::StorageProviderState value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatus)->get_State(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderError>) consume_Windows_Storage_Provider_IStorageProviderStatus<D>::ErrorMessages() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatus)->get_ErrorMessages(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderError>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderStatus) consume_Windows_Storage_Provider_IStorageProviderStatusFactory<D>::CreateInstance(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatusFactory)->CreateInstance(static_cast<int32_t>(state), *(void**)(&message), &value));
        return Windows::Storage::Provider::StorageProviderStatus{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderStatus) consume_Windows_Storage_Provider_IStorageProviderStatusFactory<D>::CreateInstance2(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message, param::iterable<Windows::Storage::Provider::StorageProviderError> const& errorMessages) const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatusFactory)->CreateInstance2(static_cast<int32_t>(state), *(void**)(&message), *(void**)(&errorMessages), &value));
        return Windows::Storage::Provider::StorageProviderStatus{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderStatus) consume_Windows_Storage_Provider_IStorageProviderStatusSource<D>::GetStatus() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatusSource)->GetStatus(&result));
        return Windows::Storage::Provider::StorageProviderStatus{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::event_token) consume_Windows_Storage_Provider_IStorageProviderStatusSource<D>::Changed(Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::IStorageProviderStatusSource, Windows::Foundation::IInspectable> const& handler) const
    {
        winrt::event_token token{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatusSource)->add_Changed(*(void**)(&handler), put_abi(token)));
        return token;
    }
    template <typename D> typename consume_Windows_Storage_Provider_IStorageProviderStatusSource<D>::Changed_revoker consume_Windows_Storage_Provider_IStorageProviderStatusSource<D>::Changed(auto_revoke_t, Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::IStorageProviderStatusSource, Windows::Foundation::IInspectable> const& handler) const
    {
        return impl::make_event_revoker<D, Changed_revoker>(this, Changed(handler));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderStatusSource<D>::Changed(winrt::event_token const& token) const noexcept
    {
        WINRT_VERIFY_(0, WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderStatusSource)->remove_Changed(impl::bind_in(token)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Id(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Id(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Streams::IBuffer) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Context() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Context(&value));
        return Windows::Storage::Streams::IBuffer{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Context(Windows::Storage::Streams::IBuffer const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Context(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::IStorageFolder) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Path() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Path(&value));
        return Windows::Storage::IStorageFolder{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Path(Windows::Storage::IStorageFolder const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Path(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::DisplayNameResource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_DisplayNameResource(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::DisplayNameResource(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_DisplayNameResource(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::IconResource() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_IconResource(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::IconResource(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_IconResource(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderHydrationPolicy) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicy() const
    {
        Windows::Storage::Provider::StorageProviderHydrationPolicy value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_HydrationPolicy(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicy(Windows::Storage::Provider::StorageProviderHydrationPolicy const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_HydrationPolicy(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicyModifier() const
    {
        Windows::Storage::Provider::StorageProviderHydrationPolicyModifier value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_HydrationPolicyModifier(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HydrationPolicyModifier(Windows::Storage::Provider::StorageProviderHydrationPolicyModifier const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_HydrationPolicyModifier(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderPopulationPolicy) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::PopulationPolicy() const
    {
        Windows::Storage::Provider::StorageProviderPopulationPolicy value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_PopulationPolicy(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::PopulationPolicy(Windows::Storage::Provider::StorageProviderPopulationPolicy const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_PopulationPolicy(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderInSyncPolicy) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::InSyncPolicy() const
    {
        Windows::Storage::Provider::StorageProviderInSyncPolicy value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_InSyncPolicy(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::InSyncPolicy(Windows::Storage::Provider::StorageProviderInSyncPolicy const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_InSyncPolicy(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderHardlinkPolicy) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HardlinkPolicy() const
    {
        Windows::Storage::Provider::StorageProviderHardlinkPolicy value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_HardlinkPolicy(reinterpret_cast<uint32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::HardlinkPolicy(Windows::Storage::Provider::StorageProviderHardlinkPolicy const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_HardlinkPolicy(static_cast<uint32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ShowSiblingsAsGroup() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_ShowSiblingsAsGroup(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ShowSiblingsAsGroup(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_ShowSiblingsAsGroup(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Version() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_Version(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::Version(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_Version(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderProtectionMode) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ProtectionMode() const
    {
        Windows::Storage::Provider::StorageProviderProtectionMode value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_ProtectionMode(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::ProtectionMode(Windows::Storage::Provider::StorageProviderProtectionMode const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_ProtectionMode(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::AllowPinning() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_AllowPinning(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::AllowPinning(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_AllowPinning(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::StorageProviderItemPropertyDefinitions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_StorageProviderItemPropertyDefinitions(&value));
        return Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::RecycleBinUri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->get_RecycleBinUri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo<D>::RecycleBinUri(Windows::Foundation::Uri const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo)->put_RecycleBinUri(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(winrt::guid) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo2<D>::ProviderId() const
    {
        winrt::guid value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo2)->get_ProviderId(put_abi(value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo2<D>::ProviderId(winrt::guid const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo2)->put_ProviderId(impl::bind_in(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderFileTypeInfo>) consume_Windows_Storage_Provider_IStorageProviderSyncRootInfo3<D>::FallbackFileTypeInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootInfo3)->get_FallbackFileTypeInfo(&value));
        return Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderFileTypeInfo>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->Register(*(void**)(&syncRootInformation)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::Unregister(param::hstring const& id) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->Unregister(*(void**)(&id)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderSyncRootInfo) consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->GetSyncRootInformationForFolder(*(void**)(&folder), &result));
        return Windows::Storage::Provider::StorageProviderSyncRootInfo{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Storage::Provider::StorageProviderSyncRootInfo) consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::GetSyncRootInformationForId(param::hstring const& id) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->GetSyncRootInformationForId(*(void**)(&id), &result));
        return Windows::Storage::Provider::StorageProviderSyncRootInfo{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo>) consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics<D>::GetCurrentSyncRoots() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics)->GetCurrentSyncRoots(&result));
        return Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_Storage_Provider_IStorageProviderSyncRootManagerStatics2<D>::IsSupported() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2)->IsSupported(&result));
        return result;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderUriSource<D>::GetPathForContentUri(param::hstring const& contentUri, Windows::Storage::Provider::StorageProviderGetPathForContentUriResult const& result) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderUriSource)->GetPathForContentUri(*(void**)(&contentUri), *(void**)(&result)));
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_Storage_Provider_IStorageProviderUriSource<D>::GetContentInfoForPath(param::hstring const& path, Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult const& result) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::Storage::Provider::IStorageProviderUriSource)->GetContentInfoForPath(*(void**)(&path), *(void**)(&result)));
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterStatics> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterStatics>
    {
        int32_t __stdcall SetUpdateInformation(void* file, void* contentId, int32_t readMode, int32_t writeMode, uint32_t options) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SetUpdateInformation(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&file), *reinterpret_cast<hstring const*>(&contentId), *reinterpret_cast<Windows::Storage::Provider::ReadActivationMode const*>(&readMode), *reinterpret_cast<Windows::Storage::Provider::WriteActivationMode const*>(&writeMode), *reinterpret_cast<Windows::Storage::Provider::CachedFileOptions const*>(&options));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterUI> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterUI>
    {
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Title(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Title(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdateTarget(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::CachedFileTarget>(this->shim().UpdateTarget());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_FileUpdateRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().FileUpdateRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Storage::Provider::FileUpdateRequestedEventArgs> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_FileUpdateRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FileUpdateRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall add_UIRequested(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().UIRequested(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::CachedFileUpdaterUI, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_UIRequested(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UIRequested(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
        int32_t __stdcall get_UIStatus(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::UIStatus>(this->shim().UIStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::ICachedFileUpdaterUI2> : produce_base<D, Windows::Storage::Provider::ICachedFileUpdaterUI2>
    {
        int32_t __stdcall get_UpdateRequest(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequest>(this->shim().UpdateRequest());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequestDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IFileUpdateRequest> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequest>
    {
        int32_t __stdcall get_ContentId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_File(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::StorageFile>(this->shim().File());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Status(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Storage::Provider::FileUpdateStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetDeferral(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequestDeferral>(this->shim().GetDeferral());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall UpdateLocalFile(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdateLocalFile(*reinterpret_cast<Windows::Storage::IStorageFile const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IFileUpdateRequest2> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequest2>
    {
        int32_t __stdcall get_UserInputNeededMessage(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().UserInputNeededMessage());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UserInputNeededMessage(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UserInputNeededMessage(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IFileUpdateRequestDeferral> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequestDeferral>
    {
        int32_t __stdcall Complete() noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Complete();
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : produce_base<D, Windows::Storage::Provider::IFileUpdateRequestedEventArgs>
    {
        int32_t __stdcall get_Request(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::FileUpdateRequest>(this->shim().Request());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderError> : produce_base<D, Windows::Storage::Provider::IStorageProviderError>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Title(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Title());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Message(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_FilePath(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FilePath());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_FilePath(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().FilePath(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PrimaryAction(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderErrorCommand>(this->shim().PrimaryAction());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PrimaryAction(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PrimaryAction(*reinterpret_cast<Windows::Storage::Provider::StorageProviderErrorCommand const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SecondaryAction(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderErrorCommand>(this->shim().SecondaryAction());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SecondaryAction(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SecondaryAction(*reinterpret_cast<Windows::Storage::Provider::StorageProviderErrorCommand const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InformationalLink(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderErrorCommand>(this->shim().InformationalLink());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InformationalLink(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InformationalLink(*reinterpret_cast<Windows::Storage::Provider::StorageProviderErrorCommand const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderErrorCommand> : produce_base<D, Windows::Storage::Provider::IStorageProviderErrorCommand>
    {
        int32_t __stdcall get_Label(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ActionUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().ActionUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderErrorCommandFactory> : produce_base<D, Windows::Storage::Provider::IStorageProviderErrorCommandFactory>
    {
        int32_t __stdcall CreateInstance(void* label, void* actionUri, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderErrorCommand>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::Foundation::Uri const*>(&actionUri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderErrorFactory> : produce_base<D, Windows::Storage::Provider::IStorageProviderErrorFactory>
    {
        int32_t __stdcall CreateInstance(void* id, void* title, void* message, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderError>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&id), *reinterpret_cast<hstring const*>(&title), *reinterpret_cast<hstring const*>(&message)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderFileTypeInfo> : produce_base<D, Windows::Storage::Provider::IStorageProviderFileTypeInfo>
    {
        int32_t __stdcall get_FileExtension(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().FileExtension());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IconResource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IconResource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory> : produce_base<D, Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory>
    {
        int32_t __stdcall CreateInstance(void* fileExtension, void* iconResource, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderFileTypeInfo>(this->shim().CreateInstance(*reinterpret_cast<hstring const*>(&fileExtension), *reinterpret_cast<hstring const*>(&iconResource)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult> : produce_base<D, Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderUriSourceStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Status(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Storage::Provider::StorageProviderUriSourceStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentUri(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ContentId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().ContentId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ContentId(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ContentId(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult> : produce_base<D, Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderUriSourceStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Status(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Status(*reinterpret_cast<Windows::Storage::Provider::StorageProviderUriSourceStatus const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Path(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderHandlerFactory> : produce_base<D, Windows::Storage::Provider::IStorageProviderHandlerFactory>
    {
        int32_t __stdcall GetStatusSource(void* syncRootId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Provider::IStorageProviderStatusSource>(this->shim().GetStatusSource(*reinterpret_cast<hstring const*>(&syncRootId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderItemPropertiesStatics> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemPropertiesStatics>
    {
        int32_t __stdcall SetAsync(void* item, void* itemProperties, void** operation) noexcept final try
        {
            clear_abi(operation);
            typename D::abi_guard guard(this->shim());
            *operation = detach_from<Windows::Foundation::IAsyncAction>(this->shim().SetAsync(*reinterpret_cast<Windows::Storage::IStorageItem const*>(&item), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty> const*>(&itemProperties)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderItemProperty> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemProperty>
    {
        int32_t __stdcall put_Id(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Id(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Value(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Value());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IconResource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IconResource(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IconResource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IconResource());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderItemPropertyDefinition> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemPropertyDefinition>
    {
        int32_t __stdcall get_Id(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<int32_t>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Id(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayNameResource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayNameResource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayNameResource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayNameResource(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderItemPropertySource> : produce_base<D, Windows::Storage::Provider::IStorageProviderItemPropertySource>
    {
        int32_t __stdcall GetItemProperties(void* itemPath, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderItemProperty>>(this->shim().GetItemProperties(*reinterpret_cast<hstring const*>(&itemPath)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderPropertyCapabilities> : produce_base<D, Windows::Storage::Provider::IStorageProviderPropertyCapabilities>
    {
        int32_t __stdcall IsPropertySupported(void* propertyCanonicalName, bool* isSupported) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *isSupported = detach_from<bool>(this->shim().IsPropertySupported(*reinterpret_cast<hstring const*>(&propertyCanonicalName)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderStatus> : produce_base<D, Windows::Storage::Provider::IStorageProviderStatus>
    {
        int32_t __stdcall get_Message(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Message());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_State(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderState>(this->shim().State());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ErrorMessages(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderError>>(this->shim().ErrorMessages());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderStatusFactory> : produce_base<D, Windows::Storage::Provider::IStorageProviderStatusFactory>
    {
        int32_t __stdcall CreateInstance(int32_t state, void* message, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderStatus>(this->shim().CreateInstance(*reinterpret_cast<Windows::Storage::Provider::StorageProviderState const*>(&state), *reinterpret_cast<hstring const*>(&message)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateInstance2(int32_t state, void* message, void* errorMessages, void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderStatus>(this->shim().CreateInstance2(*reinterpret_cast<Windows::Storage::Provider::StorageProviderState const*>(&state), *reinterpret_cast<hstring const*>(&message), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::Storage::Provider::StorageProviderError> const*>(&errorMessages)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderStatusSource> : produce_base<D, Windows::Storage::Provider::IStorageProviderStatusSource>
    {
        int32_t __stdcall GetStatus(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Provider::StorageProviderStatus>(this->shim().GetStatus());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall add_Changed(void* handler, winrt::event_token* token) noexcept final try
        {
            zero_abi<winrt::event_token>(token);
            typename D::abi_guard guard(this->shim());
            *token = detach_from<winrt::event_token>(this->shim().Changed(*reinterpret_cast<Windows::Foundation::TypedEventHandler<Windows::Storage::Provider::IStorageProviderStatusSource, Windows::Foundation::IInspectable> const*>(&handler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall remove_Changed(winrt::event_token token) noexcept final
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Changed(*reinterpret_cast<winrt::event_token const*>(&token));
            return 0;
        }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo> : produce_base<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Id(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Id(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Context(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Streams::IBuffer>(this->shim().Context());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Context(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Context(*reinterpret_cast<Windows::Storage::Streams::IBuffer const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Path(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::IStorageFolder>(this->shim().Path());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Path(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Path(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayNameResource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DisplayNameResource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayNameResource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayNameResource(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IconResource(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().IconResource());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IconResource(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IconResource(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HydrationPolicy(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderHydrationPolicy>(this->shim().HydrationPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HydrationPolicy(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HydrationPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderHydrationPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HydrationPolicyModifier(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier>(this->shim().HydrationPolicyModifier());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HydrationPolicyModifier(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HydrationPolicyModifier(*reinterpret_cast<Windows::Storage::Provider::StorageProviderHydrationPolicyModifier const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PopulationPolicy(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderPopulationPolicy>(this->shim().PopulationPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PopulationPolicy(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PopulationPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderPopulationPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_InSyncPolicy(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderInSyncPolicy>(this->shim().InSyncPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_InSyncPolicy(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().InSyncPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderInSyncPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_HardlinkPolicy(uint32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderHardlinkPolicy>(this->shim().HardlinkPolicy());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_HardlinkPolicy(uint32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().HardlinkPolicy(*reinterpret_cast<Windows::Storage::Provider::StorageProviderHardlinkPolicy const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShowSiblingsAsGroup(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ShowSiblingsAsGroup());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ShowSiblingsAsGroup(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShowSiblingsAsGroup(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Version(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Version());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Version(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Version(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ProtectionMode(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Storage::Provider::StorageProviderProtectionMode>(this->shim().ProtectionMode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProtectionMode(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProtectionMode(*reinterpret_cast<Windows::Storage::Provider::StorageProviderProtectionMode const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AllowPinning(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().AllowPinning());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AllowPinning(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AllowPinning(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_StorageProviderItemPropertyDefinitions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderItemPropertyDefinition>>(this->shim().StorageProviderItemPropertyDefinitions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RecycleBinUri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().RecycleBinUri());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RecycleBinUri(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RecycleBinUri(*reinterpret_cast<Windows::Foundation::Uri const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo2> : produce_base<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo2>
    {
        int32_t __stdcall get_ProviderId(winrt::guid* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::guid>(this->shim().ProviderId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ProviderId(winrt::guid value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ProviderId(*reinterpret_cast<winrt::guid const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo3> : produce_base<D, Windows::Storage::Provider::IStorageProviderSyncRootInfo3>
    {
        int32_t __stdcall get_FallbackFileTypeInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVector<Windows::Storage::Provider::StorageProviderFileTypeInfo>>(this->shim().FallbackFileTypeInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics> : produce_base<D, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics>
    {
        int32_t __stdcall Register(void* syncRootInformation) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Register(*reinterpret_cast<Windows::Storage::Provider::StorageProviderSyncRootInfo const*>(&syncRootInformation));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Unregister(void* id) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Unregister(*reinterpret_cast<hstring const*>(&id));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSyncRootInformationForFolder(void* folder, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Provider::StorageProviderSyncRootInfo>(this->shim().GetSyncRootInformationForFolder(*reinterpret_cast<Windows::Storage::IStorageFolder const*>(&folder)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetSyncRootInformationForId(void* id, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Storage::Provider::StorageProviderSyncRootInfo>(this->shim().GetSyncRootInformationForId(*reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentSyncRoots(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo>>(this->shim().GetCurrentSyncRoots());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2> : produce_base<D, Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2>
    {
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
    template <typename D>
    struct produce<D, Windows::Storage::Provider::IStorageProviderUriSource> : produce_base<D, Windows::Storage::Provider::IStorageProviderUriSource>
    {
        int32_t __stdcall GetPathForContentUri(void* contentUri, void* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetPathForContentUri(*reinterpret_cast<hstring const*>(&contentUri), *reinterpret_cast<Windows::Storage::Provider::StorageProviderGetPathForContentUriResult const*>(&result));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetContentInfoForPath(void* path, void* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().GetContentInfoForPath(*reinterpret_cast<hstring const*>(&path), *reinterpret_cast<Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult const*>(&result));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
}
WINRT_EXPORT namespace winrt::Windows::Storage::Provider
{
    constexpr auto operator|(CachedFileOptions const left, CachedFileOptions const right) noexcept
    {
        return static_cast<CachedFileOptions>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(CachedFileOptions& left, CachedFileOptions const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(CachedFileOptions const left, CachedFileOptions const right) noexcept
    {
        return static_cast<CachedFileOptions>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(CachedFileOptions& left, CachedFileOptions const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(CachedFileOptions const value) noexcept
    {
        return static_cast<CachedFileOptions>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(CachedFileOptions const left, CachedFileOptions const right) noexcept
    {
        return static_cast<CachedFileOptions>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(CachedFileOptions& left, CachedFileOptions const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(StorageProviderHardlinkPolicy const left, StorageProviderHardlinkPolicy const right) noexcept
    {
        return static_cast<StorageProviderHardlinkPolicy>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(StorageProviderHardlinkPolicy& left, StorageProviderHardlinkPolicy const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(StorageProviderHardlinkPolicy const left, StorageProviderHardlinkPolicy const right) noexcept
    {
        return static_cast<StorageProviderHardlinkPolicy>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(StorageProviderHardlinkPolicy& left, StorageProviderHardlinkPolicy const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(StorageProviderHardlinkPolicy const value) noexcept
    {
        return static_cast<StorageProviderHardlinkPolicy>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(StorageProviderHardlinkPolicy const left, StorageProviderHardlinkPolicy const right) noexcept
    {
        return static_cast<StorageProviderHardlinkPolicy>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(StorageProviderHardlinkPolicy& left, StorageProviderHardlinkPolicy const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(StorageProviderHydrationPolicyModifier const left, StorageProviderHydrationPolicyModifier const right) noexcept
    {
        return static_cast<StorageProviderHydrationPolicyModifier>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(StorageProviderHydrationPolicyModifier& left, StorageProviderHydrationPolicyModifier const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(StorageProviderHydrationPolicyModifier const left, StorageProviderHydrationPolicyModifier const right) noexcept
    {
        return static_cast<StorageProviderHydrationPolicyModifier>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(StorageProviderHydrationPolicyModifier& left, StorageProviderHydrationPolicyModifier const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(StorageProviderHydrationPolicyModifier const value) noexcept
    {
        return static_cast<StorageProviderHydrationPolicyModifier>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(StorageProviderHydrationPolicyModifier const left, StorageProviderHydrationPolicyModifier const right) noexcept
    {
        return static_cast<StorageProviderHydrationPolicyModifier>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(StorageProviderHydrationPolicyModifier& left, StorageProviderHydrationPolicyModifier const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    constexpr auto operator|(StorageProviderInSyncPolicy const left, StorageProviderInSyncPolicy const right) noexcept
    {
        return static_cast<StorageProviderInSyncPolicy>(impl::to_underlying_type(left) | impl::to_underlying_type(right));
    }
    constexpr auto operator|=(StorageProviderInSyncPolicy& left, StorageProviderInSyncPolicy const right) noexcept
    {
        left = left | right;
        return left;
    }
    constexpr auto operator&(StorageProviderInSyncPolicy const left, StorageProviderInSyncPolicy const right) noexcept
    {
        return static_cast<StorageProviderInSyncPolicy>(impl::to_underlying_type(left) & impl::to_underlying_type(right));
    }
    constexpr auto operator&=(StorageProviderInSyncPolicy& left, StorageProviderInSyncPolicy const right) noexcept
    {
        left = left & right;
        return left;
    }
    constexpr auto operator~(StorageProviderInSyncPolicy const value) noexcept
    {
        return static_cast<StorageProviderInSyncPolicy>(~impl::to_underlying_type(value));
    }
    constexpr auto operator^(StorageProviderInSyncPolicy const left, StorageProviderInSyncPolicy const right) noexcept
    {
        return static_cast<StorageProviderInSyncPolicy>(impl::to_underlying_type(left) ^ impl::to_underlying_type(right));
    }
    constexpr auto operator^=(StorageProviderInSyncPolicy& left, StorageProviderInSyncPolicy const right) noexcept
    {
        left = left ^ right;
        return left;
    }
    inline auto CachedFileUpdater::SetUpdateInformation(Windows::Storage::IStorageFile const& file, param::hstring const& contentId, Windows::Storage::Provider::ReadActivationMode const& readMode, Windows::Storage::Provider::WriteActivationMode const& writeMode, Windows::Storage::Provider::CachedFileOptions const& options)
    {
        impl::call_factory<CachedFileUpdater, ICachedFileUpdaterStatics>([&](ICachedFileUpdaterStatics const& f) { return f.SetUpdateInformation(file, contentId, readMode, writeMode, options); });
    }
    inline StorageProviderError::StorageProviderError(param::hstring const& id, param::hstring const& title, param::hstring const& message) :
        StorageProviderError(impl::call_factory<StorageProviderError, IStorageProviderErrorFactory>([&](IStorageProviderErrorFactory const& f) { return f.CreateInstance(id, title, message); }))
    {
    }
    inline StorageProviderErrorCommand::StorageProviderErrorCommand(param::hstring const& label, Windows::Foundation::Uri const& actionUri) :
        StorageProviderErrorCommand(impl::call_factory<StorageProviderErrorCommand, IStorageProviderErrorCommandFactory>([&](IStorageProviderErrorCommandFactory const& f) { return f.CreateInstance(label, actionUri); }))
    {
    }
    inline StorageProviderFileTypeInfo::StorageProviderFileTypeInfo(param::hstring const& fileExtension, param::hstring const& iconResource) :
        StorageProviderFileTypeInfo(impl::call_factory<StorageProviderFileTypeInfo, IStorageProviderFileTypeInfoFactory>([&](IStorageProviderFileTypeInfoFactory const& f) { return f.CreateInstance(fileExtension, iconResource); }))
    {
    }
    inline StorageProviderGetContentInfoForPathResult::StorageProviderGetContentInfoForPathResult() :
        StorageProviderGetContentInfoForPathResult(impl::call_factory_cast<StorageProviderGetContentInfoForPathResult(*)(Windows::Foundation::IActivationFactory const&), StorageProviderGetContentInfoForPathResult>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<StorageProviderGetContentInfoForPathResult>(); }))
    {
    }
    inline StorageProviderGetPathForContentUriResult::StorageProviderGetPathForContentUriResult() :
        StorageProviderGetPathForContentUriResult(impl::call_factory_cast<StorageProviderGetPathForContentUriResult(*)(Windows::Foundation::IActivationFactory const&), StorageProviderGetPathForContentUriResult>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<StorageProviderGetPathForContentUriResult>(); }))
    {
    }
    inline auto StorageProviderItemProperties::SetAsync(Windows::Storage::IStorageItem const& item, param::async_iterable<Windows::Storage::Provider::StorageProviderItemProperty> const& itemProperties)
    {
        return impl::call_factory<StorageProviderItemProperties, IStorageProviderItemPropertiesStatics>([&](IStorageProviderItemPropertiesStatics const& f) { return f.SetAsync(item, itemProperties); });
    }
    inline StorageProviderItemProperty::StorageProviderItemProperty() :
        StorageProviderItemProperty(impl::call_factory_cast<StorageProviderItemProperty(*)(Windows::Foundation::IActivationFactory const&), StorageProviderItemProperty>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<StorageProviderItemProperty>(); }))
    {
    }
    inline StorageProviderItemPropertyDefinition::StorageProviderItemPropertyDefinition() :
        StorageProviderItemPropertyDefinition(impl::call_factory_cast<StorageProviderItemPropertyDefinition(*)(Windows::Foundation::IActivationFactory const&), StorageProviderItemPropertyDefinition>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<StorageProviderItemPropertyDefinition>(); }))
    {
    }
    inline StorageProviderStatus::StorageProviderStatus(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message) :
        StorageProviderStatus(impl::call_factory<StorageProviderStatus, IStorageProviderStatusFactory>([&](IStorageProviderStatusFactory const& f) { return f.CreateInstance(state, message); }))
    {
    }
    inline StorageProviderStatus::StorageProviderStatus(Windows::Storage::Provider::StorageProviderState const& state, param::hstring const& message, param::iterable<Windows::Storage::Provider::StorageProviderError> const& errorMessages) :
        StorageProviderStatus(impl::call_factory<StorageProviderStatus, IStorageProviderStatusFactory>([&](IStorageProviderStatusFactory const& f) { return f.CreateInstance2(state, message, errorMessages); }))
    {
    }
    inline StorageProviderSyncRootInfo::StorageProviderSyncRootInfo() :
        StorageProviderSyncRootInfo(impl::call_factory_cast<StorageProviderSyncRootInfo(*)(Windows::Foundation::IActivationFactory const&), StorageProviderSyncRootInfo>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<StorageProviderSyncRootInfo>(); }))
    {
    }
    inline auto StorageProviderSyncRootManager::Register(Windows::Storage::Provider::StorageProviderSyncRootInfo const& syncRootInformation)
    {
        impl::call_factory<StorageProviderSyncRootManager, IStorageProviderSyncRootManagerStatics>([&](IStorageProviderSyncRootManagerStatics const& f) { return f.Register(syncRootInformation); });
    }
    inline auto StorageProviderSyncRootManager::Unregister(param::hstring const& id)
    {
        impl::call_factory<StorageProviderSyncRootManager, IStorageProviderSyncRootManagerStatics>([&](IStorageProviderSyncRootManagerStatics const& f) { return f.Unregister(id); });
    }
    inline auto StorageProviderSyncRootManager::GetSyncRootInformationForFolder(Windows::Storage::IStorageFolder const& folder)
    {
        return impl::call_factory<StorageProviderSyncRootManager, IStorageProviderSyncRootManagerStatics>([&](IStorageProviderSyncRootManagerStatics const& f) { return f.GetSyncRootInformationForFolder(folder); });
    }
    inline auto StorageProviderSyncRootManager::GetSyncRootInformationForId(param::hstring const& id)
    {
        return impl::call_factory<StorageProviderSyncRootManager, IStorageProviderSyncRootManagerStatics>([&](IStorageProviderSyncRootManagerStatics const& f) { return f.GetSyncRootInformationForId(id); });
    }
    inline auto StorageProviderSyncRootManager::GetCurrentSyncRoots()
    {
        return impl::call_factory_cast<Windows::Foundation::Collections::IVectorView<Windows::Storage::Provider::StorageProviderSyncRootInfo>(*)(IStorageProviderSyncRootManagerStatics const&), StorageProviderSyncRootManager, IStorageProviderSyncRootManagerStatics>([](IStorageProviderSyncRootManagerStatics const& f) { return f.GetCurrentSyncRoots(); });
    }
    inline auto StorageProviderSyncRootManager::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IStorageProviderSyncRootManagerStatics2 const&), StorageProviderSyncRootManager, IStorageProviderSyncRootManagerStatics2>([](IStorageProviderSyncRootManagerStatics2 const& f) { return f.IsSupported(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::ICachedFileUpdaterUI2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequest2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IFileUpdateRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderError> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderErrorCommand> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderErrorCommandFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderErrorFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderFileTypeInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderFileTypeInfoFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderGetContentInfoForPathResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderGetPathForContentUriResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderHandlerFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemPropertiesStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemProperty> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemPropertyDefinition> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderItemPropertySource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderPropertyCapabilities> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderStatusFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderStatusSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderSyncRootInfo3> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderSyncRootManagerStatics2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::IStorageProviderUriSource> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdater> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::CachedFileUpdaterUI> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestDeferral> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::FileUpdateRequestedEventArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderError> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderErrorCommand> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderFileTypeInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderGetContentInfoForPathResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderGetPathForContentUriResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderItemProperties> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderItemProperty> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderItemPropertyDefinition> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderStatus> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderSyncRootInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Storage::Provider::StorageProviderSyncRootManager> : winrt::impl::hash_base {};
#endif
}
#endif
