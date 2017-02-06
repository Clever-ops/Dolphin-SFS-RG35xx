/* replaces AudioCommon/AudioCommon.cpp */

#include <cstring>

#include "AudioCommon/AudioCommon.h"
#include "AudioCommon/Mixer.h"
#include "Common/Common.h"
#include "Common/FileUtil.h"
#include "Common/Logging/Log.h"
#include "Common/CommonFuncs.h"
#include "Common/CommonTypes.h"
#include "Common/MathUtil.h"
#include "Core/ConfigManager.h"

#include <libretro.h>

extern retro_audio_sample_batch_t audio_batch_cb;
std::unique_ptr<SoundStream> g_sound_stream;

WaveFileWriter::WaveFileWriter()
{

}

WaveFileWriter::~WaveFileWriter()
{

}

CMixer::CMixer(unsigned int BackendSampleRate) : m_sampleRate(BackendSampleRate)
{
  INFO_LOG(AUDIO_INTERFACE, "Mixer is initialized");
}

CMixer::~CMixer()
{
}

unsigned int CMixer::MixerFifo::Mix(short* samples, unsigned int numSamples,
                                    bool consider_framelimit)
{
   return 0;
}

unsigned int CMixer::Mix(short* samples, unsigned int num_samples, bool consider_framelimit)
{
   return 0;
}

void CMixer::MixerFifo::PushSamples(const short* samples, unsigned int num_samples)
{
}

void CMixer::PushSamples(const short* samples, unsigned int num_samples)
{
   /* not needed, called by the original SendAIBuffer in AudioCommon/AudioCommon.cpp */
}

void CMixer::PushStreamingSamples(const short* samples, unsigned int num_samples)
{
   /* todo */
}

void CMixer::PushWiimoteSpeakerSamples(const short* samples, unsigned int num_samples,
                                       unsigned int sample_rate)
{
   /* todo */
}

void CMixer::SetDMAInputSampleRate(unsigned int rate)
{
}

void CMixer::SetStreamInputSampleRate(unsigned int rate)
{
}

void CMixer::SetStreamingVolume(unsigned int lvolume, unsigned int rvolume)
{
}

void CMixer::SetWiimoteSpeakerVolume(unsigned int lvolume, unsigned int rvolume)
{
}

void CMixer::StartLogDTKAudio(const std::string& filename)
{
}

void CMixer::StopLogDTKAudio()
{
}

void CMixer::StartLogDSPAudio(const std::string& filename)
{
}

void CMixer::StopLogDSPAudio()
{
}

void CMixer::MixerFifo::SetInputSampleRate(unsigned int rate)
{
}

unsigned int CMixer::MixerFifo::GetInputSampleRate() const
{
}

void CMixer::MixerFifo::SetVolume(unsigned int lvolume, unsigned int rvolume)
{
}

class LibretroSound final : public SoundStream
{
public:
  static bool isValid() { return true; }
};

namespace AudioCommon
{

void InitSoundStream()
{
   g_sound_stream = std::make_unique<LibretroSound>();
}

void ShutdownSoundStream()
{
  INFO_LOG(AUDIO, "Shutting down sound stream");

  if (g_sound_stream)
  {
    g_sound_stream.reset();
  }

  INFO_LOG(AUDIO, "Done shutting down sound stream");
}

std::vector<std::string> GetSoundBackends()
{
  std::vector<std::string> backends;
  backends.push_back("Libretro");
  return backends;
}

bool SupportsDPL2Decoder(const std::string& backend)
{
  return false;
}

bool SupportsLatencyControl(const std::string& backend)
{
  return false;
}

bool SupportsVolumeChanges(const std::string& backend)
{
  return false;
}

void UpdateSoundStream()
{
}

void ClearAudioBuffer(bool mute)
{
}

void SendAIBuffer(const short* samples, unsigned int num_samples)
{
  for (u32 i = 0; i < num_samples; i++)
     ((u32*)samples)[i] = Common::swap32(((u32*)samples)[i]);

  audio_batch_cb(samples, num_samples);
}

void StartAudioDump()
{
}

void StopAudioDump()
{
}

void IncreaseVolume(unsigned short offset)
{
}

void DecreaseVolume(unsigned short offset)
{
}

void ToggleMuteVolume()
{
}
}
