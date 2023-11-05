/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef SHADOW_FRUSTUM_GLSL_GEN_H_RD
#define SHADOW_FRUSTUM_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class ShadowFrustumShaderRD : public ShaderRD {

public:

	ShadowFrustumShaderRD() {

		static const char _vertex_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,73,110,102,111,32,123,10,9,109,97,116,52,32,109,118,112,59,10,9,118,101,99,52,32,99,111,108,111,114,59,10,125,10,105,110,102,111,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,118,101,99,51,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,52,32,118,101,114,116,101,120,32,61,32,105,110,102,111,46,109,118,112,32,42,32,118,101,99,52,40,118,101,114,116,101,120,95,97,116,116,114,105,98,44,32,49,46,48,41,59,10,9,118,101,114,116,101,120,46,120,121,122,32,47,61,32,118,101,114,116,101,120,46,119,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,118,101,114,116,101,120,46,120,121,44,32,48,46,48,44,32,49,46,48,41,59,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,0
		};
		static const char _fragment_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,73,110,102,111,32,123,10,9,109,97,116,52,32,109,118,112,59,10,9,118,101,99,52,32,99,111,108,111,114,59,10,125,10,105,110,102,111,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,105,110,102,111,46,99,111,108,111,114,59,10,125,10,0
		};
		setup(_vertex_code, _fragment_code, nullptr, "ShadowFrustumShaderRD");
	}
};

#endif
