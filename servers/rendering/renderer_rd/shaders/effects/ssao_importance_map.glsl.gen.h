/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef SSAO_IMPORTANCE_MAP_GLSL_GEN_H_RD
#define SSAO_IMPORTANCE_MAP_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class SsaoImportanceMapShaderRD : public ShaderRD {

public:

	SsaoImportanceMapShaderRD() {

		static const char _compute_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,108,97,121,111,117,116,40,108,111,99,97,108,95,115,105,122,101,95,120,32,61,32,56,44,32,108,111,99,97,108,95,115,105,122,101,95,121,32,61,32,56,44,32,108,111,99,97,108,95,115,105,122,101,95,122,32,61,32,49,41,32,105,110,59,10,10,35,105,102,100,101,102,32,71,69,78,69,82,65,84,69,95,77,65,80,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,65,114,114,97,121,32,115,111,117,114,99,101,95,116,101,120,116,117,114,101,59,10,35,101,108,115,101,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,50,68,32,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,59,10,35,101,110,100,105,102,10,108,97,121,111,117,116,40,114,56,44,32,115,101,116,32,61,32,49,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,114,101,115,116,114,105,99,116,32,119,114,105,116,101,111,110,108,121,32,105,109,97,103,101,50,68,32,100,101,115,116,95,105,109,97,103,101,59,10,10,35,105,102,100,101,102,32,80,82,79,67,69,83,83,95,77,65,80,66,10,108,97,121,111,117,116,40,115,101,116,32,61,32,50,44,32,98,105,110,100,105,110,103,32,61,32,48,44,32,115,116,100,52,51,48,41,32,98,117,102,102,101,114,32,67,111,117,110,116,101,114,32,123,10,9,117,105,110,116,32,115,117,109,59,10,125,10,99,111,117,110,116,101,114,59,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,118,101,99,50,32,104,97,108,102,95,115,99,114,101,101,110,95,112,105,120,101,108,95,115,105,122,101,59,10,9,102,108,111,97,116,32,105,110,116,101,110,115,105,116,121,59,10,9,102,108,111,97,116,32,112,111,119,101,114,59,10,125,10,112,97,114,97,109,115,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,10,9,105,118,101,99,50,32,115,115,67,32,61,32,105,118,101,99,50,40,103,108,95,71,108,111,98,97,108,73,110,118,111,99,97,116,105,111,110,73,68,46,120,121,41,59,10,10,35,105,102,100,101,102,32,71,69,78,69,82,65,84,69,95,77,65,80,10,9,10,9,117,118,101,99,50,32,98,97,115,101,95,112,111,115,105,116,105,111,110,32,61,32,115,115,67,32,42,32,50,59,10,10,9,118,101,99,50,32,98,97,115,101,95,117,118,32,61,32,40,118,101,99,50,40,98,97,115,101,95,112,111,115,105,116,105,111,110,41,32,43,32,118,101,99,50,40,48,46,53,102,44,32,48,46,53,102,41,41,32,42,32,112,97,114,97,109,115,46,104,97,108,102,95,115,99,114,101,101,110,95,112,105,120,101,108,95,115,105,122,101,59,10,10,9,102,108,111,97,116,32,109,105,110,86,32,61,32,49,46,48,59,10,9,102,108,111,97,116,32,109,97,120,86,32,61,32,48,46,48,59,10,9,102,111,114,32,40,105,110,116,32,105,32,61,32,48,59,32,105,32,60,32,52,59,32,105,43,43,41,32,123,10,9,9,118,101,99,52,32,118,97,108,115,32,61,32,116,101,120,116,117,114,101,71,97,116,104,101,114,40,115,111,117,114,99,101,95,116,101,120,116,117,114,101,44,32,118,101,99,51,40,98,97,115,101,95,117,118,44,32,105,41,41,59,10,10,9,9,10,9,9,118,97,108,115,32,61,32,112,97,114,97,109,115,46,105,110,116,101,110,115,105,116,121,32,42,32,118,97,108,115,59,10,10,9,9,118,97,108,115,32,61,32,49,32,45,32,118,97,108,115,59,10,10,9,9,118,97,108,115,32,61,32,112,111,119,40,99,108,97,109,112,40,118,97,108,115,44,32,48,46,48,44,32,49,46,48,41,44,32,118,101,99,52,40,112,97,114,97,109,115,46,112,111,119,101,114,41,41,59,10,10,9,9,109,97,120,86,32,61,32,109,97,120,40,109,97,120,86,44,32,109,97,120,40,109,97,120,40,118,97,108,115,46,120,44,32,118,97,108,115,46,121,41,44,32,109,97,120,40,118,97,108,115,46,122,44,32,118,97,108,115,46,119,41,41,41,59,10,9,9,109,105,110,86,32,61,32,109,105,110,40,109,105,110,86,44,32,109,105,110,40,109,105,110,40,118,97,108,115,46,120,44,32,118,97,108,115,46,121,41,44,32,109,105,110,40,118,97,108,115,46,122,44,32,118,97,108,115,46,119,41,41,41,59,10,9,125,10,10,9,102,108,111,97,116,32,109,105,110,95,109,97,120,95,100,105,102,102,32,61,32,109,97,120,86,32,45,32,109,105,110,86,59,10,10,9,105,109,97,103,101,83,116,111,114,101,40,100,101,115,116,95,105,109,97,103,101,44,32,115,115,67,44,32,118,101,99,52,40,112,111,119,40,99,108,97,109,112,40,109,105,110,95,109,97,120,95,100,105,102,102,32,42,32,50,46,48,44,32,48,46,48,44,32,49,46,48,41,44,32,48,46,56,41,41,41,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,80,82,79,67,69,83,83,95,77,65,80,65,10,9,118,101,99,50,32,117,118,32,61,32,40,118,101,99,50,40,115,115,67,41,32,43,32,48,46,53,102,41,32,42,32,112,97,114,97,109,115,46,104,97,108,102,95,115,99,114,101,101,110,95,112,105,120,101,108,95,115,105,122,101,32,42,32,50,46,48,59,10,10,9,102,108,111,97,116,32,99,101,110,116,101,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,44,32,48,46,48,41,46,120,59,10,10,9,118,101,99,50,32,104,97,108,102,95,112,105,120,101,108,32,61,32,112,97,114,97,109,115,46,104,97,108,102,95,115,99,114,101,101,110,95,112,105,120,101,108,95,115,105,122,101,59,10,10,9,118,101,99,52,32,118,97,108,115,59,10,9,118,97,108,115,46,120,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,45,104,97,108,102,95,112,105,120,101,108,46,120,32,42,32,51,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,46,120,59,10,9,118,97,108,115,46,121,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,43,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,32,42,32,51,41,44,32,48,46,48,41,46,120,59,10,9,118,97,108,115,46,122,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,43,104,97,108,102,95,112,105,120,101,108,46,120,32,42,32,51,44,32,43,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,46,120,59,10,9,118,97,108,115,46,119,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,45,104,97,108,102,95,112,105,120,101,108,46,120,44,32,43,104,97,108,102,95,112,105,120,101,108,46,121,32,42,32,51,41,44,32,48,46,48,41,46,120,59,10,10,9,102,108,111,97,116,32,97,118,103,32,61,32,100,111,116,40,118,97,108,115,44,32,118,101,99,52,40,48,46,50,53,44,32,48,46,50,53,44,32,48,46,50,53,44,32,48,46,50,53,41,41,59,10,10,9,105,109,97,103,101,83,116,111,114,101,40,100,101,115,116,95,105,109,97,103,101,44,32,115,115,67,44,32,118,101,99,52,40,97,118,103,41,41,59,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,80,82,79,67,69,83,83,95,77,65,80,66,10,9,118,101,99,50,32,117,118,32,61,32,40,118,101,99,50,40,115,115,67,41,32,43,32,48,46,53,102,41,32,42,32,112,97,114,97,109,115,46,104,97,108,102,95,115,99,114,101,101,110,95,112,105,120,101,108,95,115,105,122,101,32,42,32,50,46,48,59,10,10,9,102,108,111,97,116,32,99,101,110,116,101,114,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,44,32,48,46,48,41,46,120,59,10,10,9,118,101,99,50,32,104,97,108,102,95,112,105,120,101,108,32,61,32,112,97,114,97,109,115,46,104,97,108,102,95,115,99,114,101,101,110,95,112,105,120,101,108,95,115,105,122,101,59,10,10,9,118,101,99,52,32,118,97,108,115,59,10,9,118,97,108,115,46,120,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,45,104,97,108,102,95,112,105,120,101,108,46,120,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,32,42,32,51,41,44,32,48,46,48,41,46,120,59,10,9,118,97,108,115,46,121,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,43,104,97,108,102,95,112,105,120,101,108,46,120,32,42,32,51,44,32,45,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,46,120,59,10,9,118,97,108,115,46,122,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,43,104,97,108,102,95,112,105,120,101,108,46,120,44,32,43,104,97,108,102,95,112,105,120,101,108,46,121,32,42,32,51,41,44,32,48,46,48,41,46,120,59,10,9,118,97,108,115,46,119,32,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,105,109,112,111,114,116,97,110,99,101,44,32,117,118,32,43,32,118,101,99,50,40,45,104,97,108,102,95,112,105,120,101,108,46,120,32,42,32,51,44,32,43,104,97,108,102,95,112,105,120,101,108,46,121,41,44,32,48,46,48,41,46,120,59,10,10,9,102,108,111,97,116,32,97,118,103,32,61,32,100,111,116,40,118,97,108,115,44,32,118,101,99,52,40,48,46,50,53,44,32,48,46,50,53,44,32,48,46,50,53,44,32,48,46,50,53,41,41,59,10,10,9,105,109,97,103,101,83,116,111,114,101,40,100,101,115,116,95,105,109,97,103,101,44,32,115,115,67,44,32,118,101,99,52,40,97,118,103,41,41,59,10,10,9,10,9,117,105,110,116,32,115,117,109,32,61,32,117,105,110,116,40,99,108,97,109,112,40,97,118,103,44,32,48,46,48,44,32,49,46,48,41,32,42,32,50,53,53,46,48,32,43,32,48,46,53,41,59,10,10,9,10,9,105,102,32,40,40,40,115,115,67,46,120,32,37,32,51,41,32,43,32,40,115,115,67,46,121,32,37,32,51,41,41,32,61,61,32,48,41,32,123,10,9,9,97,116,111,109,105,99,65,100,100,40,99,111,117,110,116,101,114,46,115,117,109,44,32,115,117,109,41,59,10,9,125,10,35,101,110,100,105,102,10,125,10,0
		};
		setup(nullptr, nullptr, _compute_code, "SsaoImportanceMapShaderRD");
	}
};

#endif
