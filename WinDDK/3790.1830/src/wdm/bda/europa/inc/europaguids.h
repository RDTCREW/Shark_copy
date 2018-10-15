#pragma once

//Pin name GUIDs

//Pin GUID {7BB284B9-714D-493d-A101-B1B028E782BD}
static const GUID VAMP_ANLG_AUDIO_IN_PIN = 
{ 0x7BB284B9, 0x714D, 0x493d, { 0xa1, 0x01, 0xb1, 0xb0, 0x28, 0xe7, 0x82, 0xbd } };

//Pin GUID {5582E657-E596-42b5-9DB3-541B27A2355F}
static const GUID VAMP_ANLG_AUDIO_OUT_PIN = 
{ 0x5582E657, 0xE596, 0x42b5, { 0x9d, 0xb3, 0x54, 0x1b, 0x27, 0xa2, 0x35, 0x5f } };

//Filter GUIDs

//Filter GUID {BBEFB6C7-2FC4-4139-BB8B-A58BBA724083}
static const GUID VAMP_ANLG_CAP_FILTER = 
{ 0xbbefb6c7, 0x2fc4, 0x4139, { 0xbb, 0x8b, 0xa5, 0x8b, 0xba, 0x72, 0x40, 0x83 } };

// Filter GUID {FA88327D-11CC-45C5-AF4A-3145D7646975}
static const GUID VAMP_ANLG_WAV_FILTER = 
{ 0xfa88327d, 0x11cc, 0x45c5, { 0xaf, 0x4a, 0x31, 0x45, 0xd7, 0x64, 0x69, 0x75 } };

//Filter GUID {F3B951E7-8619-4ff3-91CA-03910E4BB90B}
static const GUID VAMP_ANLG_AUDIO_FILTER = 
{ 0xF3B951E7, 0x8619, 0x4ff3, { 0x91, 0xCA, 0x03, 0x91, 0x0E, 0x4B, 0xB9, 0x0B } };

//Filter GUID {ED97D48C-E41E-11d5-9964-00E098172B75}
static const GUID VAMP_ANLG_XBAR_FILTER = 
{ 0xed97d48c, 0xe41e, 0x11d5, { 0x99, 0x64, 0x0, 0xe0, 0x98, 0x17, 0x2b, 0x75 } };

//Filter GUID {DEFE4E8D-584B-446c-89CC-FD1F4D3F0746}
static const GUID VAMP_ANLG_TVAUDIO_FILTER = 
{ 0xdefe4e8d, 0x584b, 0x446c, { 0x89, 0xcc, 0xfd, 0x1f, 0x4d, 0x3f, 0x7, 0x46 } };

//Filter GUID {62B08A3E-335E-4b30-90F9-2BA47EF9EC2E}
static const GUID VAMP_ANLG_TUNER_FILTER = 
{ 0x62b08a3e, 0x335e, 0x4b30, { 0x90, 0xf9, 0x2b, 0xa4, 0x7e, 0xf9, 0xec, 0x2e } };

//Filter GUID {5BB3DBD0-9E1E-424c-9281-6B5E7109F111}
static const GUID VAMP_DGTL_CAPTURE_FILTER = 
{ 0x5bb3dbd0, 0x9e1e, 0x424c, { 0x92, 0x81, 0x6b, 0x5e, 0x71, 0x9, 0xf1, 0x11 } };

//Filter GUID {3FF44EE5-8547-402a-94F3-D447F4D7C4EF}
static const GUID VAMP_DGTL_TUNER_FILTER = 
{ 0x3ff44ee5, 0x8547, 0x402a, { 0x94, 0xf3, 0xd4, 0x47, 0xf4, 0xd7, 0xc4, 0xef } };

//Medium GUIDs

//Medium GUID {D111520B-511C-49fa-846A-165E7BE3F3AF}
#define STATIC_VAMP_DIGITAL_TUNER_OUT_MEDIUM\
    0xd111520b, 0x511c, 0x49fa, 0x84, 0x6a, 0x16, 0x5e, 0x7b, 0xe3, 0xf3, 0xaf
DEFINE_GUIDSTRUCT("D111520B-511C-49fa-846A-165E7BE3F3AF", VAMP_TUNER_OUT_MEDIUM);
// Defines the VAMP_TUNER_OUT_MEDIUM as a GUID.
#define VAMP_TUNER_OUT_MEDIUM DEFINE_GUIDNAMED(VAMP_TUNER_OUT_MEDIUM)

