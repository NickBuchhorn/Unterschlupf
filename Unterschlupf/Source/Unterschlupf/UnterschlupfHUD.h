// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "UnterschlupfHUD.generated.h"

UCLASS()
class AUnterschlupfHUD : public AHUD
{
	GENERATED_BODY()

public:
	AUnterschlupfHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

