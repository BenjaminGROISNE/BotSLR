// C++/WinRT v2.0.201201.7

// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#ifndef WINRT_Windows_ApplicationModel_Payments_H
#define WINRT_Windows_ApplicationModel_Payments_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.0.201201.7"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.0.201201.7"
#include "winrt/Windows.ApplicationModel.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.ApplicationModel.Payments.2.h"
namespace winrt::impl
{
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Country() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Country(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Country(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Country(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::AddressLines() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_AddressLines(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::AddressLines(param::async_vector_view<hstring> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_AddressLines(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Region() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Region(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Region(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Region(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::City() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_City(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::City(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_City(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::DependentLocality() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_DependentLocality(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::DependentLocality(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_DependentLocality(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PostalCode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_PostalCode(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PostalCode(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_PostalCode(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::SortingCode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_SortingCode(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::SortingCode(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_SortingCode(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::LanguageCode() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_LanguageCode(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::LanguageCode(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_LanguageCode(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Organization() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Organization(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Organization(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Organization(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Recipient() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Recipient(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Recipient(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_Recipient(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PhoneNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_PhoneNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::PhoneNumber(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->put_PhoneNumber(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::ValueSet) consume_Windows_ApplicationModel_Payments_IPaymentAddress<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentAddress)->get_Properties(&value));
        return Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus) consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult<D>::Status() const
    {
        Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult) consume_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const& value) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory)->Create(static_cast<int32_t>(value), &result));
        return Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Currency() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_Currency(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Currency(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_Currency(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::CurrencySystem() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_CurrencySystem(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::CurrencySystem(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_CurrencySystem(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Value() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->get_Value(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount<D>::Value(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmount)->put_Value(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentCurrencyAmount) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>::Create(param::hstring const& value, param::hstring const& currency) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory)->Create(*(void**)(&value), *(void**)(&currency), &result));
        return Windows::ApplicationModel::Payments::PaymentCurrencyAmount{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentCurrencyAmount) consume_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory<D>::CreateWithCurrencySystem(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory)->CreateWithCurrencySystem(*(void**)(&value), *(void**)(&currency), *(void**)(&currencySystem), &result));
        return Windows::ApplicationModel::Payments::PaymentCurrencyAmount{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentItem) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Total() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_Total(&value));
        return Windows::ApplicationModel::Payments::PaymentItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Total(Windows::ApplicationModel::Payments::PaymentItem const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_Total(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::DisplayItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_DisplayItems(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::DisplayItems(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentItem> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_DisplayItems(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption>) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::ShippingOptions() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_ShippingOptions(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::ShippingOptions(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentShippingOption> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_ShippingOptions(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier>) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Modifiers() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->get_Modifiers(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentDetails<D>::Modifiers(param::async_vector_view<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetails)->put_Modifiers(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentDetails) consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentItem const& total) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsFactory)->Create(*(void**)(&total), &result));
        return Windows::ApplicationModel::Payments::PaymentDetails{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentDetails) consume_Windows_ApplicationModel_Payments_IPaymentDetailsFactory<D>::CreateWithDisplayItems(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsFactory)->CreateWithDisplayItems(*(void**)(&total), *(void**)(&displayItems), &result));
        return Windows::ApplicationModel::Payments::PaymentDetails{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::JsonData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_JsonData(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::SupportedMethodIds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_SupportedMethodIds(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentItem) consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::Total() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_Total(&value));
        return Windows::ApplicationModel::Payments::PaymentItem{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>) consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifier<D>::AdditionalDisplayItems() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifier)->get_AdditionalDisplayItems(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentDetailsModifier) consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::Create(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->Create(*(void**)(&supportedMethodIds), *(void**)(&total), &result));
        return Windows::ApplicationModel::Payments::PaymentDetailsModifier{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentDetailsModifier) consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItems(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->CreateWithAdditionalDisplayItems(*(void**)(&supportedMethodIds), *(void**)(&total), *(void**)(&additionalDisplayItems), &result));
        return Windows::ApplicationModel::Payments::PaymentDetailsModifier{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentDetailsModifier) consume_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory<D>::CreateWithAdditionalDisplayItemsAndJsonData(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory)->CreateWithAdditionalDisplayItemsAndJsonData(*(void**)(&supportedMethodIds), *(void**)(&total), *(void**)(&additionalDisplayItems), *(void**)(&jsonData), &result));
        return Windows::ApplicationModel::Payments::PaymentDetailsModifier{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Label() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Label(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Label(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Label(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentCurrencyAmount) consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Amount() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Amount(&value));
        return Windows::ApplicationModel::Payments::PaymentCurrencyAmount{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Amount(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Pending() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->get_Pending(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentItem<D>::Pending(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentItem)->put_Pending(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentItem) consume_Windows_ApplicationModel_Payments_IPaymentItemFactory<D>::Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentItemFactory)->Create(*(void**)(&label), *(void**)(&amount), &result));
        return Windows::ApplicationModel::Payments::PaymentItem{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>) consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::GetSupportedMethodIdsAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->GetSupportedMethodIdsAsync(&result));
        return Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>) consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->SubmitPaymentRequestAsync(*(void**)(&paymentRequest), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>) consume_Windows_ApplicationModel_Payments_IPaymentMediator<D>::SubmitPaymentRequestAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const& changeHandler) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator)->SubmitPaymentRequestWithChangeHandlerAsync(*(void**)(&paymentRequest), *(void**)(&changeHandler), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>) consume_Windows_ApplicationModel_Payments_IPaymentMediator2<D>::CanMakePaymentAsync(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMediator2)->CanMakePaymentAsync(*(void**)(&paymentRequest), &result));
        return Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>::PackageFullName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfo)->get_PackageFullName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Uri) consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfo<D>::Uri() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfo)->get_Uri(&value));
        return Windows::Foundation::Uri{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentMerchantInfo) consume_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory<D>::Create(Windows::Foundation::Uri const& uri) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory)->Create(*(void**)(&uri), &result));
        return Windows::ApplicationModel::Payments::PaymentMerchantInfo{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<hstring>) consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>::SupportedMethodIds() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodData)->get_SupportedMethodIds(&value));
        return Windows::Foundation::Collections::IVectorView<hstring>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentMethodData<D>::JsonData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodData)->get_JsonData(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentMethodData) consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>::Create(param::iterable<hstring> const& supportedMethodIds) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodDataFactory)->Create(*(void**)(&supportedMethodIds), &result));
        return Windows::ApplicationModel::Payments::PaymentMethodData{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentMethodData) consume_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory<D>::CreateWithJsonData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentMethodDataFactory)->CreateWithJsonData(*(void**)(&supportedMethodIds), *(void**)(&jsonData), &result));
        return Windows::ApplicationModel::Payments::PaymentMethodData{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentOptionPresence) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerEmail() const
    {
        Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerEmail(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerEmail(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerEmail(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentOptionPresence) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerName() const
    {
        Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerName(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerName(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerName(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentOptionPresence) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerPhoneNumber() const
    {
        Windows::ApplicationModel::Payments::PaymentOptionPresence value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestPayerPhoneNumber(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestPayerPhoneNumber(Windows::ApplicationModel::Payments::PaymentOptionPresence const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestPayerPhoneNumber(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestShipping() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_RequestShipping(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::RequestShipping(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_RequestShipping(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentShippingType) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::ShippingType() const
    {
        Windows::ApplicationModel::Payments::PaymentShippingType value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->get_ShippingType(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentOptions<D>::ShippingType(Windows::ApplicationModel::Payments::PaymentShippingType const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentOptions)->put_ShippingType(static_cast<int32_t>(value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentMerchantInfo) consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::MerchantInfo() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_MerchantInfo(&value));
        return Windows::ApplicationModel::Payments::PaymentMerchantInfo{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentDetails) consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::Details() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_Details(&value));
        return Windows::ApplicationModel::Payments::PaymentDetails{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData>) consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::MethodData() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_MethodData(&value));
        return Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData>{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentOptions) consume_Windows_ApplicationModel_Payments_IPaymentRequest<D>::Options() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest)->get_Options(&value));
        return Windows::ApplicationModel::Payments::PaymentOptions{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentRequest2<D>::Id() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequest2)->get_Id(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequestChangeKind) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::ChangeKind() const
    {
        Windows::ApplicationModel::Payments::PaymentRequestChangeKind value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_ChangeKind(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentAddress) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::ShippingAddress() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_ShippingAddress(&value));
        return Windows::ApplicationModel::Payments::PaymentAddress{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentShippingOption) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::SelectedShippingOption() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->get_SelectedShippingOption(&value));
        return Windows::ApplicationModel::Payments::PaymentShippingOption{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs<D>::Acknowledge(Windows::ApplicationModel::Payments::PaymentRequestChangedResult const& changeResult) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs)->Acknowledge(*(void**)(&changeResult)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_ChangeAcceptedByMerchant(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::ChangeAcceptedByMerchant(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_ChangeAcceptedByMerchant(value));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::Message() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_Message(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::Message(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_Message(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentDetails) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->get_UpdatedPaymentDetails(&value));
        return Windows::ApplicationModel::Payments::PaymentDetails{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult<D>::UpdatedPaymentDetails(Windows::ApplicationModel::Payments::PaymentDetails const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResult)->put_UpdatedPaymentDetails(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequestChangedResult) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>::Create(bool changeAcceptedByMerchant) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory)->Create(changeAcceptedByMerchant, &result));
        return Windows::ApplicationModel::Payments::PaymentRequestChangedResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequestChangedResult) consume_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory<D>::CreateWithPaymentDetails(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory)->CreateWithPaymentDetails(changeAcceptedByMerchant, *(void**)(&updatedPaymentDetails), &result));
        return Windows::ApplicationModel::Payments::PaymentRequestChangedResult{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequest) consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::Create(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->Create(*(void**)(&details), *(void**)(&methodData), &result));
        return Windows::ApplicationModel::Payments::PaymentRequest{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequest) consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::CreateWithMerchantInfo(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->CreateWithMerchantInfo(*(void**)(&details), *(void**)(&methodData), *(void**)(&merchantInfo), &result));
        return Windows::ApplicationModel::Payments::PaymentRequest{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequest) consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory<D>::CreateWithMerchantInfoAndOptions(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory)->CreateWithMerchantInfoAndOptions(*(void**)(&details), *(void**)(&methodData), *(void**)(&merchantInfo), *(void**)(&options), &result));
        return Windows::ApplicationModel::Payments::PaymentRequest{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequest) consume_Windows_ApplicationModel_Payments_IPaymentRequestFactory2<D>::CreateWithMerchantInfoOptionsAndId(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options, param::hstring const& id) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestFactory2)->CreateWithMerchantInfoOptionsAndId(*(void**)(&details), *(void**)(&methodData), *(void**)(&merchantInfo), *(void**)(&options), *(void**)(&id), &result));
        return Windows::ApplicationModel::Payments::PaymentRequest{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentRequestStatus) consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>::Status() const
    {
        Windows::ApplicationModel::Payments::PaymentRequestStatus value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult)->get_Status(reinterpret_cast<int32_t*>(&value)));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentResponse) consume_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult<D>::Response() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult)->get_Response(&value));
        return Windows::ApplicationModel::Payments::PaymentResponse{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentToken) consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PaymentToken() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PaymentToken(&value));
        return Windows::ApplicationModel::Payments::PaymentToken{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentShippingOption) consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::ShippingOption() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_ShippingOption(&value));
        return Windows::ApplicationModel::Payments::PaymentShippingOption{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentAddress) consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::ShippingAddress() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_ShippingAddress(&value));
        return Windows::ApplicationModel::Payments::PaymentAddress{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerEmail() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerEmail(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerName() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerName(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::PayerPhoneNumber() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->get_PayerPhoneNumber(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::Foundation::IAsyncAction) consume_Windows_ApplicationModel_Payments_IPaymentResponse<D>::CompleteAsync(Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const& status) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentResponse)->CompleteAsync(static_cast<int32_t>(status), &result));
        return Windows::Foundation::IAsyncAction{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Label() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Label(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Label(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Label(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentCurrencyAmount) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Amount() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Amount(&value));
        return Windows::ApplicationModel::Payments::PaymentCurrencyAmount{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Amount(Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Amount(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Tag() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_Tag(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::Tag(param::hstring const& value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_Tag(*(void**)(&value)));
    }
    template <typename D> WINRT_IMPL_AUTO(bool) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::IsSelected() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->get_IsSelected(&value));
        return value;
    }
    template <typename D> WINRT_IMPL_AUTO(void) consume_Windows_ApplicationModel_Payments_IPaymentShippingOption<D>::IsSelected(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOption)->put_IsSelected(value));
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentShippingOption) consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::Create(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->Create(*(void**)(&label), *(void**)(&amount), &result));
        return Windows::ApplicationModel::Payments::PaymentShippingOption{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentShippingOption) consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::CreateWithSelected(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->CreateWithSelected(*(void**)(&label), *(void**)(&amount), selected, &result));
        return Windows::ApplicationModel::Payments::PaymentShippingOption{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentShippingOption) consume_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory<D>::CreateWithSelectedAndTag(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory)->CreateWithSelectedAndTag(*(void**)(&label), *(void**)(&amount), selected, *(void**)(&tag), &result));
        return Windows::ApplicationModel::Payments::PaymentShippingOption{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentToken<D>::PaymentMethodId() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentToken)->get_PaymentMethodId(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(hstring) consume_Windows_ApplicationModel_Payments_IPaymentToken<D>::JsonDetails() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentToken)->get_JsonDetails(&value));
        return hstring{ value, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentToken) consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>::Create(param::hstring const& paymentMethodId) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentTokenFactory)->Create(*(void**)(&paymentMethodId), &result));
        return Windows::ApplicationModel::Payments::PaymentToken{ result, take_ownership_from_abi };
    }
    template <typename D> WINRT_IMPL_AUTO(Windows::ApplicationModel::Payments::PaymentToken) consume_Windows_ApplicationModel_Payments_IPaymentTokenFactory<D>::CreateWithJsonDetails(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(Windows::ApplicationModel::Payments::IPaymentTokenFactory)->CreateWithJsonDetails(*(void**)(&paymentMethodId), *(void**)(&jsonDetails), &result));
        return Windows::ApplicationModel::Payments::PaymentToken{ result, take_ownership_from_abi };
    }
    template <typename H> struct delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler, H> final : implements_delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler, H>
    {
        delegate(H&& handler) : implements_delegate<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler, H>(std::forward<H>(handler)) {}

        int32_t __stdcall Invoke(void* paymentRequest, void* args) noexcept final try
        {
            (*this)(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const*>(&args));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentAddress> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentAddress>
    {
        int32_t __stdcall get_Country(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Country());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Country(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Country(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AddressLines(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().AddressLines());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_AddressLines(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().AddressLines(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<hstring> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Region(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Region());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Region(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Region(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_City(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().City());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_City(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().City(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DependentLocality(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().DependentLocality());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DependentLocality(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DependentLocality(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PostalCode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PostalCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PostalCode(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PostalCode(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SortingCode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().SortingCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_SortingCode(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().SortingCode(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_LanguageCode(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().LanguageCode());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_LanguageCode(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().LanguageCode(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Organization(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Organization());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Organization(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Organization(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Recipient(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Recipient());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Recipient(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Recipient(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PhoneNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PhoneNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_PhoneNumber(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().PhoneNumber(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::ValueSet>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory>
    {
        int32_t __stdcall Create(int32_t value, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const*>(&value)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmount>
    {
        int32_t __stdcall get_Currency(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Currency());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Currency(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Currency(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_CurrencySystem(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().CurrencySystem());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_CurrencySystem(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().CurrencySystem(*reinterpret_cast<hstring const*>(&value));
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
        int32_t __stdcall put_Value(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Value(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory>
    {
        int32_t __stdcall Create(void* value, void* currency, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().Create(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<hstring const*>(&currency)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithCurrencySystem(void* value, void* currency, void* currencySystem, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().CreateWithCurrencySystem(*reinterpret_cast<hstring const*>(&value), *reinterpret_cast<hstring const*>(&currency), *reinterpret_cast<hstring const*>(&currencySystem)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetails> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetails>
    {
        int32_t __stdcall get_Total(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentItem>(this->shim().Total());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Total(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Total(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_DisplayItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>>(this->shim().DisplayItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_DisplayItems(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().DisplayItems(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShippingOptions(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption>>(this->shim().ShippingOptions());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ShippingOptions(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingOptions(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentShippingOption> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Modifiers(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier>>(this->shim().Modifiers());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Modifiers(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Modifiers(*reinterpret_cast<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentDetailsModifier> const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsFactory>
    {
        int32_t __stdcall Create(void* total, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithDisplayItems(void* total, void* displayItems, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().CreateWithDisplayItems(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&displayItems)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifier> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifier>
    {
        int32_t __stdcall get_JsonData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JsonData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SupportedMethodIds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().SupportedMethodIds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Total(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentItem>(this->shim().Total());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_AdditionalDisplayItems(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentItem>>(this->shim().AdditionalDisplayItems());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory>
    {
        int32_t __stdcall Create(void* supportedMethodIds, void* total, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetailsModifier>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithAdditionalDisplayItems(void* supportedMethodIds, void* total, void* additionalDisplayItems, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetailsModifier>(this->shim().CreateWithAdditionalDisplayItems(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&additionalDisplayItems)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithAdditionalDisplayItemsAndJsonData(void* supportedMethodIds, void* total, void* additionalDisplayItems, void* jsonData, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentDetailsModifier>(this->shim().CreateWithAdditionalDisplayItemsAndJsonData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentItem const*>(&total), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentItem> const*>(&additionalDisplayItems), *reinterpret_cast<hstring const*>(&jsonData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentItem> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentItem>
    {
        int32_t __stdcall get_Label(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Label(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Amount(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().Amount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Amount(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Pending(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().Pending());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Pending(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Pending(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentItemFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentItemFactory>
    {
        int32_t __stdcall Create(void* label, void* amount, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentItem>(this->shim().Create(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentMediator> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMediator>
    {
        int32_t __stdcall GetSupportedMethodIdsAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<hstring>>>(this->shim().GetSupportedMethodIdsAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SubmitPaymentRequestAsync(void* paymentRequest, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>>(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SubmitPaymentRequestWithChangeHandlerAsync(void* paymentRequest, void* changeHandler, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentRequestSubmitResult>>(this->shim().SubmitPaymentRequestAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedHandler const*>(&changeHandler)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentMediator2> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMediator2>
    {
        int32_t __stdcall CanMakePaymentAsync(void* paymentRequest, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncOperation<Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult>>(this->shim().CanMakePaymentAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequest const*>(&paymentRequest)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfo> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfo>
    {
        int32_t __stdcall get_PackageFullName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PackageFullName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Uri(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Uri>(this->shim().Uri());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory>
    {
        int32_t __stdcall Create(void* uri, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentMerchantInfo>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Uri const*>(&uri)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentMethodData> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMethodData>
    {
        int32_t __stdcall get_SupportedMethodIds(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<hstring>>(this->shim().SupportedMethodIds());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JsonData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JsonData());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentMethodDataFactory>
    {
        int32_t __stdcall Create(void* supportedMethodIds, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentMethodData>(this->shim().Create(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithJsonData(void* supportedMethodIds, void* jsonData, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentMethodData>(this->shim().CreateWithJsonData(*reinterpret_cast<Windows::Foundation::Collections::IIterable<hstring> const*>(&supportedMethodIds), *reinterpret_cast<hstring const*>(&jsonData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentOptions> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentOptions>
    {
        int32_t __stdcall get_RequestPayerEmail(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptionPresence>(this->shim().RequestPayerEmail());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequestPayerEmail(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerEmail(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestPayerName(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptionPresence>(this->shim().RequestPayerName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequestPayerName(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerName(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestPayerPhoneNumber(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptionPresence>(this->shim().RequestPayerPhoneNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequestPayerPhoneNumber(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestPayerPhoneNumber(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptionPresence const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_RequestShipping(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().RequestShipping());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_RequestShipping(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().RequestShipping(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShippingType(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentShippingType>(this->shim().ShippingType());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ShippingType(int32_t value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ShippingType(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentShippingType const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequest> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequest>
    {
        int32_t __stdcall get_MerchantInfo(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentMerchantInfo>(this->shim().MerchantInfo());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Details(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().Details());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_MethodData(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Payments::PaymentMethodData>>(this->shim().MethodData());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Options(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentOptions>(this->shim().Options());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequest2> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequest2>
    {
        int32_t __stdcall get_Id(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Id());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs>
    {
        int32_t __stdcall get_ChangeKind(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentRequestChangeKind>(this->shim().ChangeKind());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShippingAddress(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentAddress>(this->shim().ShippingAddress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_SelectedShippingOption(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().SelectedShippingOption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall Acknowledge(void* changeResult) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Acknowledge(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestChangedResult const*>(&changeResult));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResult>
    {
        int32_t __stdcall get_ChangeAcceptedByMerchant(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ChangeAcceptedByMerchant());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ChangeAcceptedByMerchant(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ChangeAcceptedByMerchant(value);
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
        int32_t __stdcall put_Message(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Message(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_UpdatedPaymentDetails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentDetails>(this->shim().UpdatedPaymentDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_UpdatedPaymentDetails(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().UpdatedPaymentDetails(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory>
    {
        int32_t __stdcall Create(bool changeAcceptedByMerchant, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>(this->shim().Create(changeAcceptedByMerchant));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithPaymentDetails(bool changeAcceptedByMerchant, void* updatedPaymentDetails, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequestChangedResult>(this->shim().CreateWithPaymentDetails(changeAcceptedByMerchant, *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&updatedPaymentDetails)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory>
    {
        int32_t __stdcall Create(void* details, void* methodData, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().Create(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithMerchantInfo(void* details, void* methodData, void* merchantInfo, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().CreateWithMerchantInfo(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithMerchantInfoAndOptions(void* details, void* methodData, void* merchantInfo, void* options, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().CreateWithMerchantInfoAndOptions(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptions const*>(&options)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory2> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestFactory2>
    {
        int32_t __stdcall CreateWithMerchantInfoOptionsAndId(void* details, void* methodData, void* merchantInfo, void* options, void* id, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentRequest>(this->shim().CreateWithMerchantInfoOptionsAndId(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentDetails const*>(&details), *reinterpret_cast<Windows::Foundation::Collections::IIterable<Windows::ApplicationModel::Payments::PaymentMethodData> const*>(&methodData), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentMerchantInfo const*>(&merchantInfo), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentOptions const*>(&options), *reinterpret_cast<hstring const*>(&id)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult>
    {
        int32_t __stdcall get_Status(int32_t* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentRequestStatus>(this->shim().Status());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Response(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentResponse>(this->shim().Response());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentResponse> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentResponse>
    {
        int32_t __stdcall get_PaymentToken(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentToken>(this->shim().PaymentToken());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShippingOption(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().ShippingOption());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_ShippingAddress(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentAddress>(this->shim().ShippingAddress());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PayerEmail(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerEmail());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PayerName(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerName());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_PayerPhoneNumber(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PayerPhoneNumber());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CompleteAsync(int32_t status, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::Foundation::IAsyncAction>(this->shim().CompleteAsync(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentRequestCompletionStatus const*>(&status)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentShippingOption> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentShippingOption>
    {
        int32_t __stdcall get_Label(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Label());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Label(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Label(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Amount(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<Windows::ApplicationModel::Payments::PaymentCurrencyAmount>(this->shim().Amount());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Amount(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Amount(*reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_Tag(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().Tag());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_Tag(void* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().Tag(*reinterpret_cast<hstring const*>(&value));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_IsSelected(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().IsSelected());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_IsSelected(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().IsSelected(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory>
    {
        int32_t __stdcall Create(void* label, void* amount, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().Create(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithSelected(void* label, void* amount, bool selected, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().CreateWithSelected(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount), selected));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithSelectedAndTag(void* label, void* amount, bool selected, void* tag, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentShippingOption>(this->shim().CreateWithSelectedAndTag(*reinterpret_cast<hstring const*>(&label), *reinterpret_cast<Windows::ApplicationModel::Payments::PaymentCurrencyAmount const*>(&amount), selected, *reinterpret_cast<hstring const*>(&tag)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentToken> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentToken>
    {
        int32_t __stdcall get_PaymentMethodId(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().PaymentMethodId());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall get_JsonDetails(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<hstring>(this->shim().JsonDetails());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, Windows::ApplicationModel::Payments::IPaymentTokenFactory> : produce_base<D, Windows::ApplicationModel::Payments::IPaymentTokenFactory>
    {
        int32_t __stdcall Create(void* paymentMethodId, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentToken>(this->shim().Create(*reinterpret_cast<hstring const*>(&paymentMethodId)));
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall CreateWithJsonDetails(void* paymentMethodId, void* jsonDetails, void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<Windows::ApplicationModel::Payments::PaymentToken>(this->shim().CreateWithJsonDetails(*reinterpret_cast<hstring const*>(&paymentMethodId), *reinterpret_cast<hstring const*>(&jsonDetails)));
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Payments
{
    inline PaymentAddress::PaymentAddress() :
        PaymentAddress(impl::call_factory_cast<PaymentAddress(*)(Windows::Foundation::IActivationFactory const&), PaymentAddress>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PaymentAddress>(); }))
    {
    }
    inline PaymentCanMakePaymentResult::PaymentCanMakePaymentResult(Windows::ApplicationModel::Payments::PaymentCanMakePaymentResultStatus const& value) :
        PaymentCanMakePaymentResult(impl::call_factory<PaymentCanMakePaymentResult, IPaymentCanMakePaymentResultFactory>([&](IPaymentCanMakePaymentResultFactory const& f) { return f.Create(value); }))
    {
    }
    inline PaymentCurrencyAmount::PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency) :
        PaymentCurrencyAmount(impl::call_factory<PaymentCurrencyAmount, IPaymentCurrencyAmountFactory>([&](IPaymentCurrencyAmountFactory const& f) { return f.Create(value, currency); }))
    {
    }
    inline PaymentCurrencyAmount::PaymentCurrencyAmount(param::hstring const& value, param::hstring const& currency, param::hstring const& currencySystem) :
        PaymentCurrencyAmount(impl::call_factory<PaymentCurrencyAmount, IPaymentCurrencyAmountFactory>([&](IPaymentCurrencyAmountFactory const& f) { return f.CreateWithCurrencySystem(value, currency, currencySystem); }))
    {
    }
    inline PaymentDetails::PaymentDetails() :
        PaymentDetails(impl::call_factory_cast<PaymentDetails(*)(Windows::Foundation::IActivationFactory const&), PaymentDetails>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PaymentDetails>(); }))
    {
    }
    inline PaymentDetails::PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total) :
        PaymentDetails(impl::call_factory<PaymentDetails, IPaymentDetailsFactory>([&](IPaymentDetailsFactory const& f) { return f.Create(total); }))
    {
    }
    inline PaymentDetails::PaymentDetails(Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& displayItems) :
        PaymentDetails(impl::call_factory<PaymentDetails, IPaymentDetailsFactory>([&](IPaymentDetailsFactory const& f) { return f.CreateWithDisplayItems(total, displayItems); }))
    {
    }
    inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total) :
        PaymentDetailsModifier(impl::call_factory<PaymentDetailsModifier, IPaymentDetailsModifierFactory>([&](IPaymentDetailsModifierFactory const& f) { return f.Create(supportedMethodIds, total); }))
    {
    }
    inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems) :
        PaymentDetailsModifier(impl::call_factory<PaymentDetailsModifier, IPaymentDetailsModifierFactory>([&](IPaymentDetailsModifierFactory const& f) { return f.CreateWithAdditionalDisplayItems(supportedMethodIds, total, additionalDisplayItems); }))
    {
    }
    inline PaymentDetailsModifier::PaymentDetailsModifier(param::iterable<hstring> const& supportedMethodIds, Windows::ApplicationModel::Payments::PaymentItem const& total, param::iterable<Windows::ApplicationModel::Payments::PaymentItem> const& additionalDisplayItems, param::hstring const& jsonData) :
        PaymentDetailsModifier(impl::call_factory<PaymentDetailsModifier, IPaymentDetailsModifierFactory>([&](IPaymentDetailsModifierFactory const& f) { return f.CreateWithAdditionalDisplayItemsAndJsonData(supportedMethodIds, total, additionalDisplayItems, jsonData); }))
    {
    }
    inline PaymentItem::PaymentItem(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) :
        PaymentItem(impl::call_factory<PaymentItem, IPaymentItemFactory>([&](IPaymentItemFactory const& f) { return f.Create(label, amount); }))
    {
    }
    inline PaymentMediator::PaymentMediator() :
        PaymentMediator(impl::call_factory_cast<PaymentMediator(*)(Windows::Foundation::IActivationFactory const&), PaymentMediator>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PaymentMediator>(); }))
    {
    }
    inline PaymentMerchantInfo::PaymentMerchantInfo() :
        PaymentMerchantInfo(impl::call_factory_cast<PaymentMerchantInfo(*)(Windows::Foundation::IActivationFactory const&), PaymentMerchantInfo>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PaymentMerchantInfo>(); }))
    {
    }
    inline PaymentMerchantInfo::PaymentMerchantInfo(Windows::Foundation::Uri const& uri) :
        PaymentMerchantInfo(impl::call_factory<PaymentMerchantInfo, IPaymentMerchantInfoFactory>([&](IPaymentMerchantInfoFactory const& f) { return f.Create(uri); }))
    {
    }
    inline PaymentMethodData::PaymentMethodData(param::iterable<hstring> const& supportedMethodIds) :
        PaymentMethodData(impl::call_factory<PaymentMethodData, IPaymentMethodDataFactory>([&](IPaymentMethodDataFactory const& f) { return f.Create(supportedMethodIds); }))
    {
    }
    inline PaymentMethodData::PaymentMethodData(param::iterable<hstring> const& supportedMethodIds, param::hstring const& jsonData) :
        PaymentMethodData(impl::call_factory<PaymentMethodData, IPaymentMethodDataFactory>([&](IPaymentMethodDataFactory const& f) { return f.CreateWithJsonData(supportedMethodIds, jsonData); }))
    {
    }
    inline PaymentOptions::PaymentOptions() :
        PaymentOptions(impl::call_factory_cast<PaymentOptions(*)(Windows::Foundation::IActivationFactory const&), PaymentOptions>([](Windows::Foundation::IActivationFactory const& f) { return f.template ActivateInstance<PaymentOptions>(); }))
    {
    }
    inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData) :
        PaymentRequest(impl::call_factory<PaymentRequest, IPaymentRequestFactory>([&](IPaymentRequestFactory const& f) { return f.Create(details, methodData); }))
    {
    }
    inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo) :
        PaymentRequest(impl::call_factory<PaymentRequest, IPaymentRequestFactory>([&](IPaymentRequestFactory const& f) { return f.CreateWithMerchantInfo(details, methodData, merchantInfo); }))
    {
    }
    inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options) :
        PaymentRequest(impl::call_factory<PaymentRequest, IPaymentRequestFactory>([&](IPaymentRequestFactory const& f) { return f.CreateWithMerchantInfoAndOptions(details, methodData, merchantInfo, options); }))
    {
    }
    inline PaymentRequest::PaymentRequest(Windows::ApplicationModel::Payments::PaymentDetails const& details, param::iterable<Windows::ApplicationModel::Payments::PaymentMethodData> const& methodData, Windows::ApplicationModel::Payments::PaymentMerchantInfo const& merchantInfo, Windows::ApplicationModel::Payments::PaymentOptions const& options, param::hstring const& id) :
        PaymentRequest(impl::call_factory<PaymentRequest, IPaymentRequestFactory2>([&](IPaymentRequestFactory2 const& f) { return f.CreateWithMerchantInfoOptionsAndId(details, methodData, merchantInfo, options, id); }))
    {
    }
    inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant) :
        PaymentRequestChangedResult(impl::call_factory<PaymentRequestChangedResult, IPaymentRequestChangedResultFactory>([&](IPaymentRequestChangedResultFactory const& f) { return f.Create(changeAcceptedByMerchant); }))
    {
    }
    inline PaymentRequestChangedResult::PaymentRequestChangedResult(bool changeAcceptedByMerchant, Windows::ApplicationModel::Payments::PaymentDetails const& updatedPaymentDetails) :
        PaymentRequestChangedResult(impl::call_factory<PaymentRequestChangedResult, IPaymentRequestChangedResultFactory>([&](IPaymentRequestChangedResultFactory const& f) { return f.CreateWithPaymentDetails(changeAcceptedByMerchant, updatedPaymentDetails); }))
    {
    }
    inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount) :
        PaymentShippingOption(impl::call_factory<PaymentShippingOption, IPaymentShippingOptionFactory>([&](IPaymentShippingOptionFactory const& f) { return f.Create(label, amount); }))
    {
    }
    inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected) :
        PaymentShippingOption(impl::call_factory<PaymentShippingOption, IPaymentShippingOptionFactory>([&](IPaymentShippingOptionFactory const& f) { return f.CreateWithSelected(label, amount, selected); }))
    {
    }
    inline PaymentShippingOption::PaymentShippingOption(param::hstring const& label, Windows::ApplicationModel::Payments::PaymentCurrencyAmount const& amount, bool selected, param::hstring const& tag) :
        PaymentShippingOption(impl::call_factory<PaymentShippingOption, IPaymentShippingOptionFactory>([&](IPaymentShippingOptionFactory const& f) { return f.CreateWithSelectedAndTag(label, amount, selected, tag); }))
    {
    }
    inline PaymentToken::PaymentToken(param::hstring const& paymentMethodId) :
        PaymentToken(impl::call_factory<PaymentToken, IPaymentTokenFactory>([&](IPaymentTokenFactory const& f) { return f.Create(paymentMethodId); }))
    {
    }
    inline PaymentToken::PaymentToken(param::hstring const& paymentMethodId, param::hstring const& jsonDetails) :
        PaymentToken(impl::call_factory<PaymentToken, IPaymentTokenFactory>([&](IPaymentTokenFactory const& f) { return f.CreateWithJsonDetails(paymentMethodId, jsonDetails); }))
    {
    }
    template <typename L> PaymentRequestChangedHandler::PaymentRequestChangedHandler(L handler) :
        PaymentRequestChangedHandler(impl::make_delegate<PaymentRequestChangedHandler>(std::forward<L>(handler)))
    {
    }
    template <typename F> PaymentRequestChangedHandler::PaymentRequestChangedHandler(F* handler) :
        PaymentRequestChangedHandler([=](auto&&... args) { return handler(args...); })
    {
    }
    template <typename O, typename M> PaymentRequestChangedHandler::PaymentRequestChangedHandler(O* object, M method) :
        PaymentRequestChangedHandler([=](auto&&... args) { return ((*object).*(method))(args...); })
    {
    }
    template <typename O, typename M> PaymentRequestChangedHandler::PaymentRequestChangedHandler(com_ptr<O>&& object, M method) :
        PaymentRequestChangedHandler([o = std::move(object), method](auto&&... args) { return ((*o).*(method))(args...); })
    {
    }
    template <typename O, typename M> PaymentRequestChangedHandler::PaymentRequestChangedHandler(weak_ref<O>&& object, M method) :
        PaymentRequestChangedHandler([o = std::move(object), method](auto&&... args) { if (auto s = o.get()) { ((*s).*(method))(args...); } })
    {
    }
    inline auto PaymentRequestChangedHandler::operator()(Windows::ApplicationModel::Payments::PaymentRequest const& paymentRequest, Windows::ApplicationModel::Payments::PaymentRequestChangedArgs const& args) const
    {
        check_hresult((*(impl::abi_t<PaymentRequestChangedHandler>**)this)->Invoke(*(void**)(&paymentRequest), *(void**)(&args)));
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentAddress> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCanMakePaymentResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmount> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentCurrencyAmountFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifier> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentDetailsModifierFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentItemFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMediator> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMediator2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMerchantInfoFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodData> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentMethodDataFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequest2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestChangedResultFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestFactory2> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentRequestSubmitResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentResponse> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOption> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentShippingOptionFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentToken> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::IPaymentTokenFactory> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentAddress> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentCanMakePaymentResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentCurrencyAmount> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentDetails> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentDetailsModifier> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentItem> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMediator> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMerchantInfo> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentMethodData> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentOptions> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequest> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedArgs> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestChangedResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentRequestSubmitResult> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentResponse> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentShippingOption> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::ApplicationModel::Payments::PaymentToken> : winrt::impl::hash_base {};
#endif
}
#endif
