# ColorSpectrumTest419
SColorSpectrum with NativeWidgetHost in Unreal Engine 4.19 can run both on Play in Editor and the packaged exe, while SColorPicker cannot as described in [here](https://github.com/HSeo/ColorPickerTest419/).
---

For using SColorSpectrum, the following setup is fine.

* NativeWidgetHostColorSpectrum.h
``` cpp:NativeWidgetHostColorSpectrum.h
#pragma once

#include "CoreMinimal.h"
#include "Components/NativeWidgetHost.h"
#include "NativeWidgetHostColorSpectrum.generated.h"

UCLASS()
class COLORSPECTRUMTEST419_API UNativeWidgetHostColorSpectrum : public UNativeWidgetHost
{
  GENERATED_BODY()

public:
  UNativeWidgetHostColorSpectrum(const FObjectInitializer& ObjectInitializer);
};
```  

* NativeWidgetHostColorSpectrum.cpp
``` cpp:NativeWidgetHostColorSpectrum.cpp
#include "NativeWidgetHostColorSpectrum.h"
#include "SColorSpectrum.h"

UNativeWidgetHostColorSpectrum::UNativeWidgetHostColorSpectrum(const FObjectInitializer& ObjectInitializer) : UNativeWidgetHost(ObjectInitializer) {
  TSharedRef<SColorSpectrum> color_spectrum = SNew(SColorSpectrum);

  SetContent(color_spectrum);
}
```  

* WidgetBlueprint
![SColorSpectrum_UMG](https://user-images.githubusercontent.com/8625552/52102208-9dd16480-2622-11e9-845e-7ddf09f74874.jpg)
---
  
It works fine during Play in Editor like the following image,
![SColorSpectrum_PIE](https://user-images.githubusercontent.com/8625552/52102209-9dd16480-2622-11e9-8b75-67e6062104f1.jpg)
and it can be packaged without any error.

However, when I replace SColorSpectrum by SColorPicker, it works fine during Play in Editor but cannot be packaged.
(The SColorPicker is [here](https://github.com/HSeo/ColorPickerTest419/).)

Is this a bug? Or maybe my implementation is somehow incorrect?