//Medium GUID {5CBF4996-39D2-4c5f-B85F-628FAC6AAC39}
#define STATIC_VAMP_ANALOG_TUNER_VIDEO_OUT_MEDIUM\
	0x5cbf4996, 0x39d2, 0x4c5f, 0xb8, 0x5f, 0x62, 0x8f, 0xac, 0x6a, 0xac, 0x39
DEFINE_GUIDSTRUCT("5CBF4996-39D2-4c5f-B85F-628FAC6AAC39", VAMP_ANALOG_TUNER_VIDEO_OUT_MEDIUM);
// Defines the VAMP_ANALOG_TUNER_VIDEO_OUT_MEDIUM as a GUID.
#define VAMP_ANALOG_TUNER_VIDEO_OUT_MEDIUM DEFINE_GUIDNAMED(VAMP_ANALOG_TUNER_VIDEO_OUT_MEDIUM)

//Medium GUID {1587B92C-D545-4736-9F97-D0AD2CB69A0C}
#define VAMP_VIDEO_DECODER 0x1587b92c, 0xd545, 0x4736, 0x9f, 0x97, 0xd0, 0xad, 0x2c, 0xb6, 0x9a, 0xc

//Medium GUID {B74997A7-4E2E-4bba-A2E4-F6277700F6E1}
#define VAMP_AUDIO_DECODER 0xb74997a7, 0x4e2e, 0x4bba, 0xa2, 0xe4, 0xf6, 0x27, 0x77, 0x0, 0xf6, 0xe1

//Medium GUID {A07E09C0-9629-46ef-945E-F94BAE1D6BAC}
#define STATIC_VAMP_ANALOG_TV_AUDIO_IN_MEDIUM\
	0xa07e09c0, 0x9629, 0x46ef, 0x94, 0x5e, 0xf9, 0x4b, 0xae, 0x1d, 0x6b, 0xac
DEFINE_GUIDSTRUCT("5CBF4996-39D2-4c5f-B85F-628FAC6AAC39", VAMP_ANALOG_TV_AUDIO_IN_MEDIUM);
// Defines the VAMP_ANALOG_TV_AUDIO_IN_MEDIUM as a GUID.
#define VAMP_ANALOG_TV_AUDIO_IN_MEDIUM DEFINE_GUIDNAMED(VAMP_ANALOG_TV_AUDIO_IN_MEDIUM)

//Medium GUID {09BB3C75-7218-4299-971D-C3C7006F151B}
#define STATIC_VAMP_ANALOG_TV_AUDIO_OUT_MEDIUM\
	0x9bb3c75, 0x7218, 0x4299, 0x97, 0x1d, 0xc3, 0xc7, 0x0, 0x6f, 0x15, 0x1b
DEFINE_GUIDSTRUCT("09BB3C75-7218-4299-971D-C3C7006F151B", VAMP_ANALOG_TV_AUDIO_OUT_MEDIUM);
// Defines the VAMP_ANALOG_TV_AUDIO_OUT_MEDIUM as a GUID.
#define VAMP_ANALOG_TV_AUDIO_OUT_MEDIUM DEFINE_GUIDNAMED(VAMP_ANALOG_TV_AUDIO_OUT_MEDIUM)

//Medium GUID {81B17C60-70E5-48de-A5E8-5B81972D257D}
#define STATIC_VAMP_XBAR_IN_NOT_CONNECT_MEDIUM\
	0x81b17c60, 0x70e5, 0x48de, 0xa5, 0xe8, 0x5b, 0x81, 0x97, 0x2d, 0x25, 0x7d
DEFINE_GUIDSTRUCT("81B17C60-70E5-48de-A5E8-5B81972D257D", VAMP_XBAR_IN_NOT_CONNECT_MEDIUM);
// Defines the VAMP_XBAR_IN_NOT_CONNECT_MEDIUM as a GUID.
#define VAMP_XBAR_IN_NOT_CONNECT_MEDIUM DEFINE_GUIDNAMED(VAMP_XBAR_IN_NOT_CONNECT_MEDIUM)

//Old 46 based GUIDs
#define GUID_VSB_OUT    0xf3954424, 0x34f6, 0x11d1, 0x82, 0x1d, 0x0, 0x0, 0xf8, 0x30, 0x2, 0x12

