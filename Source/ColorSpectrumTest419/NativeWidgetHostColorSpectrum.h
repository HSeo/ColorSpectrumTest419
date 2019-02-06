#pragma once

#include "CoreMinimal.h"
#include "Components/NativeWidgetHost.h"
#include "NativeWidgetHostColorSpectrum.generated.h"

class SColorSpectrum;

UCLASS()
class COLORSPECTRUMTEST419_API UNativeWidgetHostColorSpectrum : public UNativeWidgetHost
{
  GENERATED_BODY()

public:
  UNativeWidgetHostColorSpectrum(const FObjectInitializer& ObjectInitializer);
  virtual void ReleaseSlateResources(bool bReleaseChildren) override;

protected:
  virtual TSharedRef<SWidget> RebuildWidget() override;

private:
  TSharedPtr<SColorSpectrum> color_spectrum_;
};