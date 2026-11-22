#pragma once
#include "CoreMinimal.h"
#include "AudioOutputDeviceInfo.h"
#include "EAudioDeviceChangedRole.h"
#include "SwapAudioOutputResult.h"
#include "FortSettingValueDiscreteDynamic.h"
#include "FortSettingValueDiscreteDynamic_AudioOutputDevice.generated.h"

UCLASS(Blueprintable)
class UFortSettingValueDiscreteDynamic_AudioOutputDevice : public UFortSettingValueDiscreteDynamic {
    GENERATED_BODY()
public:
    UFortSettingValueDiscreteDynamic_AudioOutputDevice();

    UFUNCTION(BlueprintCallable)
    void OnCompletedDeviceSwap(const FSwapAudioOutputResult& SwapResult);
    
    UFUNCTION(BlueprintCallable)
    void OnAudioOutputDevicesObtained(const TArray<FAudioOutputDeviceInfo>& AvailableDevices);
    
    UFUNCTION(BlueprintCallable)
    void DeviceSwitched(const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void DeviceAddedOrRemoved(const FString& DeviceID);
    
    UFUNCTION(BlueprintCallable)
    void DefaultDeviceChanged(EAudioDeviceChangedRole InRole, const FString& DeviceID);
    
};

