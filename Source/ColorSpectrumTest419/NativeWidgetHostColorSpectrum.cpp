#include "NativeWidgetHostColorSpectrum.h"
#include "SColorSpectrum.h"

UNativeWidgetHostColorSpectrum::UNativeWidgetHostColorSpectrum(const FObjectInitializer& ObjectInitializer) : UNativeWidgetHost(ObjectInitializer) {
  TSharedRef<SColorSpectrum> color_spectrum = SNew(SColorSpectrum);

  SetContent(color_spectrum);
}