//Pin names and categories GUIDS

//Tuner
// {61611149-B9D7-43f9-B5CE-F6FC141745B3}
static const GUID VAMP_ANLG_XBAR_IN_TUNER = 
{ 0x61611149, 0xb9d7, 0x43f9, { 0xb5, 0xce, 0xf6, 0xfc, 0x14, 0x17, 0x45, 0xb3 } };

// {9373D5A6-502E-48d6-A4E8-3A512A81CE4A}
static const GUID VAMP_ANLG_XBAR_IN_TUNER_VIDEO = 
{ 0x9373d5a6, 0x502e, 0x48d6, { 0xa4, 0xe8, 0x3a, 0x51, 0x2a, 0x81, 0xce, 0x4a } };

// {7557C9F2-B651-4948-B916-CDDC8D288CFB}
static const GUID VAMP_ANLG_XBAR_IN_TUNER_AUDIO = 
{ 0x7557c9f2, 0xb651, 0x4948, { 0xb9, 0x16, 0xcd, 0xdc, 0x8d, 0x28, 0x8c, 0xfb } };

//Composite
// {4D13159A-08D8-4de6-A688-6BE7F88011BB}
static const GUID VAMP_ANLG_XBAR_IN_COMPOSITE = 
{ 0x4d13159a, 0x8d8, 0x4de6, { 0xa6, 0x88, 0x6b, 0xe7, 0xf8, 0x80, 0x11, 0xbb } };

// {DF744A0B-83D3-4479-B8E1-A4FBE2BE51F3}
static const GUID VAMP_ANLG_XBAR_IN_COMPOSITE_VIDEO  = 
{ 0xdf744a0b, 0x83d3, 0x4479, { 0xb8, 0xe1, 0xa4, 0xfb, 0xe2, 0xbe, 0x51, 0xf3 } };

// {1303D44C-99D7-45ac-86BE-3BFA1EA1C9B2}
static const GUID VAMP_ANLG_XBAR_IN_COMPOSITE_AUDIO = 
{ 0x1303d44c, 0x99d7, 0x45ac, { 0x86, 0xbe, 0x3b, 0xfa, 0x1e, 0xa1, 0xc9, 0xb2 } };

//SVideo
// {446D43F7-D2AD-4729-A3DC-7A03EE5572D3}
static const GUID VAMP_ANLG_XBAR_IN_SVIDEO = 
{ 0x446d43f7, 0xd2ad, 0x4729, { 0xa3, 0xdc, 0x7a, 0x3, 0xee, 0x55, 0x72, 0xd3 } };

// {97D6F8BE-FAAB-4cf9-8C98-D4A9FA37958D}
static const GUID VAMP_ANLG_XBAR_IN_SVIDEO_VIDEO = 
{ 0x97d6f8be, 0xfaab, 0x4cf9, { 0x8c, 0x98, 0xd4, 0xa9, 0xfa, 0x37, 0x95, 0x8d } };

// {40872E71-7593-4ec3-A13F-609D6EDD74AB}
static const GUID VAMP_ANLG_XBAR_IN_SVIDEO_AUDIO = 
{ 0x40872e71, 0x7593, 0x4ec3, { 0xa1, 0x3f, 0x60, 0x9d, 0x6e, 0xdd, 0x74, 0xab } };

//OutPins
// {A43D6DF2-9588-4ac9-BBD9-63E9B1BF7955}
static const GUID VAMP_ANLG_XBAR_OUT = 
{ 0xa43d6df2, 0x9588, 0x4ac9, { 0xbb, 0xd9, 0x63, 0xe9, 0xb1, 0xbf, 0x79, 0x55 } };

// {B8903AA7-F5A0-40de-8E27-899770CB2341}
static const GUID VAMP_ANLG_XBAR_OUT_VIDEO = 
{ 0xb8903aa7, 0xf5a0, 0x40de, { 0x8e, 0x27, 0x89, 0x97, 0x70, 0xcb, 0x23, 0x41 } };

// {4CE75CDC-277E-4d62-BE2C-5DEC1D33DED8}
static const GUID VAMP_ANLG_XBAR_OUT_AUDIO = 
{ 0x4ce75cdc, 0x277e, 0x4d62, { 0xbe, 0x2c, 0x5d, 0xec, 0x1d, 0x33, 0xde, 0xd8 } };
