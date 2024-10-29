#ifndef __AUTOTALENT__
#define __AUTOTALENT__

#include "IPlug_include_in_plug_hdr.h"
#include "IPopupMenuControl.h"
#include "mayer_fft.h"
#include "fftsetup.h"
#include "IKnobMultiControlText.h"
#include "Scales.h"


class AutoTalent : public IPlug
{
public:
  AutoTalent(IPlugInstanceInfo instanceInfo);
  ~AutoTalent();

  void Reset();
  void OnParamChange(int paramIdx);
  void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
  double mGain;
};

#endif
