/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef CLUSTER_RENDER_GLSL_GEN_H_RD
#define CLUSTER_RENDER_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class ClusterRenderShaderRD : public ShaderRD {

public:

	ClusterRenderShaderRD() {

		static const char _vertex_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,118,101,99,51,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,102,108,111,97,116,32,100,101,112,116,104,95,105,110,116,101,114,112,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,41,32,111,117,116,32,102,108,97,116,32,117,105,110,116,32,101,108,101,109,101,110,116,95,105,110,100,101,120,59,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,117,105,110,116,32,98,97,115,101,95,105,110,100,101,120,59,10,9,117,105,110,116,32,112,97,100,48,59,10,9,117,105,110,116,32,112,97,100,49,59,10,9,117,105,110,116,32,112,97,100,50,59,10,125,10,112,97,114,97,109,115,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,49,44,32,115,116,100,49,52,48,41,32,117,110,105,102,111,114,109,32,83,116,97,116,101,32,123,10,9,109,97,116,52,32,112,114,111,106,101,99,116,105,111,110,59,10,10,9,102,108,111,97,116,32,105,110,118,95,122,95,102,97,114,59,10,9,117,105,110,116,32,115,99,114,101,101,110,95,116,111,95,99,108,117,115,116,101,114,115,95,115,104,105,102,116,59,32,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,115,99,114,101,101,110,95,119,105,100,116,104,59,32,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,100,97,116,97,95,115,105,122,101,59,32,10,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,100,101,112,116,104,95,111,102,102,115,101,116,59,10,9,117,105,110,116,32,112,97,100,48,59,10,9,117,105,110,116,32,112,97,100,49,59,10,9,117,105,110,116,32,112,97,100,50,59,10,125,10,115,116,97,116,101,59,10,10,115,116,114,117,99,116,32,82,101,110,100,101,114,69,108,101,109,101,110,116,32,123,10,9,117,105,110,116,32,116,121,112,101,59,32,10,9,98,111,111,108,32,116,111,117,99,104,101,115,95,110,101,97,114,59,10,9,98,111,111,108,32,116,111,117,99,104,101,115,95,102,97,114,59,10,9,117,105,110,116,32,111,114,105,103,105,110,97,108,95,105,110,100,101,120,59,10,9,109,97,116,51,120,52,32,116,114,97,110,115,102,111,114,109,95,105,110,118,59,10,9,118,101,99,51,32,115,99,97,108,101,59,10,9,117,105,110,116,32,112,97,100,59,10,125,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,50,44,32,115,116,100,52,51,48,41,32,98,117,102,102,101,114,32,114,101,115,116,114,105,99,116,32,114,101,97,100,111,110,108,121,32,82,101,110,100,101,114,69,108,101,109,101,110,116,115,32,123,10,9,82,101,110,100,101,114,69,108,101,109,101,110,116,32,100,97,116,97,91,93,59,10,125,10,114,101,110,100,101,114,95,101,108,101,109,101,110,116,115,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,101,108,101,109,101,110,116,95,105,110,100,101,120,32,61,32,112,97,114,97,109,115,46,98,97,115,101,95,105,110,100,101,120,32,43,32,103,108,95,73,110,115,116,97,110,99,101,73,110,100,101,120,59,10,10,9,118,101,99,51,32,118,101,114,116,101,120,32,61,32,118,101,114,116,101,120,95,97,116,116,114,105,98,59,10,9,118,101,114,116,101,120,32,42,61,32,114,101,110,100,101,114,95,101,108,101,109,101,110,116,115,46,100,97,116,97,91,101,108,101,109,101,110,116,95,105,110,100,101,120,93,46,115,99,97,108,101,59,10,10,9,118,101,114,116,101,120,32,61,32,118,101,99,52,40,118,101,114,116,101,120,44,32,49,46,48,41,32,42,32,114,101,110,100,101,114,95,101,108,101,109,101,110,116,115,46,100,97,116,97,91,101,108,101,109,101,110,116,95,105,110,100,101,120,93,46,116,114,97,110,115,102,111,114,109,95,105,110,118,59,10,9,100,101,112,116,104,95,105,110,116,101,114,112,32,61,32,45,118,101,114,116,101,120,46,122,59,10,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,115,116,97,116,101,46,112,114,111,106,101,99,116,105,111,110,32,42,32,118,101,99,52,40,118,101,114,116,101,120,44,32,49,46,48,41,59,10,125,10,10,0
		};
		static const char _fragment_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,35,105,102,110,100,101,102,32,77,79,76,84,69,78,86,75,95,85,83,69,68,32,10,35,105,102,32,100,101,102,105,110,101,100,40,104,97,115,95,71,76,95,75,72,82,95,115,104,97,100,101,114,95,115,117,98,103,114,111,117,112,95,98,97,108,108,111,116,41,32,38,38,32,100,101,102,105,110,101,100,40,104,97,115,95,71,76,95,75,72,82,95,115,104,97,100,101,114,95,115,117,98,103,114,111,117,112,95,97,114,105,116,104,109,101,116,105,99,41,32,38,38,32,100,101,102,105,110,101,100,40,104,97,115,95,71,76,95,75,72,82,95,115,104,97,100,101,114,95,115,117,98,103,114,111,117,112,95,118,111,116,101,41,10,10,35,101,120,116,101,110,115,105,111,110,32,71,76,95,75,72,82,95,115,104,97,100,101,114,95,115,117,98,103,114,111,117,112,95,98,97,108,108,111,116,32,58,32,101,110,97,98,108,101,10,35,101,120,116,101,110,115,105,111,110,32,71,76,95,75,72,82,95,115,104,97,100,101,114,95,115,117,98,103,114,111,117,112,95,97,114,105,116,104,109,101,116,105,99,32,58,32,101,110,97,98,108,101,10,35,101,120,116,101,110,115,105,111,110,32,71,76,95,75,72,82,95,115,104,97,100,101,114,95,115,117,98,103,114,111,117,112,95,118,111,116,101,32,58,32,101,110,97,98,108,101,10,10,35,100,101,102,105,110,101,32,85,83,69,95,83,85,66,71,82,79,85,80,83,10,35,101,110,100,105,102,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,102,108,111,97,116,32,100,101,112,116,104,95,105,110,116,101,114,112,59,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,49,41,32,105,110,32,102,108,97,116,32,117,105,110,116,32,101,108,101,109,101,110,116,95,105,110,100,101,120,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,49,44,32,115,116,100,49,52,48,41,32,117,110,105,102,111,114,109,32,83,116,97,116,101,32,123,10,9,109,97,116,52,32,112,114,111,106,101,99,116,105,111,110,59,10,9,102,108,111,97,116,32,105,110,118,95,122,95,102,97,114,59,10,9,117,105,110,116,32,115,99,114,101,101,110,95,116,111,95,99,108,117,115,116,101,114,115,95,115,104,105,102,116,59,32,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,115,99,114,101,101,110,95,119,105,100,116,104,59,32,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,100,97,116,97,95,115,105,122,101,59,32,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,100,101,112,116,104,95,111,102,102,115,101,116,59,10,9,117,105,110,116,32,112,97,100,48,59,10,9,117,105,110,116,32,112,97,100,49,59,10,9,117,105,110,116,32,112,97,100,50,59,10,125,10,115,116,97,116,101,59,10,10,10,10,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,51,44,32,115,116,100,52,51,48,41,32,98,117,102,102,101,114,32,114,101,115,116,114,105,99,116,32,67,108,117,115,116,101,114,82,101,110,100,101,114,32,123,10,9,117,105,110,116,32,100,97,116,97,91,93,59,10,125,10,99,108,117,115,116,101,114,95,114,101,110,100,101,114,59,10,10,35,105,102,100,101,102,32,85,83,69,95,65,84,84,65,67,72,77,69,78,84,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,35,101,110,100,105,102,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,10,9,117,118,101,99,50,32,99,108,117,115,116,101,114,32,61,32,117,118,101,99,50,40,103,108,95,70,114,97,103,67,111,111,114,100,46,120,121,41,32,62,62,32,115,116,97,116,101,46,115,99,114,101,101,110,95,116,111,95,99,108,117,115,116,101,114,115,95,115,104,105,102,116,59,10,10,9,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,111,102,102,115,101,116,32,61,32,99,108,117,115,116,101,114,46,120,32,43,32,115,116,97,116,101,46,99,108,117,115,116,101,114,95,115,99,114,101,101,110,95,119,105,100,116,104,32,42,32,99,108,117,115,116,101,114,46,121,59,10,9,10,9,99,108,117,115,116,101,114,95,111,102,102,115,101,116,32,42,61,32,115,116,97,116,101,46,99,108,117,115,116,101,114,95,100,97,116,97,95,115,105,122,101,59,10,10,9,10,9,117,105,110,116,32,117,115,97,103,101,95,119,114,105,116,101,95,111,102,102,115,101,116,32,61,32,99,108,117,115,116,101,114,95,111,102,102,115,101,116,32,43,32,40,101,108,101,109,101,110,116,95,105,110,100,101,120,32,62,62,32,53,41,59,10,9,117,105,110,116,32,117,115,97,103,101,95,119,114,105,116,101,95,98,105,116,32,61,32,49,32,60,60,32,40,101,108,101,109,101,110,116,95,105,110,100,101,120,32,38,32,48,120,49,70,41,59,10,10,9,117,105,110,116,32,97,117,120,32,61,32,48,59,10,10,35,105,102,100,101,102,32,85,83,69,95,83,85,66,71,82,79,85,80,83,10,10,9,117,105,110,116,32,99,108,117,115,116,101,114,95,116,104,114,101,97,100,95,103,114,111,117,112,95,105,110,100,101,120,59,10,10,9,105,102,32,40,33,103,108,95,72,101,108,112,101,114,73,110,118,111,99,97,116,105,111,110,41,32,123,10,9,9,10,10,9,9,117,118,101,99,52,32,109,97,115,107,59,10,10,9,9,119,104,105,108,101,32,40,116,114,117,101,41,32,123,10,9,9,9,10,9,9,9,10,9,9,9,117,105,110,116,32,102,105,114,115,116,32,61,32,115,117,98,103,114,111,117,112,66,114,111,97,100,99,97,115,116,70,105,114,115,116,40,99,108,117,115,116,101,114,95,111,102,102,115,101,116,41,59,10,9,9,9,10,9,9,9,109,97,115,107,32,61,32,115,117,98,103,114,111,117,112,66,97,108,108,111,116,40,102,105,114,115,116,32,61,61,32,99,108,117,115,116,101,114,95,111,102,102,115,101,116,41,59,10,9,9,9,105,102,32,40,102,105,114,115,116,32,61,61,32,99,108,117,115,116,101,114,95,111,102,102,115,101,116,41,32,123,10,9,9,9,9,10,9,9,9,9,10,9,9,9,9,98,114,101,97,107,59,10,9,9,9,125,10,9,9,125,10,10,9,9,99,108,117,115,116,101,114,95,116,104,114,101,97,100,95,103,114,111,117,112,95,105,110,100,101,120,32,61,32,115,117,98,103,114,111,117,112,66,97,108,108,111,116,69,120,99,108,117,115,105,118,101,66,105,116,67,111,117,110,116,40,109,97,115,107,41,59,10,10,9,9,105,102,32,40,99,108,117,115,116,101,114,95,116,104,114,101,97,100,95,103,114,111,117,112,95,105,110,100,101,120,32,61,61,32,48,41,32,123,10,9,9,9,97,117,120,32,61,32,97,116,111,109,105,99,79,114,40,99,108,117,115,116,101,114,95,114,101,110,100,101,114,46,100,97,116,97,91,117,115,97,103,101,95,119,114,105,116,101,95,111,102,102,115,101,116,93,44,32,117,115,97,103,101,95,119,114,105,116,101,95,98,105,116,41,59,10,9,9,125,10,9,125,10,35,101,108,115,101,10,10,35,105,102,110,100,101,102,32,77,79,76,84,69,78,86,75,95,85,83,69,68,10,9,105,102,32,40,33,103,108,95,72,101,108,112,101,114,73,110,118,111,99,97,116,105,111,110,41,10,35,101,110,100,105,102,10,9,123,10,9,9,97,117,120,32,61,32,97,116,111,109,105,99,79,114,40,99,108,117,115,116,101,114,95,114,101,110,100,101,114,46,100,97,116,97,91,117,115,97,103,101,95,119,114,105,116,101,95,111,102,102,115,101,116,93,44,32,117,115,97,103,101,95,119,114,105,116,101,95,98,105,116,41,59,10,9,125,10,35,101,110,100,105,102,10,9,10,9,102,108,111,97,116,32,117,110,105,116,95,100,101,112,116,104,32,61,32,100,101,112,116,104,95,105,110,116,101,114,112,32,42,32,115,116,97,116,101,46,105,110,118,95,122,95,102,97,114,59,10,10,9,117,105,110,116,32,122,95,98,105,116,32,61,32,99,108,97,109,112,40,117,105,110,116,40,102,108,111,111,114,40,117,110,105,116,95,100,101,112,116,104,32,42,32,51,50,46,48,41,41,44,32,48,44,32,51,49,41,59,10,10,9,117,105,110,116,32,122,95,119,114,105,116,101,95,111,102,102,115,101,116,32,61,32,99,108,117,115,116,101,114,95,111,102,102,115,101,116,32,43,32,115,116,97,116,101,46,99,108,117,115,116,101,114,95,100,101,112,116,104,95,111,102,102,115,101,116,32,43,32,101,108,101,109,101,110,116,95,105,110,100,101,120,59,10,9,117,105,110,116,32,122,95,119,114,105,116,101,95,98,105,116,32,61,32,49,32,60,60,32,122,95,98,105,116,59,10,10,35,105,102,100,101,102,32,85,83,69,95,83,85,66,71,82,79,85,80,83,10,9,105,102,32,40,33,103,108,95,72,101,108,112,101,114,73,110,118,111,99,97,116,105,111,110,41,32,123,10,9,9,122,95,119,114,105,116,101,95,98,105,116,32,61,32,115,117,98,103,114,111,117,112,79,114,40,122,95,119,114,105,116,101,95,98,105,116,41,59,32,10,9,9,105,102,32,40,99,108,117,115,116,101,114,95,116,104,114,101,97,100,95,103,114,111,117,112,95,105,110,100,101,120,32,61,61,32,48,41,32,123,10,9,9,9,97,117,120,32,61,32,97,116,111,109,105,99,79,114,40,99,108,117,115,116,101,114,95,114,101,110,100,101,114,46,100,97,116,97,91,122,95,119,114,105,116,101,95,111,102,102,115,101,116,93,44,32,122,95,119,114,105,116,101,95,98,105,116,41,59,10,9,9,125,10,9,125,10,35,101,108,115,101,10,10,35,105,102,110,100,101,102,32,77,79,76,84,69,78,86,75,95,85,83,69,68,10,9,105,102,32,40,33,103,108,95,72,101,108,112,101,114,73,110,118,111,99,97,116,105,111,110,41,10,35,101,110,100,105,102,10,9,123,10,9,9,97,117,120,32,61,32,97,116,111,109,105,99,79,114,40,99,108,117,115,116,101,114,95,114,101,110,100,101,114,46,100,97,116,97,91,122,95,119,114,105,116,101,95,111,102,102,115,101,116,93,44,32,122,95,119,114,105,116,101,95,98,105,116,41,59,10,9,125,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,85,83,69,95,65,84,84,65,67,72,77,69,78,84,10,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,102,108,111,97,116,40,97,117,120,41,41,59,10,35,101,110,100,105,102,10,125,10,0
		};
		setup(_vertex_code, _fragment_code, nullptr, "ClusterRenderShaderRD");
	}
};

#endif
