/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef CUBEMAP_ROUGHNESS_RASTER_GLSL_GEN_H_RD
#define CUBEMAP_ROUGHNESS_RASTER_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class CubemapRoughnessRasterShaderRD : public ShaderRD {

public:

	CubemapRoughnessRasterShaderRD() {

		static const char _vertex_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,35,100,101,102,105,110,101,32,77,95,80,73,32,51,46,49,52,49,53,57,50,54,53,51,53,57,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,117,105,110,116,32,102,97,99,101,95,105,100,59,10,9,117,105,110,116,32,115,97,109,112,108,101,95,99,111,117,110,116,59,10,9,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,59,10,9,98,111,111,108,32,117,115,101,95,100,105,114,101,99,116,95,119,114,105,116,101,59,10,9,102,108,111,97,116,32,102,97,99,101,95,115,105,122,101,59,10,125,10,112,97,114,97,109,115,59,10,10,118,101,99,51,32,116,101,120,101,108,67,111,111,114,100,84,111,86,101,99,40,118,101,99,50,32,117,118,44,32,117,105,110,116,32,102,97,99,101,73,68,41,32,123,10,9,109,97,116,51,32,102,97,99,101,85,118,86,101,99,116,111,114,115,91,54,93,59,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,48,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,50,93,32,61,32,118,101,99,51,40,45,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,48,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,50,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,49,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,48,93,32,61,32,118,101,99,51,40,45,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,10,10,9,10,9,118,101,99,51,32,114,101,115,117,108,116,32,61,32,40,102,97,99,101,85,118,86,101,99,116,111,114,115,91,102,97,99,101,73,68,93,91,48,93,32,42,32,117,118,46,120,41,32,43,32,40,102,97,99,101,85,118,86,101,99,116,111,114,115,91,102,97,99,101,73,68,93,91,49,93,32,42,32,117,118,46,121,41,32,43,32,102,97,99,101,85,118,86,101,99,116,111,114,115,91,102,97,99,101,73,68,93,91,50,93,59,10,9,114,101,116,117,114,110,32,110,111,114,109,97,108,105,122,101,40,114,101,115,117,108,116,41,59,10,125,10,10,118,101,99,51,32,73,109,112,111,114,116,97,110,99,101,83,97,109,112,108,101,71,71,88,40,118,101,99,50,32,120,105,44,32,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,52,41,32,123,10,9,10,9,102,108,111,97,116,32,80,104,105,32,61,32,50,46,48,32,42,32,77,95,80,73,32,42,32,120,105,46,120,59,10,9,102,108,111,97,116,32,67,111,115,84,104,101,116,97,32,61,32,115,113,114,116,40,40,49,46,48,32,45,32,120,105,46,121,41,32,47,32,40,49,46,48,32,43,32,40,114,111,117,103,104,110,101,115,115,52,32,45,32,49,46,48,41,32,42,32,120,105,46,121,41,41,59,10,9,102,108,111,97,116,32,83,105,110,84,104,101,116,97,32,61,32,115,113,114,116,40,49,46,48,32,45,32,67,111,115,84,104,101,116,97,32,42,32,67,111,115,84,104,101,116,97,41,59,10,10,9,10,9,118,101,99,51,32,72,59,10,9,72,46,120,32,61,32,83,105,110,84,104,101,116,97,32,42,32,99,111,115,40,80,104,105,41,59,10,9,72,46,121,32,61,32,83,105,110,84,104,101,116,97,32,42,32,115,105,110,40,80,104,105,41,59,10,9,72,46,122,32,61,32,67,111,115,84,104,101,116,97,59,10,10,9,114,101,116,117,114,110,32,72,59,10,125,10,10,102,108,111,97,116,32,68,105,115,116,114,105,98,117,116,105,111,110,71,71,88,40,102,108,111,97,116,32,78,100,111,116,72,44,32,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,52,41,32,123,10,9,102,108,111,97,116,32,78,100,111,116,72,50,32,61,32,78,100,111,116,72,32,42,32,78,100,111,116,72,59,10,9,102,108,111,97,116,32,100,101,110,111,109,32,61,32,40,78,100,111,116,72,50,32,42,32,40,114,111,117,103,104,110,101,115,115,52,32,45,32,49,46,48,41,32,43,32,49,46,48,41,59,10,9,100,101,110,111,109,32,61,32,77,95,80,73,32,42,32,100,101,110,111,109,32,42,32,100,101,110,111,109,59,10,10,9,114,101,116,117,114,110,32,114,111,117,103,104,110,101,115,115,52,32,47,32,100,101,110,111,109,59,10,125,10,10,102,108,111,97,116,32,114,97,100,105,99,97,108,73,110,118,101,114,115,101,95,86,100,67,40,117,105,110,116,32,98,105,116,115,41,32,123,10,9,98,105,116,115,32,61,32,40,98,105,116,115,32,60,60,32,49,54,117,41,32,124,32,40,98,105,116,115,32,62,62,32,49,54,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,53,53,53,53,53,53,53,53,117,41,32,60,60,32,49,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,65,65,65,65,65,65,65,65,117,41,32,62,62,32,49,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,51,51,51,51,51,51,51,51,117,41,32,60,60,32,50,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,67,67,67,67,67,67,67,67,117,41,32,62,62,32,50,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,48,70,48,70,48,70,48,70,117,41,32,60,60,32,52,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,70,48,70,48,70,48,70,48,117,41,32,62,62,32,52,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,48,48,70,70,48,48,70,70,117,41,32,60,60,32,56,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,70,70,48,48,70,70,48,48,117,41,32,62,62,32,56,117,41,59,10,9,114,101,116,117,114,110,32,102,108,111,97,116,40,98,105,116,115,41,32,42,32,50,46,51,50,56,51,48,54,52,51,54,53,51,56,54,57,54,51,101,45,49,48,59,32,10,125,10,10,118,101,99,50,32,72,97,109,109,101,114,115,108,101,121,40,117,105,110,116,32,105,44,32,117,105,110,116,32,78,41,32,123,10,9,114,101,116,117,114,110,32,118,101,99,50,40,102,108,111,97,116,40,105,41,32,47,32,102,108,111,97,116,40,78,41,44,32,114,97,100,105,99,97,108,73,110,118,101,114,115,101,95,86,100,67,40,105,41,41,59,10,125,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,50,32,98,97,115,101,95,97,114,114,91,51,93,32,61,32,118,101,99,50,91,93,40,118,101,99,50,40,45,49,46,48,44,32,45,49,46,48,41,44,32,118,101,99,50,40,45,49,46,48,44,32,51,46,48,41,44,32,118,101,99,50,40,51,46,48,44,32,45,49,46,48,41,41,59,10,9,103,108,95,80,111,115,105,116,105,111,110,32,61,32,118,101,99,52,40,98,97,115,101,95,97,114,114,91,103,108,95,86,101,114,116,101,120,73,110,100,101,120,93,44,32,48,46,48,44,32,49,46,48,41,59,10,9,117,118,95,105,110,116,101,114,112,32,61,32,99,108,97,109,112,40,103,108,95,80,111,115,105,116,105,111,110,46,120,121,44,32,118,101,99,50,40,48,46,48,44,32,48,46,48,41,44,32,118,101,99,50,40,49,46,48,44,32,49,46,48,41,41,32,42,32,50,46,48,59,32,10,125,10,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,102,102,32,42,47,10,0
		};
		static const char _fragment_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,35,100,101,102,105,110,101,32,77,95,80,73,32,51,46,49,52,49,53,57,50,54,53,51,53,57,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,117,105,110,116,32,102,97,99,101,95,105,100,59,10,9,117,105,110,116,32,115,97,109,112,108,101,95,99,111,117,110,116,59,10,9,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,59,10,9,98,111,111,108,32,117,115,101,95,100,105,114,101,99,116,95,119,114,105,116,101,59,10,9,102,108,111,97,116,32,102,97,99,101,95,115,105,122,101,59,10,125,10,112,97,114,97,109,115,59,10,10,118,101,99,51,32,116,101,120,101,108,67,111,111,114,100,84,111,86,101,99,40,118,101,99,50,32,117,118,44,32,117,105,110,116,32,102,97,99,101,73,68,41,32,123,10,9,109,97,116,51,32,102,97,99,101,85,118,86,101,99,116,111,114,115,91,54,93,59,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,48,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,49,93,91,50,93,32,61,32,118,101,99,51,40,45,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,48,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,48,93,91,50,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,51,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,50,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,49,46,48,44,32,48,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,48,93,32,61,32,118,101,99,51,40,45,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,53,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,45,49,46,48,41,59,32,10,10,9,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,48,93,32,61,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,49,93,32,61,32,118,101,99,51,40,48,46,48,44,32,45,49,46,48,44,32,48,46,48,41,59,32,10,9,102,97,99,101,85,118,86,101,99,116,111,114,115,91,52,93,91,50,93,32,61,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,59,32,10,10,9,10,9,118,101,99,51,32,114,101,115,117,108,116,32,61,32,40,102,97,99,101,85,118,86,101,99,116,111,114,115,91,102,97,99,101,73,68,93,91,48,93,32,42,32,117,118,46,120,41,32,43,32,40,102,97,99,101,85,118,86,101,99,116,111,114,115,91,102,97,99,101,73,68,93,91,49,93,32,42,32,117,118,46,121,41,32,43,32,102,97,99,101,85,118,86,101,99,116,111,114,115,91,102,97,99,101,73,68,93,91,50,93,59,10,9,114,101,116,117,114,110,32,110,111,114,109,97,108,105,122,101,40,114,101,115,117,108,116,41,59,10,125,10,10,118,101,99,51,32,73,109,112,111,114,116,97,110,99,101,83,97,109,112,108,101,71,71,88,40,118,101,99,50,32,120,105,44,32,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,52,41,32,123,10,9,10,9,102,108,111,97,116,32,80,104,105,32,61,32,50,46,48,32,42,32,77,95,80,73,32,42,32,120,105,46,120,59,10,9,102,108,111,97,116,32,67,111,115,84,104,101,116,97,32,61,32,115,113,114,116,40,40,49,46,48,32,45,32,120,105,46,121,41,32,47,32,40,49,46,48,32,43,32,40,114,111,117,103,104,110,101,115,115,52,32,45,32,49,46,48,41,32,42,32,120,105,46,121,41,41,59,10,9,102,108,111,97,116,32,83,105,110,84,104,101,116,97,32,61,32,115,113,114,116,40,49,46,48,32,45,32,67,111,115,84,104,101,116,97,32,42,32,67,111,115,84,104,101,116,97,41,59,10,10,9,10,9,118,101,99,51,32,72,59,10,9,72,46,120,32,61,32,83,105,110,84,104,101,116,97,32,42,32,99,111,115,40,80,104,105,41,59,10,9,72,46,121,32,61,32,83,105,110,84,104,101,116,97,32,42,32,115,105,110,40,80,104,105,41,59,10,9,72,46,122,32,61,32,67,111,115,84,104,101,116,97,59,10,10,9,114,101,116,117,114,110,32,72,59,10,125,10,10,102,108,111,97,116,32,68,105,115,116,114,105,98,117,116,105,111,110,71,71,88,40,102,108,111,97,116,32,78,100,111,116,72,44,32,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,52,41,32,123,10,9,102,108,111,97,116,32,78,100,111,116,72,50,32,61,32,78,100,111,116,72,32,42,32,78,100,111,116,72,59,10,9,102,108,111,97,116,32,100,101,110,111,109,32,61,32,40,78,100,111,116,72,50,32,42,32,40,114,111,117,103,104,110,101,115,115,52,32,45,32,49,46,48,41,32,43,32,49,46,48,41,59,10,9,100,101,110,111,109,32,61,32,77,95,80,73,32,42,32,100,101,110,111,109,32,42,32,100,101,110,111,109,59,10,10,9,114,101,116,117,114,110,32,114,111,117,103,104,110,101,115,115,52,32,47,32,100,101,110,111,109,59,10,125,10,10,102,108,111,97,116,32,114,97,100,105,99,97,108,73,110,118,101,114,115,101,95,86,100,67,40,117,105,110,116,32,98,105,116,115,41,32,123,10,9,98,105,116,115,32,61,32,40,98,105,116,115,32,60,60,32,49,54,117,41,32,124,32,40,98,105,116,115,32,62,62,32,49,54,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,53,53,53,53,53,53,53,53,117,41,32,60,60,32,49,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,65,65,65,65,65,65,65,65,117,41,32,62,62,32,49,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,51,51,51,51,51,51,51,51,117,41,32,60,60,32,50,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,67,67,67,67,67,67,67,67,117,41,32,62,62,32,50,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,48,70,48,70,48,70,48,70,117,41,32,60,60,32,52,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,70,48,70,48,70,48,70,48,117,41,32,62,62,32,52,117,41,59,10,9,98,105,116,115,32,61,32,40,40,98,105,116,115,32,38,32,48,120,48,48,70,70,48,48,70,70,117,41,32,60,60,32,56,117,41,32,124,32,40,40,98,105,116,115,32,38,32,48,120,70,70,48,48,70,70,48,48,117,41,32,62,62,32,56,117,41,59,10,9,114,101,116,117,114,110,32,102,108,111,97,116,40,98,105,116,115,41,32,42,32,50,46,51,50,56,51,48,54,52,51,54,53,51,56,54,57,54,51,101,45,49,48,59,32,10,125,10,10,118,101,99,50,32,72,97,109,109,101,114,115,108,101,121,40,117,105,110,116,32,105,44,32,117,105,110,116,32,78,41,32,123,10,9,114,101,116,117,114,110,32,118,101,99,50,40,102,108,111,97,116,40,105,41,32,47,32,102,108,111,97,116,40,78,41,44,32,114,97,100,105,99,97,108,73,110,118,101,114,115,101,95,86,100,67,40,105,41,41,59,10,125,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,105,110,32,118,101,99,50,32,117,118,95,105,110,116,101,114,112,59,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,48,44,32,98,105,110,100,105,110,103,32,61,32,48,41,32,117,110,105,102,111,114,109,32,115,97,109,112,108,101,114,67,117,98,101,32,115,111,117,114,99,101,95,99,117,98,101,59,10,10,108,97,121,111,117,116,40,108,111,99,97,116,105,111,110,32,61,32,48,41,32,111,117,116,32,118,101,99,52,32,102,114,97,103,95,99,111,108,111,114,59,10,47,42,32,99,108,97,110,103,45,102,111,114,109,97,116,32,111,110,32,42,47,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,9,118,101,99,51,32,78,32,61,32,116,101,120,101,108,67,111,111,114,100,84,111,86,101,99,40,117,118,95,105,110,116,101,114,112,32,42,32,50,46,48,32,45,32,49,46,48,44,32,112,97,114,97,109,115,46,102,97,99,101,95,105,100,41,59,10,10,9,10,10,9,105,102,32,40,112,97,114,97,109,115,46,117,115,101,95,100,105,114,101,99,116,95,119,114,105,116,101,41,32,123,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,116,101,120,116,117,114,101,40,115,111,117,114,99,101,95,99,117,98,101,44,32,78,41,46,114,103,98,44,32,49,46,48,41,59,10,9,125,32,101,108,115,101,32,123,10,9,9,118,101,99,52,32,115,117,109,32,61,32,118,101,99,52,40,48,46,48,44,32,48,46,48,44,32,48,46,48,44,32,48,46,48,41,59,10,10,9,9,102,108,111,97,116,32,115,111,108,105,100,95,97,110,103,108,101,95,116,101,120,101,108,32,61,32,52,46,48,32,42,32,77,95,80,73,32,47,32,40,54,46,48,32,42,32,112,97,114,97,109,115,46,102,97,99,101,95,115,105,122,101,32,42,32,112,97,114,97,109,115,46,102,97,99,101,95,115,105,122,101,41,59,10,9,9,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,50,32,61,32,112,97,114,97,109,115,46,114,111,117,103,104,110,101,115,115,32,42,32,112,97,114,97,109,115,46,114,111,117,103,104,110,101,115,115,59,10,9,9,102,108,111,97,116,32,114,111,117,103,104,110,101,115,115,52,32,61,32,114,111,117,103,104,110,101,115,115,50,32,42,32,114,111,117,103,104,110,101,115,115,50,59,10,9,9,118,101,99,51,32,85,112,86,101,99,116,111,114,32,61,32,97,98,115,40,78,46,122,41,32,60,32,48,46,57,57,57,32,63,32,118,101,99,51,40,48,46,48,44,32,48,46,48,44,32,49,46,48,41,32,58,32,118,101,99,51,40,49,46,48,44,32,48,46,48,44,32,48,46,48,41,59,10,9,9,109,97,116,51,32,84,59,10,9,9,84,91,48,93,32,61,32,110,111,114,109,97,108,105,122,101,40,99,114,111,115,115,40,85,112,86,101,99,116,111,114,44,32,78,41,41,59,10,9,9,84,91,49,93,32,61,32,99,114,111,115,115,40,78,44,32,84,91,48,93,41,59,10,9,9,84,91,50,93,32,61,32,78,59,10,10,9,9,102,111,114,32,40,117,105,110,116,32,115,97,109,112,108,101,78,117,109,32,61,32,48,117,59,32,115,97,109,112,108,101,78,117,109,32,60,32,112,97,114,97,109,115,46,115,97,109,112,108,101,95,99,111,117,110,116,59,32,115,97,109,112,108,101,78,117,109,43,43,41,32,123,10,9,9,9,118,101,99,50,32,120,105,32,61,32,72,97,109,109,101,114,115,108,101,121,40,115,97,109,112,108,101,78,117,109,44,32,112,97,114,97,109,115,46,115,97,109,112,108,101,95,99,111,117,110,116,41,59,10,10,9,9,9,118,101,99,51,32,72,32,61,32,84,32,42,32,73,109,112,111,114,116,97,110,99,101,83,97,109,112,108,101,71,71,88,40,120,105,44,32,114,111,117,103,104,110,101,115,115,52,41,59,10,9,9,9,102,108,111,97,116,32,78,100,111,116,72,32,61,32,100,111,116,40,78,44,32,72,41,59,10,9,9,9,118,101,99,51,32,76,32,61,32,40,50,46,48,32,42,32,78,100,111,116,72,32,42,32,72,32,45,32,78,41,59,10,10,9,9,9,102,108,111,97,116,32,110,100,111,116,108,32,61,32,99,108,97,109,112,40,100,111,116,40,78,44,32,76,41,44,32,48,46,48,44,32,49,46,48,41,59,10,10,9,9,9,105,102,32,40,110,100,111,116,108,32,62,32,48,46,48,41,32,123,10,9,9,9,9,102,108,111,97,116,32,68,32,61,32,68,105,115,116,114,105,98,117,116,105,111,110,71,71,88,40,78,100,111,116,72,44,32,114,111,117,103,104,110,101,115,115,52,41,59,10,9,9,9,9,102,108,111,97,116,32,112,100,102,32,61,32,68,32,42,32,78,100,111,116,72,32,47,32,40,52,46,48,32,42,32,78,100,111,116,72,41,32,43,32,48,46,48,48,48,49,59,10,10,9,9,9,9,102,108,111,97,116,32,115,111,108,105,100,95,97,110,103,108,101,95,115,97,109,112,108,101,32,61,32,49,46,48,32,47,32,40,102,108,111,97,116,40,112,97,114,97,109,115,46,115,97,109,112,108,101,95,99,111,117,110,116,41,32,42,32,112,100,102,32,43,32,48,46,48,48,48,49,41,59,10,10,9,9,9,9,102,108,111,97,116,32,109,105,112,76,101,118,101,108,32,61,32,112,97,114,97,109,115,46,114,111,117,103,104,110,101,115,115,32,61,61,32,48,46,48,32,63,32,48,46,48,32,58,32,48,46,53,32,42,32,108,111,103,50,40,115,111,108,105,100,95,97,110,103,108,101,95,115,97,109,112,108,101,32,47,32,115,111,108,105,100,95,97,110,103,108,101,95,116,101,120,101,108,41,59,10,10,9,9,9,9,115,117,109,46,114,103,98,32,43,61,32,116,101,120,116,117,114,101,76,111,100,40,115,111,117,114,99,101,95,99,117,98,101,44,32,76,44,32,109,105,112,76,101,118,101,108,41,46,114,103,98,32,42,32,110,100,111,116,108,59,10,9,9,9,9,115,117,109,46,97,32,43,61,32,110,100,111,116,108,59,10,9,9,9,125,10,9,9,125,10,9,9,115,117,109,32,47,61,32,115,117,109,46,97,59,10,10,9,9,102,114,97,103,95,99,111,108,111,114,32,61,32,118,101,99,52,40,115,117,109,46,114,103,98,44,32,49,46,48,41,59,10,9,125,10,125,10,0
		};
		setup(_vertex_code, _fragment_code, nullptr, "CubemapRoughnessRasterShaderRD");
	}
};

#endif
