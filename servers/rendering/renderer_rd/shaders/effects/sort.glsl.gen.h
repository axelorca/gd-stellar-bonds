/* WARNING, THIS FILE WAS GENERATED, DO NOT EDIT */
#ifndef SORT_GLSL_GEN_H_RD
#define SORT_GLSL_GEN_H_RD

#include "servers/rendering/renderer_rd/shader_rd.h"

class SortShaderRD : public ShaderRD {

public:

	SortShaderRD() {

		static const char _compute_code[] = {
10,35,118,101,114,115,105,111,110,32,52,53,48,10,10,35,86,69,82,83,73,79,78,95,68,69,70,73,78,69,83,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,10,35,100,101,102,105,110,101,32,83,79,82,84,95,83,73,90,69,32,53,49,50,10,35,100,101,102,105,110,101,32,78,85,77,95,84,72,82,69,65,68,83,32,40,83,79,82,84,95,83,73,90,69,32,47,32,50,41,10,35,100,101,102,105,110,101,32,73,78,86,69,82,83,73,79,78,32,40,49,54,32,42,32,50,32,43,32,56,32,42,32,51,41,10,35,100,101,102,105,110,101,32,73,84,69,82,65,84,73,79,78,83,32,49,10,10,108,97,121,111,117,116,40,108,111,99,97,108,95,115,105,122,101,95,120,32,61,32,78,85,77,95,84,72,82,69,65,68,83,44,32,108,111,99,97,108,95,115,105,122,101,95,121,32,61,32,49,44,32,108,111,99,97,108,95,115,105,122,101,95,122,32,61,32,49,41,32,105,110,59,10,10,35,105,102,110,100,101,102,32,77,79,68,69,95,83,79,82,84,95,83,84,69,80,10,10,115,104,97,114,101,100,32,118,101,99,50,32,103,95,76,68,83,91,83,79,82,84,95,83,73,90,69,93,59,10,10,35,101,110,100,105,102,10,10,108,97,121,111,117,116,40,115,101,116,32,61,32,49,44,32,98,105,110,100,105,110,103,32,61,32,48,44,32,115,116,100,52,51,48,41,32,114,101,115,116,114,105,99,116,32,98,117,102,102,101,114,32,83,111,114,116,66,117,102,102,101,114,32,123,10,9,118,101,99,50,32,100,97,116,97,91,93,59,10,125,10,115,111,114,116,95,98,117,102,102,101,114,59,10,10,108,97,121,111,117,116,40,112,117,115,104,95,99,111,110,115,116,97,110,116,44,32,115,116,100,52,51,48,41,32,117,110,105,102,111,114,109,32,80,97,114,97,109,115,32,123,10,9,117,105,110,116,32,116,111,116,97,108,95,101,108,101,109,101,110,116,115,59,10,9,117,105,110,116,32,112,97,100,91,51,93,59,10,9,105,118,101,99,52,32,106,111,98,95,112,97,114,97,109,115,59,10,125,10,112,97,114,97,109,115,59,10,10,118,111,105,100,32,109,97,105,110,40,41,32,123,10,35,105,102,100,101,102,32,77,79,68,69,95,83,79,82,84,95,66,76,79,67,75,10,10,9,117,118,101,99,51,32,71,105,100,32,61,32,103,108,95,87,111,114,107,71,114,111,117,112,73,68,59,10,9,117,118,101,99,51,32,68,84,105,100,32,61,32,103,108,95,71,108,111,98,97,108,73,110,118,111,99,97,116,105,111,110,73,68,59,10,9,117,118,101,99,51,32,71,84,105,100,32,61,32,103,108,95,76,111,99,97,108,73,110,118,111,99,97,116,105,111,110,73,68,59,10,9,117,105,110,116,32,71,73,32,61,32,103,108,95,76,111,99,97,108,73,110,118,111,99,97,116,105,111,110,73,110,100,101,120,59,10,10,9,105,110,116,32,71,108,111,98,97,108,66,97,115,101,73,110,100,101,120,32,61,32,105,110,116,40,40,71,105,100,46,120,32,42,32,83,79,82,84,95,83,73,90,69,41,32,43,32,71,84,105,100,46,120,41,59,10,9,105,110,116,32,76,111,99,97,108,66,97,115,101,73,110,100,101,120,32,61,32,105,110,116,40,71,73,41,59,10,9,105,110,116,32,110,117,109,69,108,101,109,101,110,116,115,73,110,84,104,114,101,97,100,71,114,111,117,112,32,61,32,105,110,116,40,109,105,110,40,83,79,82,84,95,83,73,90,69,44,32,112,97,114,97,109,115,46,116,111,116,97,108,95,101,108,101,109,101,110,116,115,32,45,32,40,71,105,100,46,120,32,42,32,83,79,82,84,95,83,73,90,69,41,41,41,59,10,10,9,10,10,9,105,110,116,32,105,59,10,9,102,111,114,32,40,105,32,61,32,48,59,32,105,32,60,32,50,32,42,32,73,84,69,82,65,84,73,79,78,83,59,32,43,43,105,41,32,123,10,9,9,105,102,32,40,71,73,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,32,60,32,110,117,109,69,108,101,109,101,110,116,115,73,110,84,104,114,101,97,100,71,114,111,117,112,41,10,9,9,9,103,95,76,68,83,91,76,111,99,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,32,61,32,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,71,108,111,98,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,59,10,9,125,10,10,9,103,114,111,117,112,77,101,109,111,114,121,66,97,114,114,105,101,114,40,41,59,10,9,98,97,114,114,105,101,114,40,41,59,10,10,9,10,9,102,111,114,32,40,105,110,116,32,110,77,101,114,103,101,83,105,122,101,32,61,32,50,59,32,110,77,101,114,103,101,83,105,122,101,32,60,61,32,83,79,82,84,95,83,73,90,69,59,32,110,77,101,114,103,101,83,105,122,101,32,61,32,110,77,101,114,103,101,83,105,122,101,32,42,32,50,41,32,123,10,9,9,102,111,114,32,40,105,110,116,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,61,32,110,77,101,114,103,101,83,105,122,101,32,62,62,32,49,59,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,62,32,48,59,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,61,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,62,62,32,49,41,32,123,10,9,9,9,102,111,114,32,40,105,32,61,32,48,59,32,105,32,60,32,73,84,69,82,65,84,73,79,78,83,59,32,43,43,105,41,32,123,10,9,9,9,9,105,110,116,32,116,109,112,95,105,110,100,101,120,32,61,32,105,110,116,40,71,73,32,43,32,78,85,77,95,84,72,82,69,65,68,83,32,42,32,105,41,59,10,9,9,9,9,105,110,116,32,105,110,100,101,120,95,108,111,119,32,61,32,116,109,112,95,105,110,100,101,120,32,38,32,40,110,77,101,114,103,101,83,117,98,83,105,122,101,32,45,32,49,41,59,10,9,9,9,9,105,110,116,32,105,110,100,101,120,95,104,105,103,104,32,61,32,50,32,42,32,40,116,109,112,95,105,110,100,101,120,32,45,32,105,110,100,101,120,95,108,111,119,41,59,10,9,9,9,9,105,110,116,32,105,110,100,101,120,32,61,32,105,110,100,101,120,95,104,105,103,104,32,43,32,105,110,100,101,120,95,108,111,119,59,10,10,9,9,9,9,105,110,116,32,110,83,119,97,112,69,108,101,109,32,61,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,61,61,32,110,77,101,114,103,101,83,105,122,101,32,62,62,32,49,32,63,32,105,110,100,101,120,95,104,105,103,104,32,43,32,40,50,32,42,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,45,32,49,41,32,45,32,105,110,100,101,120,95,108,111,119,32,58,32,105,110,100,101,120,95,104,105,103,104,32,43,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,43,32,105,110,100,101,120,95,108,111,119,59,10,9,9,9,9,105,102,32,40,110,83,119,97,112,69,108,101,109,32,60,32,110,117,109,69,108,101,109,101,110,116,115,73,110,84,104,114,101,97,100,71,114,111,117,112,41,32,123,10,9,9,9,9,9,118,101,99,50,32,97,32,61,32,103,95,76,68,83,91,105,110,100,101,120,93,59,10,9,9,9,9,9,118,101,99,50,32,98,32,61,32,103,95,76,68,83,91,110,83,119,97,112,69,108,101,109,93,59,10,10,9,9,9,9,9,105,102,32,40,97,46,120,32,62,32,98,46,120,41,32,123,10,9,9,9,9,9,9,103,95,76,68,83,91,105,110,100,101,120,93,32,61,32,98,59,10,9,9,9,9,9,9,103,95,76,68,83,91,110,83,119,97,112,69,108,101,109,93,32,61,32,97,59,10,9,9,9,9,9,125,10,9,9,9,9,125,10,9,9,9,9,103,114,111,117,112,77,101,109,111,114,121,66,97,114,114,105,101,114,40,41,59,10,9,9,9,9,98,97,114,114,105,101,114,40,41,59,10,9,9,9,125,10,9,9,125,10,9,125,10,10,9,10,9,102,111,114,32,40,105,32,61,32,48,59,32,105,32,60,32,50,32,42,32,73,84,69,82,65,84,73,79,78,83,59,32,43,43,105,41,32,123,10,9,9,105,102,32,40,71,73,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,32,60,32,110,117,109,69,108,101,109,101,110,116,115,73,110,84,104,114,101,97,100,71,114,111,117,112,41,32,123,10,9,9,9,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,71,108,111,98,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,32,61,32,103,95,76,68,83,91,76,111,99,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,59,10,9,9,125,10,9,125,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,77,79,68,69,95,83,79,82,84,95,83,84,69,80,10,10,9,117,118,101,99,51,32,71,105,100,32,61,32,103,108,95,87,111,114,107,71,114,111,117,112,73,68,59,10,9,117,118,101,99,51,32,71,84,105,100,32,61,32,103,108,95,76,111,99,97,108,73,110,118,111,99,97,116,105,111,110,73,68,59,10,10,9,105,118,101,99,52,32,116,103,112,59,10,10,9,116,103,112,46,120,32,61,32,105,110,116,40,71,105,100,46,120,41,32,42,32,50,53,54,59,10,9,116,103,112,46,121,32,61,32,48,59,10,9,116,103,112,46,122,32,61,32,105,110,116,40,112,97,114,97,109,115,46,116,111,116,97,108,95,101,108,101,109,101,110,116,115,41,59,10,9,116,103,112,46,119,32,61,32,109,105,110,40,53,49,50,44,32,109,97,120,40,48,44,32,116,103,112,46,122,32,45,32,105,110,116,40,71,105,100,46,120,41,32,42,32,53,49,50,41,41,59,10,10,9,117,105,110,116,32,108,111,99,97,108,73,68,32,61,32,105,110,116,40,116,103,112,46,120,41,32,43,32,71,84,105,100,46,120,59,32,10,10,9,117,105,110,116,32,105,110,100,101,120,95,108,111,119,32,61,32,108,111,99,97,108,73,68,32,38,32,40,112,97,114,97,109,115,46,106,111,98,95,112,97,114,97,109,115,46,120,32,45,32,49,41,59,10,9,117,105,110,116,32,105,110,100,101,120,95,104,105,103,104,32,61,32,50,32,42,32,40,108,111,99,97,108,73,68,32,45,32,105,110,100,101,120,95,108,111,119,41,59,10,10,9,117,105,110,116,32,105,110,100,101,120,32,61,32,116,103,112,46,121,32,43,32,105,110,100,101,120,95,104,105,103,104,32,43,32,105,110,100,101,120,95,108,111,119,59,10,9,117,105,110,116,32,110,83,119,97,112,69,108,101,109,32,61,32,116,103,112,46,121,32,43,32,105,110,100,101,120,95,104,105,103,104,32,43,32,112,97,114,97,109,115,46,106,111,98,95,112,97,114,97,109,115,46,121,32,43,32,112,97,114,97,109,115,46,106,111,98,95,112,97,114,97,109,115,46,122,32,42,32,105,110,100,101,120,95,108,111,119,59,10,10,9,105,102,32,40,110,83,119,97,112,69,108,101,109,32,60,32,116,103,112,46,121,32,43,32,116,103,112,46,122,41,32,123,10,9,9,118,101,99,50,32,97,32,61,32,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,105,110,100,101,120,93,59,10,9,9,118,101,99,50,32,98,32,61,32,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,110,83,119,97,112,69,108,101,109,93,59,10,10,9,9,105,102,32,40,97,46,120,32,62,32,98,46,120,41,32,123,10,9,9,9,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,105,110,100,101,120,93,32,61,32,98,59,10,9,9,9,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,110,83,119,97,112,69,108,101,109,93,32,61,32,97,59,10,9,9,125,10,9,125,10,10,35,101,110,100,105,102,10,10,35,105,102,100,101,102,32,77,79,68,69,95,83,79,82,84,95,73,78,78,69,82,10,10,9,117,118,101,99,51,32,71,105,100,32,61,32,103,108,95,87,111,114,107,71,114,111,117,112,73,68,59,10,9,117,118,101,99,51,32,68,84,105,100,32,61,32,103,108,95,71,108,111,98,97,108,73,110,118,111,99,97,116,105,111,110,73,68,59,10,9,117,118,101,99,51,32,71,84,105,100,32,61,32,103,108,95,76,111,99,97,108,73,110,118,111,99,97,116,105,111,110,73,68,59,10,9,117,105,110,116,32,71,73,32,61,32,103,108,95,76,111,99,97,108,73,110,118,111,99,97,116,105,111,110,73,110,100,101,120,59,10,10,9,105,118,101,99,52,32,116,103,112,59,10,10,9,116,103,112,46,120,32,61,32,105,110,116,40,71,105,100,46,120,32,42,32,50,53,54,41,59,10,9,116,103,112,46,121,32,61,32,48,59,10,9,116,103,112,46,122,32,61,32,105,110,116,40,112,97,114,97,109,115,46,116,111,116,97,108,95,101,108,101,109,101,110,116,115,46,120,41,59,10,9,116,103,112,46,119,32,61,32,105,110,116,40,109,105,110,40,53,49,50,44,32,109,97,120,40,48,44,32,112,97,114,97,109,115,46,116,111,116,97,108,95,101,108,101,109,101,110,116,115,32,45,32,71,105,100,46,120,32,42,32,53,49,50,41,41,41,59,10,10,9,105,110,116,32,71,108,111,98,97,108,66,97,115,101,73,110,100,101,120,32,61,32,105,110,116,40,116,103,112,46,121,32,43,32,116,103,112,46,120,32,42,32,50,32,43,32,71,84,105,100,46,120,41,59,10,9,105,110,116,32,76,111,99,97,108,66,97,115,101,73,110,100,101,120,32,61,32,105,110,116,40,71,73,41,59,10,9,105,110,116,32,105,59,10,10,9,10,9,102,111,114,32,40,105,32,61,32,48,59,32,105,32,60,32,50,59,32,43,43,105,41,32,123,10,9,9,105,102,32,40,71,73,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,32,60,32,116,103,112,46,119,41,10,9,9,9,103,95,76,68,83,91,76,111,99,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,32,61,32,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,71,108,111,98,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,59,10,9,125,10,10,9,103,114,111,117,112,77,101,109,111,114,121,66,97,114,114,105,101,114,40,41,59,10,9,98,97,114,114,105,101,114,40,41,59,10,10,9,10,9,102,111,114,32,40,105,110,116,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,61,32,83,79,82,84,95,83,73,90,69,32,62,62,32,49,59,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,62,32,48,59,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,61,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,62,62,32,49,41,32,123,10,9,9,105,110,116,32,116,109,112,95,105,110,100,101,120,32,61,32,105,110,116,40,71,73,41,59,10,9,9,105,110,116,32,105,110,100,101,120,95,108,111,119,32,61,32,116,109,112,95,105,110,100,101,120,32,38,32,40,110,77,101,114,103,101,83,117,98,83,105,122,101,32,45,32,49,41,59,10,9,9,105,110,116,32,105,110,100,101,120,95,104,105,103,104,32,61,32,50,32,42,32,40,116,109,112,95,105,110,100,101,120,32,45,32,105,110,100,101,120,95,108,111,119,41,59,10,9,9,105,110,116,32,105,110,100,101,120,32,61,32,105,110,100,101,120,95,104,105,103,104,32,43,32,105,110,100,101,120,95,108,111,119,59,10,10,9,9,105,110,116,32,110,83,119,97,112,69,108,101,109,32,61,32,105,110,100,101,120,95,104,105,103,104,32,43,32,110,77,101,114,103,101,83,117,98,83,105,122,101,32,43,32,105,110,100,101,120,95,108,111,119,59,10,10,9,9,105,102,32,40,110,83,119,97,112,69,108,101,109,32,60,32,116,103,112,46,119,41,32,123,10,9,9,9,118,101,99,50,32,97,32,61,32,103,95,76,68,83,91,105,110,100,101,120,93,59,10,9,9,9,118,101,99,50,32,98,32,61,32,103,95,76,68,83,91,110,83,119,97,112,69,108,101,109,93,59,10,10,9,9,9,105,102,32,40,97,46,120,32,62,32,98,46,120,41,32,123,10,9,9,9,9,103,95,76,68,83,91,105,110,100,101,120,93,32,61,32,98,59,10,9,9,9,9,103,95,76,68,83,91,110,83,119,97,112,69,108,101,109,93,32,61,32,97,59,10,9,9,9,125,10,9,9,125,10,9,9,103,114,111,117,112,77,101,109,111,114,121,66,97,114,114,105,101,114,40,41,59,10,9,9,98,97,114,114,105,101,114,40,41,59,10,9,125,10,10,9,10,9,102,111,114,32,40,105,32,61,32,48,59,32,105,32,60,32,50,59,32,43,43,105,41,32,123,10,9,9,105,102,32,40,71,73,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,32,60,32,116,103,112,46,119,41,32,123,10,9,9,9,115,111,114,116,95,98,117,102,102,101,114,46,100,97,116,97,91,71,108,111,98,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,32,61,32,103,95,76,68,83,91,76,111,99,97,108,66,97,115,101,73,110,100,101,120,32,43,32,105,32,42,32,78,85,77,95,84,72,82,69,65,68,83,93,59,10,9,9,125,10,9,125,10,10,35,101,110,100,105,102,10,125,10,0
		};
		setup(nullptr, nullptr, _compute_code, "SortShaderRD");
	}
};

#endif
