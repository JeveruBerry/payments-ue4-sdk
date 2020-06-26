﻿// Copyright 2020 Xsolla Inc. All Rights Reserved.

#pragma once

#include "XsollaPaymentsDataModel.generated.h"

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsStringValue
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FString value;
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsCountry : public FXsollaPaymentsStringValue
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	bool allow_modify;

	FXsollaPaymentsCountry()
		: FXsollaPaymentsStringValue(), allow_modify(false) {};
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsPurchaseUserInfo
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsStringValue id;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsStringValue name;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsStringValue email;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsCountry country;
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsPurchaseSettingsUI
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FString theme;
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsPurchaseSettings
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	int32 project_id;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FString external_id;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FString mode;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FString currency;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsPurchaseSettingsUI ui;

	FXsollaPaymentsPurchaseSettings()
		: project_id(0) {};
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsVirtualItem
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FString sku;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	int32 amount;

	FXsollaPaymentsVirtualItem() 
		: amount(0) {};
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsVirtualItems
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	TArray<FXsollaPaymentsVirtualItem> items;
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsPurchaseContent
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsVirtualItems virtual_items;
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsAccessData
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsPurchaseUserInfo user;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsPurchaseSettings settings;

	UPROPERTY(BlueprintReadWrite, Category = "Xsolla Payments Access Data")
	FXsollaPaymentsPurchaseContent purchase;
};

USTRUCT(BlueprintType)
struct XSOLLAPAYMENTS_API FXsollaPaymentsPurchaseStatus
{
	GENERATED_USTRUCT_BODY()

	UPROPERTY(BlueprintReadOnly, Category = "Xsolla Payments Order")
	int32 id;

	UPROPERTY(BlueprintReadOnly, Category = "Xsolla Payments Order")
	FString status;

	UPROPERTY(BlueprintReadOnly, Category = "Xsolla Payments Order")
	FString external_id;

	FXsollaPaymentsPurchaseStatus()
		: id(0) {};
};