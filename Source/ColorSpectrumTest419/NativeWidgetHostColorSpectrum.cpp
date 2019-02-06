#include "NativeWidgetHostColorSpectrum.h"
#include "SColorSpectrum.h"

UNativeWidgetHostColorSpectrum::UNativeWidgetHostColorSpectrum(const FObjectInitializer& ObjectInitializer) : UNativeWidgetHost(ObjectInitializer) {}

void UNativeWidgetHostColorSpectrum::ReleaseSlateResources(bool bReleaseChildren) {
  Super::ReleaseSlateResources(bReleaseChildren);
  color_spectrum_.Reset();
}

TSharedRef<SWidget> UNativeWidgetHostColorSpectrum::RebuildWidget() {
  SAssignNew(color_spectrum_, SColorSpectrum);
  SetContent(color_spectrum_.ToSharedRef());

  //UNativeWidgetHost::RebuildWidget(); // Unnecessary?

  return GetContent().ToSharedRef();
}