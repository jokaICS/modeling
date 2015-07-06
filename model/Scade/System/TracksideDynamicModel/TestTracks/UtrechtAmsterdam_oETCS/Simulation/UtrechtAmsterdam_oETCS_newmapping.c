/* UtrechtAmsterdam_oETCS_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "UtrechtAmsterdam_oETCS_newtype.h"
#include "UtrechtAmsterdam_oETCS_newmapping.h"

/* iterators */
static const MappingIterator iter_array_21;
static const MappingIterator iter_array_14;
static const MappingIterator iter_array_149;
static const MappingIterator iter_array_20;
static const MappingIterator iter_array_351;
static const MappingIterator iter_array_499;
static const MappingIterator iter_array_9;
static const MappingIterator iter_array_491;
static const MappingIterator iter_array_105;
static const MappingIterator iter_array_395;
static const MappingIterator iter_array_18;
static const MappingIterator iter_array_56;
static const MappingIterator iter_array_24;
static const MappingIterator iter_array_444;
static const MappingIterator iter_array_68;
static const MappingIterator iter_array_432;
static const MappingIterator iter_array_6;
static const MappingIterator iter_array_494;
static const MappingIterator iter_array_104;
static const MappingIterator iter_array_396;
static const MappingIterator iter_array_236;
static const MappingIterator iter_array_5;
static const MappingIterator iter_array_1;
static const MappingIterator iter_array_264;
static const MappingIterator iter_array_231;
static const MappingIterator iter_array_7;
static const MappingIterator iter_array_99;
static const MappingIterator iter_array_3;
static const MappingIterator iter_array_33;
static const MappingIterator iter_array_2;
static const MappingIterator iter_array_64;
static const MappingIterator iter_array_128;
static const MappingIterator iter_array_32;
static const MappingIterator iter_array_4;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_foldi_32;
static const MappingIterator iter_map_32;
static const MappingIterator iter_foldi_128;
static const MappingIterator iter_foldi_99;
static const MappingIterator iter_foldwi_33;
static const MappingIterator iter_map_33;
static const MappingIterator iter_foldi_231;
static const MappingIterator iter_mapwi_500;
static const MappingIterator iter_foldw_30;
static const MappingIterator iter_array_21 = { "array", 21, 21, NULL};
static const MappingIterator iter_array_14 = { "array", 14, 14, NULL};
static const MappingIterator iter_array_149 = { "array", 149, 149, NULL};
static const MappingIterator iter_array_20 = { "array", 20, 20, NULL};
static const MappingIterator iter_array_351 = { "array", 351, 351, NULL};
static const MappingIterator iter_array_499 = { "array", 499, 499, NULL};
static const MappingIterator iter_array_9 = { "array", 9, 9, NULL};
static const MappingIterator iter_array_491 = { "array", 491, 491, NULL};
static const MappingIterator iter_array_105 = { "array", 105, 105, NULL};
static const MappingIterator iter_array_395 = { "array", 395, 395, NULL};
static const MappingIterator iter_array_18 = { "array", 18, 18, NULL};
static const MappingIterator iter_array_56 = { "array", 56, 56, NULL};
static const MappingIterator iter_array_24 = { "array", 24, 24, NULL};
static const MappingIterator iter_array_444 = { "array", 444, 444, NULL};
static const MappingIterator iter_array_68 = { "array", 68, 68, NULL};
static const MappingIterator iter_array_432 = { "array", 432, 432, NULL};
static const MappingIterator iter_array_6 = { "array", 6, 6, NULL};
static const MappingIterator iter_array_494 = { "array", 494, 494, NULL};
static const MappingIterator iter_array_104 = { "array", 104, 104, NULL};
static const MappingIterator iter_array_396 = { "array", 396, 396, NULL};
static const MappingIterator iter_array_236 = { "array", 236, 236, NULL};
static const MappingIterator iter_array_5 = { "array", 5, 5, NULL};
static const MappingIterator iter_array_1 = { "array", 1, 1, NULL};
static const MappingIterator iter_array_264 = { "array", 264, 264, NULL};
static const MappingIterator iter_array_231 = { "array", 231, 231, NULL};
static const MappingIterator iter_array_7 = { "array", 7, 7, NULL};
static const MappingIterator iter_array_99 = { "array", 99, 99, NULL};
static const MappingIterator iter_array_3 = { "array", 3, 3, NULL};
static const MappingIterator iter_array_33 = { "array", 33, 33, NULL};
static const MappingIterator iter_array_2 = { "array", 2, 2, NULL};
static const MappingIterator iter_array_64 = { "array", 64, 64, NULL};
static const MappingIterator iter_array_128 = { "array", 128, 128, NULL};
static const MappingIterator iter_array_32 = { "array", 32, 32, NULL};
static const MappingIterator iter_array_4 = { "array", 4, 4, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};
static const MappingIterator iter_foldi_32 = { "foldi", 32, 32, NULL};
static const MappingIterator iter_map_32 = { "map", 32, 32, NULL};
static const MappingIterator iter_foldi_128 = { "foldi", 128, 128, NULL};
static const MappingIterator iter_foldi_99 = { "foldi", 99, 99, NULL};
static const MappingIterator iter_foldwi_33 = { "foldwi", 33, 33, NULL};
static const MappingIterator iter_map_33 = { "map", 33, 33, NULL};
static const MappingIterator iter_foldi_231 = { "foldi", 231, 231, NULL};
static const MappingIterator iter_mapwi_500 = { "mapwi", 500, 500, NULL};
static const MappingIterator iter_foldw_30 = { "foldw", 30, 30, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_508, 1);
MAP_DECL(scope_507, 1);
MAP_DECL(scope_506, 1);
MAP_DECL(scope_505, 1);
MAP_DECL(scope_504, 1);
MAP_DECL(scope_503, 1);
MAP_DECL(scope_502, 1);
MAP_DECL(scope_501, 1);
MAP_DECL(scope_500, 1);
MAP_DECL(scope_499, 1);
MAP_DECL(scope_498, 1);
MAP_DECL(scope_497, 1);
MAP_DECL(scope_496, 1);
MAP_DECL(scope_495, 1);
MAP_DECL(scope_494, 1);
MAP_DECL(scope_493, 1);
MAP_DECL(scope_492, 1);
MAP_DECL(scope_491, 1);
MAP_DECL(scope_490, 1);
MAP_DECL(scope_489, 1);
MAP_DECL(scope_488, 1);
MAP_DECL(scope_487, 1);
MAP_DECL(scope_486, 1);
MAP_DECL(scope_485, 1);
MAP_DECL(scope_484, 1);
MAP_DECL(scope_483, 1);
MAP_DECL(scope_482, 1);
MAP_DECL(scope_481, 1);
MAP_DECL(scope_480, 1);
MAP_DECL(scope_479, 1);
MAP_DECL(scope_478, 1);
MAP_DECL(scope_477, 1);
MAP_DECL(scope_476, 1);
MAP_DECL(scope_475, 1);
MAP_DECL(scope_474, 1);
MAP_DECL(scope_473, 5);
MAP_DECL(scope_472, 6);
MAP_DECL(scope_471, 7);
MAP_DECL(scope_470, 11);
MAP_DECL(scope_469, 7);
MAP_DECL(scope_468, 6);
MAP_DECL(scope_467, 26);
MAP_DECL(scope_466, 1);
MAP_DECL(scope_465, 11);
MAP_DECL(scope_464, 1);
MAP_DECL(scope_463, 1);
MAP_DECL(scope_462, 3);
MAP_DECL(scope_461, 14);
MAP_DECL(scope_460, 1);
MAP_DECL(scope_459, 1);
MAP_DECL(scope_458, 1);
MAP_DECL(scope_457, 1);
MAP_DECL(scope_456, 7);
MAP_DECL(scope_455, 1);
MAP_DECL(scope_454, 10);
MAP_DECL(scope_453, 1);
MAP_DECL(scope_452, 1);
MAP_DECL(scope_451, 1);
MAP_DECL(scope_450, 1);
MAP_DECL(scope_449, 3);
MAP_DECL(scope_448, 1);
MAP_DECL(scope_447, 12);
MAP_DECL(scope_446, 1);
MAP_DECL(scope_445, 1);
MAP_DECL(scope_444, 1);
MAP_DECL(scope_443, 1);
MAP_DECL(scope_442, 5);
MAP_DECL(scope_441, 1);
MAP_DECL(scope_440, 2);
MAP_DECL(scope_439, 1);
MAP_DECL(scope_438, 10);
MAP_DECL(scope_437, 2);
MAP_DECL(scope_436, 23);
MAP_DECL(scope_435, 1);
MAP_DECL(scope_434, 1);
MAP_DECL(scope_433, 1);
MAP_DECL(scope_432, 4);
MAP_DECL(scope_431, 1);
MAP_DECL(scope_430, 6);
MAP_DECL(scope_429, 11);
MAP_DECL(scope_428, 4);
MAP_DECL(scope_427, 12);
MAP_DECL(scope_426, 2);
MAP_DECL(scope_425, 2);
MAP_DECL(scope_424, 15);
MAP_DECL(scope_423, 10);
MAP_DECL(scope_422, 2);
MAP_DECL(scope_421, 1);
MAP_DECL(scope_420, 5);
MAP_DECL(scope_419, 1);
MAP_DECL(scope_418, 10);
MAP_DECL(scope_417, 15);
MAP_DECL(scope_412, 5);
MAP_DECL(scope_411, 10);
MAP_DECL(scope_410, 7);
MAP_DECL(scope_409, 10);
MAP_DECL(scope_408, 6);
MAP_DECL(scope_407, 10);
MAP_DECL(scope_406, 8);
MAP_DECL(scope_405, 6);
MAP_DECL(scope_404, 10);
MAP_DECL(scope_403, 8);
MAP_DECL(scope_402, 8);
MAP_DECL(scope_401, 28);
MAP_DECL(scope_400, 8);
MAP_DECL(scope_399, 2);
MAP_DECL(scope_398, 2);
MAP_DECL(scope_397, 2);
MAP_DECL(scope_396, 2);
MAP_DECL(scope_395, 3);
MAP_DECL(scope_394, 3);
MAP_DECL(scope_393, 3);
MAP_DECL(scope_392, 6);
MAP_DECL(scope_391, 53);
MAP_DECL(scope_390, 2);
MAP_DECL(scope_389, 2);
MAP_DECL(scope_388, 2);
MAP_DECL(scope_387, 2);
MAP_DECL(scope_386, 3);
MAP_DECL(scope_385, 3);
MAP_DECL(scope_384, 3);
MAP_DECL(scope_383, 6);
MAP_DECL(scope_382, 19);
MAP_DECL(scope_381, 2);
MAP_DECL(scope_380, 2);
MAP_DECL(scope_379, 2);
MAP_DECL(scope_378, 2);
MAP_DECL(scope_377, 3);
MAP_DECL(scope_376, 3);
MAP_DECL(scope_375, 3);
MAP_DECL(scope_374, 6);
MAP_DECL(scope_373, 26);
MAP_DECL(scope_372, 2);
MAP_DECL(scope_371, 2);
MAP_DECL(scope_370, 2);
MAP_DECL(scope_369, 2);
MAP_DECL(scope_368, 3);
MAP_DECL(scope_367, 3);
MAP_DECL(scope_366, 3);
MAP_DECL(scope_365, 6);
MAP_DECL(scope_364, 38);
MAP_DECL(scope_363, 2);
MAP_DECL(scope_362, 2);
MAP_DECL(scope_361, 2);
MAP_DECL(scope_360, 2);
MAP_DECL(scope_359, 3);
MAP_DECL(scope_358, 3);
MAP_DECL(scope_357, 3);
MAP_DECL(scope_356, 6);
MAP_DECL(scope_355, 50);
MAP_DECL(scope_354, 2);
MAP_DECL(scope_353, 2);
MAP_DECL(scope_352, 2);
MAP_DECL(scope_351, 2);
MAP_DECL(scope_350, 3);
MAP_DECL(scope_349, 3);
MAP_DECL(scope_348, 3);
MAP_DECL(scope_347, 6);
MAP_DECL(scope_346, 39);
MAP_DECL(scope_345, 26);
MAP_DECL(scope_344, 21);
MAP_DECL(scope_343, 2);
MAP_DECL(scope_342, 2);
MAP_DECL(scope_341, 2);
MAP_DECL(scope_340, 2);
MAP_DECL(scope_339, 3);
MAP_DECL(scope_338, 3);
MAP_DECL(scope_337, 3);
MAP_DECL(scope_336, 6);
MAP_DECL(scope_335, 37);
MAP_DECL(scope_334, 10);
MAP_DECL(scope_333, 10);
MAP_DECL(scope_332, 6);
MAP_DECL(scope_331, 6);
MAP_DECL(scope_330, 17);
MAP_DECL(scope_329, 17);
MAP_DECL(scope_328, 17);
MAP_DECL(scope_327, 17);
MAP_DECL(scope_326, 17);
MAP_DECL(scope_325, 26);
MAP_DECL(scope_324, 17);
MAP_DECL(scope_323, 19);
MAP_DECL(scope_322, 8);
MAP_DECL(scope_321, 6);
MAP_DECL(scope_320, 15);
MAP_DECL(scope_319, 10);
MAP_DECL(scope_318, 21);
MAP_DECL(scope_317, 16);
MAP_DECL(scope_316, 9);
MAP_DECL(scope_315, 9);
MAP_DECL(scope_314, 9);
MAP_DECL(scope_313, 9);
MAP_DECL(scope_312, 9);
MAP_DECL(scope_311, 9);
MAP_DECL(scope_310, 9);
MAP_DECL(scope_309, 2);
MAP_DECL(scope_308, 2);
MAP_DECL(scope_307, 2);
MAP_DECL(scope_306, 2);
MAP_DECL(scope_305, 3);
MAP_DECL(scope_304, 3);
MAP_DECL(scope_303, 3);
MAP_DECL(scope_302, 6);
MAP_DECL(scope_301, 41);
MAP_DECL(scope_300, 12);
MAP_DECL(scope_299, 26);
MAP_DECL(scope_298, 14);
MAP_DECL(scope_297, 16);
MAP_DECL(scope_296, 14);
MAP_DECL(scope_295, 4);
MAP_DECL(scope_294, 2);
MAP_DECL(scope_293, 18);
MAP_DECL(scope_292, 4);
MAP_DECL(scope_291, 18);
MAP_DECL(scope_290, 17);
MAP_DECL(scope_289, 11);
MAP_DECL(scope_288, 11);
MAP_DECL(scope_287, 11);
MAP_DECL(scope_286, 11);
MAP_DECL(scope_285, 11);
MAP_DECL(scope_284, 11);
MAP_DECL(scope_283, 11);
MAP_DECL(scope_282, 11);
MAP_DECL(scope_281, 11);
MAP_DECL(scope_280, 11);
MAP_DECL(scope_279, 11);
MAP_DECL(scope_278, 11);
MAP_DECL(scope_277, 9);
MAP_DECL(scope_276, 5);
MAP_DECL(scope_275, 6);
MAP_DECL(scope_274, 15);
MAP_DECL(scope_273, 9);
MAP_DECL(scope_272, 9);
MAP_DECL(scope_271, 9);
MAP_DECL(scope_270, 9);
MAP_DECL(scope_269, 9);
MAP_DECL(scope_268, 9);
MAP_DECL(scope_267, 9);
MAP_DECL(scope_266, 9);
MAP_DECL(scope_265, 9);
MAP_DECL(scope_264, 9);
MAP_DECL(scope_263, 9);
MAP_DECL(scope_262, 9);
MAP_DECL(scope_261, 9);
MAP_DECL(scope_260, 6);
MAP_DECL(scope_259, 6);
MAP_DECL(scope_258, 6);
MAP_DECL(scope_257, 6);
MAP_DECL(scope_256, 2);
MAP_DECL(scope_255, 2);
MAP_DECL(scope_254, 2);
MAP_DECL(scope_253, 3);
MAP_DECL(scope_252, 3);
MAP_DECL(scope_251, 6);
MAP_DECL(scope_250, 6);
MAP_DECL(scope_249, 2);
MAP_DECL(scope_248, 2);
MAP_DECL(scope_247, 2);
MAP_DECL(scope_246, 2);
MAP_DECL(scope_245, 2);
MAP_DECL(scope_244, 2);
MAP_DECL(scope_243, 2);
MAP_DECL(scope_242, 2);
MAP_DECL(scope_241, 2);
MAP_DECL(scope_240, 2);
MAP_DECL(scope_239, 2);
MAP_DECL(scope_238, 2);
MAP_DECL(scope_237, 2);
MAP_DECL(scope_236, 2);
MAP_DECL(scope_235, 2);
MAP_DECL(scope_234, 2);
MAP_DECL(scope_233, 2);
MAP_DECL(scope_232, 2);
MAP_DECL(scope_231, 2);
MAP_DECL(scope_230, 54);
MAP_DECL(scope_229, 5);
MAP_DECL(scope_228, 28);
MAP_DECL(scope_227, 7);
MAP_DECL(scope_226, 6);
MAP_DECL(scope_225, 26);
MAP_DECL(scope_224, 6);
MAP_DECL(scope_223, 2);
MAP_DECL(scope_222, 2);
MAP_DECL(scope_221, 2);
MAP_DECL(scope_220, 2);
MAP_DECL(scope_219, 2);
MAP_DECL(scope_218, 3);
MAP_DECL(scope_217, 3);
MAP_DECL(scope_216, 3);
MAP_DECL(scope_215, 3);
MAP_DECL(scope_214, 6);
MAP_DECL(scope_213, 2);
MAP_DECL(scope_212, 2);
MAP_DECL(scope_211, 2);
MAP_DECL(scope_210, 2);
MAP_DECL(scope_209, 3);
MAP_DECL(scope_208, 3);
MAP_DECL(scope_207, 3);
MAP_DECL(scope_206, 6);
MAP_DECL(scope_205, 6);
MAP_DECL(scope_204, 6);
MAP_DECL(scope_203, 2);
MAP_DECL(scope_202, 2);
MAP_DECL(scope_201, 2);
MAP_DECL(scope_200, 2);
MAP_DECL(scope_199, 3);
MAP_DECL(scope_198, 3);
MAP_DECL(scope_197, 3);
MAP_DECL(scope_196, 6);
MAP_DECL(scope_195, 6);
MAP_DECL(scope_194, 6);
MAP_DECL(scope_193, 2);
MAP_DECL(scope_192, 2);
MAP_DECL(scope_191, 2);
MAP_DECL(scope_190, 3);
MAP_DECL(scope_189, 3);
MAP_DECL(scope_188, 6);
MAP_DECL(scope_187, 9);
MAP_DECL(scope_186, 20);
MAP_DECL(scope_185, 19);
MAP_DECL(scope_184, 21);
MAP_DECL(scope_183, 20);
MAP_DECL(scope_182, 2);
MAP_DECL(scope_181, 2);
MAP_DECL(scope_180, 2);
MAP_DECL(scope_179, 2);
MAP_DECL(scope_178, 3);
MAP_DECL(scope_177, 3);
MAP_DECL(scope_176, 3);
MAP_DECL(scope_175, 6);
MAP_DECL(scope_174, 2);
MAP_DECL(scope_173, 2);
MAP_DECL(scope_172, 2);
MAP_DECL(scope_171, 2);
MAP_DECL(scope_170, 3);
MAP_DECL(scope_169, 3);
MAP_DECL(scope_168, 3);
MAP_DECL(scope_167, 6);
MAP_DECL(scope_166, 29);
MAP_DECL(scope_165, 20);
MAP_DECL(scope_164, 20);
MAP_DECL(scope_163, 19);
MAP_DECL(scope_162, 21);
MAP_DECL(scope_161, 20);
MAP_DECL(scope_160, 6);
MAP_DECL(scope_159, 13);
MAP_DECL(scope_158, 13);
MAP_DECL(scope_157, 13);
MAP_DECL(scope_156, 13);
MAP_DECL(scope_155, 13);
MAP_DECL(scope_154, 13);
MAP_DECL(scope_153, 13);
MAP_DECL(scope_152, 13);
MAP_DECL(scope_151, 13);
MAP_DECL(scope_150, 13);
MAP_DECL(scope_149, 13);
MAP_DECL(scope_148, 13);
MAP_DECL(scope_147, 13);
MAP_DECL(scope_146, 10);
MAP_DECL(scope_145, 9);
MAP_DECL(scope_144, 13);
MAP_DECL(scope_143, 13);
MAP_DECL(scope_142, 12);
MAP_DECL(scope_141, 44);
MAP_DECL(scope_140, 5);
MAP_DECL(scope_139, 5);
MAP_DECL(scope_138, 5);
MAP_DECL(scope_137, 5);
MAP_DECL(scope_136, 5);
MAP_DECL(scope_135, 1);
MAP_DECL(scope_134, 3);
MAP_DECL(scope_133, 3);
MAP_DECL(scope_132, 3);
MAP_DECL(scope_131, 3);
MAP_DECL(scope_130, 3);
MAP_DECL(scope_129, 7);
MAP_DECL(scope_128, 2);
MAP_DECL(scope_127, 2);
MAP_DECL(scope_126, 2);
MAP_DECL(scope_125, 3);
MAP_DECL(scope_124, 3);
MAP_DECL(scope_123, 6);
MAP_DECL(scope_122, 6);
MAP_DECL(scope_121, 6);
MAP_DECL(scope_120, 6);
MAP_DECL(scope_119, 2);
MAP_DECL(scope_118, 2);
MAP_DECL(scope_117, 2);
MAP_DECL(scope_116, 2);
MAP_DECL(scope_115, 3);
MAP_DECL(scope_114, 3);
MAP_DECL(scope_113, 3);
MAP_DECL(scope_112, 6);
MAP_DECL(scope_111, 2);
MAP_DECL(scope_110, 2);
MAP_DECL(scope_109, 2);
MAP_DECL(scope_108, 2);
MAP_DECL(scope_107, 2);
MAP_DECL(scope_106, 2);
MAP_DECL(scope_105, 2);
MAP_DECL(scope_104, 2);
MAP_DECL(scope_103, 2);
MAP_DECL(scope_102, 3);
MAP_DECL(scope_101, 3);
MAP_DECL(scope_100, 3);
MAP_DECL(scope_99, 3);
MAP_DECL(scope_98, 3);
MAP_DECL(scope_97, 3);
MAP_DECL(scope_96, 3);
MAP_DECL(scope_95, 3);
MAP_DECL(scope_94, 6);
MAP_DECL(scope_93, 2);
MAP_DECL(scope_92, 2);
MAP_DECL(scope_91, 2);
MAP_DECL(scope_90, 2);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 2);
MAP_DECL(scope_87, 2);
MAP_DECL(scope_86, 2);
MAP_DECL(scope_85, 2);
MAP_DECL(scope_84, 3);
MAP_DECL(scope_83, 3);
MAP_DECL(scope_82, 3);
MAP_DECL(scope_81, 3);
MAP_DECL(scope_80, 3);
MAP_DECL(scope_79, 3);
MAP_DECL(scope_78, 3);
MAP_DECL(scope_77, 3);
MAP_DECL(scope_76, 6);
MAP_DECL(scope_75, 2);
MAP_DECL(scope_74, 2);
MAP_DECL(scope_73, 2);
MAP_DECL(scope_72, 3);
MAP_DECL(scope_71, 3);
MAP_DECL(scope_70, 6);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 2);
MAP_DECL(scope_67, 2);
MAP_DECL(scope_66, 2);
MAP_DECL(scope_65, 2);
MAP_DECL(scope_64, 3);
MAP_DECL(scope_63, 3);
MAP_DECL(scope_62, 3);
MAP_DECL(scope_61, 3);
MAP_DECL(scope_60, 6);
MAP_DECL(scope_59, 2);
MAP_DECL(scope_58, 2);
MAP_DECL(scope_57, 2);
MAP_DECL(scope_56, 3);
MAP_DECL(scope_55, 3);
MAP_DECL(scope_54, 6);
MAP_DECL(scope_53, 4);
MAP_DECL(scope_52, 4);
MAP_DECL(scope_51, 4);
MAP_DECL(scope_50, 4);
MAP_DECL(scope_49, 4);
MAP_DECL(scope_48, 4);
MAP_DECL(scope_47, 37);
MAP_DECL(scope_46, 4);
MAP_DECL(scope_45, 4);
MAP_DECL(scope_44, 4);
MAP_DECL(scope_43, 4);
MAP_DECL(scope_42, 4);
MAP_DECL(scope_41, 4);
MAP_DECL(scope_40, 37);
MAP_DECL(scope_39, 4);
MAP_DECL(scope_38, 4);
MAP_DECL(scope_37, 4);
MAP_DECL(scope_36, 4);
MAP_DECL(scope_35, 4);
MAP_DECL(scope_34, 4);
MAP_DECL(scope_33, 37);
MAP_DECL(scope_32, 4);
MAP_DECL(scope_31, 4);
MAP_DECL(scope_30, 4);
MAP_DECL(scope_29, 4);
MAP_DECL(scope_28, 4);
MAP_DECL(scope_27, 4);
MAP_DECL(scope_26, 37);
MAP_DECL(scope_25, 4);
MAP_DECL(scope_24, 4);
MAP_DECL(scope_23, 4);
MAP_DECL(scope_22, 4);
MAP_DECL(scope_21, 4);
MAP_DECL(scope_20, 4);
MAP_DECL(scope_19, 37);
MAP_DECL(scope_18, 4);
MAP_DECL(scope_17, 4);
MAP_DECL(scope_16, 4);
MAP_DECL(scope_15, 4);
MAP_DECL(scope_14, 4);
MAP_DECL(scope_13, 4);
MAP_DECL(scope_12, 37);
MAP_DECL(scope_11, 4);
MAP_DECL(scope_10, 4);
MAP_DECL(scope_9, 4);
MAP_DECL(scope_8, 4);
MAP_DECL(scope_7, 4);
MAP_DECL(scope_6, 4);
MAP_DECL(scope_5, 37);
MAP_DECL(scope_4, 17);
MAP_DECL(scope_3, 33);
MAP_DECL(scope_2, 17);
MAP_DECL(scope_1, 19);
MAP_DECL(scope_0, 1);

/* array_int_21 */
static const MappingEntry scope_508_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_21, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_508 = {
  "array_int_21",
  scope_508_entries, 1,
};

/* array_int_14 */
static const MappingEntry scope_507_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_14, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_507 = {
  "array_int_14",
  scope_507_entries, 1,
};

/* array_int_149 */
static const MappingEntry scope_506_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_149, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_506 = {
  "array_int_149",
  scope_506_entries, 1,
};

/* array_int_20 */
static const MappingEntry scope_505_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_20, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_505 = {
  "array_int_20",
  scope_505_entries, 1,
};

/* array_int_351 */
static const MappingEntry scope_504_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_351, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_504 = {
  "array_int_351",
  scope_504_entries, 1,
};

/* array_int_4_32_128 */
static const MappingEntry scope_503_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(array_int_4_32), 0, &_Type_array_int_4_32_Utils, NULL, NULL, &scope_433, 1, 0}
};
static const MappingScope scope_503 = {
  "array_int_4_32_128",
  scope_503_entries, 1,
};

/* array_int_499 */
static const MappingEntry scope_502_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_499, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_502 = {
  "array_int_499",
  scope_502_entries, 1,
};

/* array_int_9 */
static const MappingEntry scope_501_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_9, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_501 = {
  "array_int_9",
  scope_501_entries, 1,
};

/* array_int_491 */
static const MappingEntry scope_500_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_491, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_500 = {
  "array_int_491",
  scope_500_entries, 1,
};

/* array__9919 */
static const MappingEntry scope_499_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__9726), 0, &_Type_struct__9726_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_499 = {
  "array__9919",
  scope_499_entries, 1,
};

/* array_int_105 */
static const MappingEntry scope_498_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_105, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_498 = {
  "array_int_105",
  scope_498_entries, 1,
};

/* array_int_395 */
static const MappingEntry scope_497_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_395, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_497 = {
  "array_int_395",
  scope_497_entries, 1,
};

/* array_int_3_33_99 */
static const MappingEntry scope_496_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_450, 1, 0}
};
static const MappingScope scope_496 = {
  "array_int_3_33_99",
  scope_496_entries, 1,
};

/* array_int_18 */
static const MappingEntry scope_495_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_18, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_495 = {
  "array_int_18",
  scope_495_entries, 1,
};

/* array_int_56 */
static const MappingEntry scope_494_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_56, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_494 = {
  "array_int_56",
  scope_494_entries, 1,
};

/* array_int_24 */
static const MappingEntry scope_493_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_24, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_493 = {
  "array_int_24",
  scope_493_entries, 1,
};

/* array_int_444 */
static const MappingEntry scope_492_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_444, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_492 = {
  "array_int_444",
  scope_492_entries, 1,
};

/* array_int_33 */
static const MappingEntry scope_491_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_491 = {
  "array_int_33",
  scope_491_entries, 1,
};

/* array_int_68 */
static const MappingEntry scope_490_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_68, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_490 = {
  "array_int_68",
  scope_490_entries, 1,
};

/* array_int_432 */
static const MappingEntry scope_489_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_432, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_489 = {
  "array_int_432",
  scope_489_entries, 1,
};

/* array_int_2_32_32 */
static const MappingEntry scope_488_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2_32), 0, &_Type_array_int_2_32_Utils, NULL, NULL, &scope_444, 1, 0}
};
static const MappingScope scope_488 = {
  "array_int_2_32_32",
  scope_488_entries, 1,
};

/* array__9883 */
static const MappingEntry scope_487_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__9615), 0, &_Type_struct__9615_Utils, NULL, NULL, &scope_442, 1, 0}
};
static const MappingScope scope_487 = {
  "array__9883",
  scope_487_entries, 1,
};

/* array_int_6 */
static const MappingEntry scope_486_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_6, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_486 = {
  "array_int_6",
  scope_486_entries, 1,
};

/* array_int_494 */
static const MappingEntry scope_485_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_494, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_485 = {
  "array_int_494",
  scope_485_entries, 1,
};

/* array__9874 */
static const MappingEntry scope_484_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__9653), 0, &_Type_struct__9653_Utils, NULL, NULL, &scope_449, 1, 0}
};
static const MappingScope scope_484 = {
  "array__9874",
  scope_484_entries, 1,
};

/* array_int_104 */
static const MappingEntry scope_483_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_104, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_483 = {
  "array_int_104",
  scope_483_entries, 1,
};

/* array_int_396 */
static const MappingEntry scope_482_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_396, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_482 = {
  "array_int_396",
  scope_482_entries, 1,
};

/* array_int_3_33_231 */
static const MappingEntry scope_481_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_3_33), 0, &_Type_array_int_3_33_Utils, NULL, NULL, &scope_450, 1, 0}
};
static const MappingScope scope_481 = {
  "array_int_3_33_231",
  scope_481_entries, 1,
};

/* array__9862 */
static const MappingEntry scope_480_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(struct__9687), 0, &_Type_struct__9687_Utils, NULL, NULL, &scope_456, 1, 0}
};
static const MappingScope scope_480 = {
  "array__9862",
  scope_480_entries, 1,
};

/* array_int_236 */
static const MappingEntry scope_479_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_236, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_479 = {
  "array_int_236",
  scope_479_entries, 1,
};

/* array_int_5 */
static const MappingEntry scope_478_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_5, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_478 = {
  "array_int_5",
  scope_478_entries, 1,
};

/* array_int_1 */
static const MappingEntry scope_477_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_1, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_477 = {
  "array_int_1",
  scope_477_entries, 1,
};

/* array_int_264 */
static const MappingEntry scope_476_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_264, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_476 = {
  "array_int_264",
  scope_476_entries, 1,
};

/* array_int_7_33_231 */
static const MappingEntry scope_475_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(array_int_7_33), 0, &_Type_array_int_7_33_Utils, NULL, NULL, &scope_457, 1, 0}
};
static const MappingScope scope_475 = {
  "array_int_7_33_231",
  scope_475_entries, 1,
};

/* array_int_500_500 */
static const MappingEntry scope_474_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(array_int_500), 0, &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 0}
};
static const MappingScope scope_474 = {
  "array_int_500_500",
  scope_474_entries, 1,
};

/* struct__9836 */
static const MappingEntry scope_473_entries[5] = {
  /* 0 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__9836, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__9836, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Or_BG", NULL, sizeof(OrBG_TM), offsetof(struct__9836, Or_BG), &_Type_OrBG_TM_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".Or_Line", NULL, sizeof(OrLine_TM), offsetof(struct__9836, Or_Line), &_Type_OrLine_TM_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Pos", NULL, sizeof(kcg_int), offsetof(struct__9836, Pos), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_473 = {
  "struct__9836",
  scope_473_entries, 5,
};

/* struct__9827 */
static const MappingEntry scope_472_entries[6] = {
  /* 0 */ { MAP_FIELD, ".TrainPos", NULL, sizeof(kcg_real), offsetof(struct__9827, TrainPos), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".balise_passed", NULL, sizeof(kcg_bool), offsetof(struct__9827, balise_passed), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".engineering_BG_location", NULL, sizeof(kcg_int), offsetof(struct__9827, engineering_BG_location), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".header", NULL, sizeof(struct__9455), offsetof(struct__9827, header), &_Type_struct__9455_Utils, NULL, NULL, &scope_423, 1, 0},
  /* 4 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__9450), offsetof(struct__9827, packets), &_Type_struct__9450_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 5 */ { MAP_FIELD, ".pig_nom_0", NULL, sizeof(kcg_int), offsetof(struct__9827, pig_nom_0), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_472 = {
  "struct__9827",
  scope_472_entries, 6,
};

/* struct__9817 */
static const MappingEntry scope_471_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__9817, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__9817, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__9817, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9817, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9817, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9817, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9817, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_471 = {
  "struct__9817",
  scope_471_entries, 7,
};

/* struct__9803 */
static const MappingEntry scope_470_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__9803, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__9803, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__9803, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__9803, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__9803, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9803, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9803, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9803, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__9803, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9803, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9803, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_470 = {
  "struct__9803",
  scope_470_entries, 11,
};

/* struct__9793 */
static const MappingEntry scope_469_entries[7] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__9793, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__9793, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9793, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9793, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9793, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".t_train_received", NULL, sizeof(kcg_real), offsetof(struct__9793, t_train_received), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9793, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_469 = {
  "struct__9793",
  scope_469_entries, 7,
};

/* struct__9784 */
static const MappingEntry scope_468_entries[6] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__9784, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__9784, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9784, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9784, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9784, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9784, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_468 = {
  "struct__9784",
  scope_468_entries, 6,
};

/* struct__9755 */
static const MappingEntry scope_467_entries[26] = {
  /* 0 */ { MAP_FIELD, ".D_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__9755, D_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 1 */ { MAP_FIELD, ".D_NVPOTRP", NULL, sizeof(kcg_int), offsetof(struct__9755, D_NVPOTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 2 */ { MAP_FIELD, ".D_NVROLL", NULL, sizeof(kcg_int), offsetof(struct__9755, D_NVROLL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_FIELD, ".D_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__9755, D_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 4 */ { MAP_FIELD, ".D_VALIDNV", NULL, sizeof(kcg_int), offsetof(struct__9755, D_VALIDNV), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9755, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_FIELD, ".M_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__9755, M_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 7 */ { MAP_FIELD, ".M_NVDERUN", NULL, sizeof(kcg_int), offsetof(struct__9755, M_NVDERUN), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 8 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9755, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 9 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__9755, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__9755, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_NVDRIVER_ADHES", NULL, sizeof(kcg_int), offsetof(struct__9755, Q_NVDRIVER_ADHES), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 12 */ { MAP_FIELD, ".Q_NVEMRRLS", NULL, sizeof(kcg_int), offsetof(struct__9755, Q_NVEMRRLS), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_FIELD, ".Q_NVSRBKTRG", NULL, sizeof(kcg_int), offsetof(struct__9755, Q_NVSRBKTRG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__9755, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array_int_32), offsetof(struct__9755, SECTIONS), &_Type_array_int_32_Utils, NULL, NULL, &scope_466, 1, 7},
  /* 16 */ { MAP_FIELD, ".T_NVCONTACT", NULL, sizeof(kcg_int), offsetof(struct__9755, T_NVCONTACT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_FIELD, ".T_NVOVTRP", NULL, sizeof(kcg_int), offsetof(struct__9755, T_NVOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 18 */ { MAP_FIELD, ".V_NVALLOWOVTRP", NULL, sizeof(kcg_int), offsetof(struct__9755, V_NVALLOWOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_FIELD, ".V_NVONSIGHT", NULL, sizeof(kcg_int), offsetof(struct__9755, V_NVONSIGHT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 20 */ { MAP_FIELD, ".V_NVREL", NULL, sizeof(kcg_int), offsetof(struct__9755, V_NVREL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 21 */ { MAP_FIELD, ".V_NVSHUNT", NULL, sizeof(kcg_int), offsetof(struct__9755, V_NVSHUNT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 22 */ { MAP_FIELD, ".V_NVSTFF", NULL, sizeof(kcg_int), offsetof(struct__9755, V_NVSTFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 23 */ { MAP_FIELD, ".V_NVSUPOVTRP", NULL, sizeof(kcg_int), offsetof(struct__9755, V_NVSUPOVTRP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_FIELD, ".V_NVUNFIT", NULL, sizeof(kcg_int), offsetof(struct__9755, V_NVUNFIT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 25 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9755, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_467 = {
  "struct__9755",
  scope_467_entries, 26,
};

/* array_int_32 */
static const MappingEntry scope_466_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_466 = {
  "array_int_32",
  scope_466_entries, 1,
};

/* struct__9738 */
static const MappingEntry scope_465_entries[11] = {
  /* 0 */ { MAP_FIELD, ".D_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__9738, D_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(struct__9738, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9738, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__9738, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__9738, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9738, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__9738, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__9738, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__9738, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__9735), offsetof(struct__9738, SECTIONS), &_Type_array__9735_Utils, NULL, NULL, &scope_464, 1, 10},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9738, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_465 = {
  "struct__9738",
  scope_465_entries, 11,
};

/* array__9735 */
static const MappingEntry scope_464_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__9726), 0, &_Type_struct__9726_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_464 = {
  "array__9735",
  scope_464_entries, 1,
};

/* array__9732 */
static const MappingEntry scope_463_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__9726), 0, &_Type_struct__9726_Utils, NULL, NULL, &scope_462, 1, 0}
};
static const MappingScope scope_463 = {
  "array__9732",
  scope_463_entries, 1,
};

/* struct__9726 */
static const MappingEntry scope_462_entries[3] = {
  /* 0 */ { MAP_FIELD, ".L_ACKLEVELTR", NULL, sizeof(kcg_int), offsetof(struct__9726, L_ACKLEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".M_LEVELTR", NULL, sizeof(kcg_int), offsetof(struct__9726, M_LEVELTR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".NID_NTC", NULL, sizeof(kcg_int), offsetof(struct__9726, NID_NTC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_462 = {
  "struct__9726",
  scope_462_entries, 3,
};

/* struct__9709 */
static const MappingEntry scope_461_entries[14] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__9709, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9709, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__9709, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__9709, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9709, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__9709, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__9709, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__9709, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__9709, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 9 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__9709, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 10 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__9709, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__9709, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 12 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__9706), offsetof(struct__9709, SECTIONS), &_Type_array__9706_Utils, NULL, NULL, &scope_460, 1, 13},
  /* 13 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9709, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_461 = {
  "struct__9709",
  scope_461_entries, 14,
};

/* array__9706 */
static const MappingEntry scope_460_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__9687), 0, &_Type_struct__9687_Utils, NULL, NULL, &scope_456, 1, 0}
};
static const MappingScope scope_460 = {
  "array__9706",
  scope_460_entries, 1,
};

/* array__9703 */
static const MappingEntry scope_459_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__9687), 0, &_Type_struct__9687_Utils, NULL, NULL, &scope_456, 1, 0}
};
static const MappingScope scope_459 = {
  "array__9703",
  scope_459_entries, 1,
};

/* array_int_231 */
static const MappingEntry scope_458_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_231, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_458 = {
  "array_int_231",
  scope_458_entries, 1,
};

/* array_int_7_33 */
static const MappingEntry scope_457_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_7), 0, &_Type_array_int_7_Utils, NULL, NULL, &scope_455, 1, 0}
};
static const MappingScope scope_457 = {
  "array_int_7_33",
  scope_457_entries, 1,
};

/* struct__9687 */
static const MappingEntry scope_456_entries[7] = {
  /* 0 */ { MAP_FIELD, ".D_LINK", NULL, sizeof(kcg_int), offsetof(struct__9687, D_LINK), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".NID_BG", NULL, sizeof(kcg_int), offsetof(struct__9687, NID_BG), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_C", NULL, sizeof(kcg_int), offsetof(struct__9687, NID_C), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".Q_LINKORIENTATION", NULL, sizeof(kcg_int), offsetof(struct__9687, Q_LINKORIENTATION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".Q_LINKREACTION", NULL, sizeof(kcg_int), offsetof(struct__9687, Q_LINKREACTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_LOCACC", NULL, sizeof(kcg_int), offsetof(struct__9687, Q_LOCACC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".Q_NEWCOUNTRY", NULL, sizeof(kcg_int), offsetof(struct__9687, Q_NEWCOUNTRY), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_456 = {
  "struct__9687",
  scope_456_entries, 7,
};

/* array_int_7 */
static const MappingEntry scope_455_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_7, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_455 = {
  "array_int_7",
  scope_455_entries, 1,
};

/* struct__9671 */
static const MappingEntry scope_454_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__9671, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__9671, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9671, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9671, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__9671, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__9671, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__9671, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__9671, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__9668), offsetof(struct__9671, SECTIONS), &_Type_array__9668_Utils, NULL, NULL, &scope_453, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9671, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_454 = {
  "struct__9671",
  scope_454_entries, 10,
};

/* array__9668 */
static const MappingEntry scope_453_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__9653), 0, &_Type_struct__9653_Utils, NULL, NULL, &scope_449, 1, 0}
};
static const MappingScope scope_453 = {
  "array__9668",
  scope_453_entries, 1,
};

/* array__9665 */
static const MappingEntry scope_452_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__9653), 0, &_Type_struct__9653_Utils, NULL, NULL, &scope_449, 1, 0}
};
static const MappingScope scope_452 = {
  "array__9665",
  scope_452_entries, 1,
};

/* array_int_99 */
static const MappingEntry scope_451_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_99, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_451 = {
  "array_int_99",
  scope_451_entries, 1,
};

/* array_int_3_33 */
static const MappingEntry scope_450_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(array_int_3), 0, &_Type_array_int_3_Utils, NULL, NULL, &scope_448, 1, 0}
};
static const MappingScope scope_450 = {
  "array_int_3_33",
  scope_450_entries, 1,
};

/* struct__9653 */
static const MappingEntry scope_449_entries[3] = {
  /* 0 */ { MAP_FIELD, ".D_GRADIENT", NULL, sizeof(kcg_int), offsetof(struct__9653, D_GRADIENT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".G_A", NULL, sizeof(kcg_int), offsetof(struct__9653, G_A), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".Q_GDIR", NULL, sizeof(kcg_int), offsetof(struct__9653, Q_GDIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_449 = {
  "struct__9653",
  scope_449_entries, 3,
};

/* array_int_3 */
static const MappingEntry scope_448_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_3, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_448 = {
  "array_int_3",
  scope_448_entries, 1,
};

/* struct__9635 */
static const MappingEntry scope_447_entries[12] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__9635, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9635, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9635, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".N_ITER_k", NULL, sizeof(kcg_int), offsetof(struct__9635, N_ITER_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 4 */ { MAP_FIELD, ".N_ITER_n", NULL, sizeof(kcg_int), offsetof(struct__9635, N_ITER_n), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__9635, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__9635, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__9635, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".SECTIONS_SSP", NULL, sizeof(array__9632), offsetof(struct__9635, SECTIONS_SSP), &_Type_array__9632_Utils, NULL, NULL, &scope_446, 1, 11},
  /* 9 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__9612), offsetof(struct__9635, SECTIONS_q_diff), &_Type_array__9612_Utils, NULL, NULL, &scope_441, 1, 9},
  /* 10 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__9635, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9635, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_447 = {
  "struct__9635",
  scope_447_entries, 12,
};

/* array__9632 */
static const MappingEntry scope_446_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__9615), 0, &_Type_struct__9615_Utils, NULL, NULL, &scope_442, 1, 0}
};
static const MappingScope scope_446 = {
  "array__9632",
  scope_446_entries, 1,
};

/* array__9629 */
static const MappingEntry scope_445_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_33, sizeof(struct__9615), 0, &_Type_struct__9615_Utils, NULL, NULL, &scope_442, 1, 0}
};
static const MappingScope scope_445 = {
  "array__9629",
  scope_445_entries, 1,
};

/* array_int_2_32 */
static const MappingEntry scope_444_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_2), 0, &_Type_array_int_2_Utils, NULL, NULL, &scope_443, 1, 0}
};
static const MappingScope scope_444 = {
  "array_int_2_32",
  scope_444_entries, 1,
};

/* array_int_2 */
static const MappingEntry scope_443_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_2, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_443 = {
  "array_int_2",
  scope_443_entries, 1,
};

/* struct__9615 */
static const MappingEntry scope_442_entries[5] = {
  /* 0 */ { MAP_FIELD, ".D_STATIC", NULL, sizeof(kcg_int), offsetof(struct__9615, D_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__9615, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__9615, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".SECTIONS_q_diff", NULL, sizeof(array__9612), offsetof(struct__9615, SECTIONS_q_diff), &_Type_array__9612_Utils, NULL, NULL, &scope_441, 1, 4},
  /* 4 */ { MAP_FIELD, ".V_STATIC", NULL, sizeof(kcg_int), offsetof(struct__9615, V_STATIC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_442 = {
  "struct__9615",
  scope_442_entries, 5,
};

/* array__9612 */
static const MappingEntry scope_441_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__9607), 0, &_Type_struct__9607_Utils, NULL, NULL, &scope_440, 1, 0}
};
static const MappingScope scope_441 = {
  "array__9612",
  scope_441_entries, 1,
};

/* struct__9607 */
static const MappingEntry scope_440_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NC_DIFF", NULL, sizeof(kcg_int), offsetof(struct__9607, NC_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_FIELD, ".V_DIFF", NULL, sizeof(kcg_int), offsetof(struct__9607, V_DIFF), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_440 = {
  "struct__9607",
  scope_440_entries, 2,
};

/* array_int_64 */
static const MappingEntry scope_439_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_64, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_439 = {
  "array_int_64",
  scope_439_entries, 1,
};

/* struct__9591 */
static const MappingEntry scope_438_entries[10] = {
  /* 0 */ { MAP_FIELD, ".D_TSR", NULL, sizeof(kcg_int), offsetof(struct__9591, D_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 1 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9591, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".L_TSR", NULL, sizeof(kcg_int), offsetof(struct__9591, L_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9591, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".NID_TSR", NULL, sizeof(kcg_int), offsetof(struct__9591, NID_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__9591, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_FIELD, ".Q_FRONT", NULL, sizeof(kcg_int), offsetof(struct__9591, Q_FRONT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 7 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__9591, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".V_TSR", NULL, sizeof(kcg_int), offsetof(struct__9591, V_TSR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9591, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_438 = {
  "struct__9591",
  scope_438_entries, 10,
};

/* struct__9586 */
static const MappingEntry scope_437_entries[2] = {
  /* 0 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9586, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9586, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_437 = {
  "struct__9586",
  scope_437_entries, 2,
};

/* struct__9560 */
static const MappingEntry scope_436_entries[23] = {
  /* 0 */ { MAP_FIELD, ".D_DP", NULL, sizeof(kcg_int), offsetof(struct__9560, D_DP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 1 */ { MAP_FIELD, ".D_ENDTIMERSTARTLOC", NULL, sizeof(kcg_int), offsetof(struct__9560, D_ENDTIMERSTARTLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_FIELD, ".D_OL", NULL, sizeof(kcg_int), offsetof(struct__9560, D_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 3 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(struct__9560, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_FIELD, ".D_STARTOL", NULL, sizeof(kcg_int), offsetof(struct__9560, D_STARTOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 5 */ { MAP_FIELD, ".L_ENDSECTION", NULL, sizeof(kcg_int), offsetof(struct__9560, L_ENDSECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".L_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9560, L_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_FIELD, ".NID_PACKET", NULL, sizeof(kcg_int), offsetof(struct__9560, NID_PACKET), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_FIELD, ".N_ITER", NULL, sizeof(kcg_int), offsetof(struct__9560, N_ITER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".Q_DANGERPOINT", NULL, sizeof(kcg_int), offsetof(struct__9560, Q_DANGERPOINT), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_FIELD, ".Q_DIR", NULL, sizeof(kcg_int), offsetof(struct__9560, Q_DIR), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 11 */ { MAP_FIELD, ".Q_ENDTIMER", NULL, sizeof(kcg_int), offsetof(struct__9560, Q_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_FIELD, ".Q_OVERLAP", NULL, sizeof(kcg_int), offsetof(struct__9560, Q_OVERLAP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 13 */ { MAP_FIELD, ".Q_SCALE", NULL, sizeof(kcg_int), offsetof(struct__9560, Q_SCALE), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__9560, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_FIELD, ".SECTIONS", NULL, sizeof(array__9557), offsetof(struct__9560, SECTIONS), &_Type_array__9557_Utils, NULL, NULL, &scope_435, 1, 8},
  /* 16 */ { MAP_FIELD, ".T_ENDTIMER", NULL, sizeof(kcg_int), offsetof(struct__9560, T_ENDTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_FIELD, ".T_LOA", NULL, sizeof(kcg_int), offsetof(struct__9560, T_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_FIELD, ".T_OL", NULL, sizeof(kcg_int), offsetof(struct__9560, T_OL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 19 */ { MAP_FIELD, ".V_LOA", NULL, sizeof(kcg_int), offsetof(struct__9560, V_LOA), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 20 */ { MAP_FIELD, ".V_RELEASEDP", NULL, sizeof(kcg_int), offsetof(struct__9560, V_RELEASEDP), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 21 */ { MAP_FIELD, ".V_RELEASEOL", NULL, sizeof(kcg_int), offsetof(struct__9560, V_RELEASEOL), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9560, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_436 = {
  "struct__9560",
  scope_436_entries, 23,
};

/* array__9557 */
static const MappingEntry scope_435_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(struct__9544), 0, &_Type_struct__9544_Utils, NULL, NULL, &scope_432, 1, 0}
};
static const MappingScope scope_435 = {
  "array__9557",
  scope_435_entries, 1,
};

/* array_int_128 */
static const MappingEntry scope_434_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_128, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_434 = {
  "array_int_128",
  scope_434_entries, 1,
};

/* array_int_4_32 */
static const MappingEntry scope_433_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_32, sizeof(array_int_4), 0, &_Type_array_int_4_Utils, NULL, NULL, &scope_431, 1, 0}
};
static const MappingScope scope_433 = {
  "array_int_4_32",
  scope_433_entries, 1,
};

/* struct__9544 */
static const MappingEntry scope_432_entries[4] = {
  /* 0 */ { MAP_FIELD, ".D_SECTIONTIMERSTOPLOC", NULL, sizeof(kcg_int), offsetof(struct__9544, D_SECTIONTIMERSTOPLOC), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 1 */ { MAP_FIELD, ".L_SECTION", NULL, sizeof(kcg_int), offsetof(struct__9544, L_SECTION), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".Q_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__9544, Q_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".T_SECTIONTIMER", NULL, sizeof(kcg_int), offsetof(struct__9544, T_SECTIONTIMER), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_432 = {
  "struct__9544",
  scope_432_entries, 4,
};

/* array_int_4 */
static const MappingEntry scope_431_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_4, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_431 = {
  "array_int_4",
  scope_431_entries, 1,
};

/* struct__9532 */
static const MappingEntry scope_430_entries[6] = {
  /* 0 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__9532, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__9532, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9532, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9532, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__9532, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9532, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_430 = {
  "struct__9532",
  scope_430_entries, 6,
};

/* struct__9518 */
static const MappingEntry scope_429_entries[11] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__9518, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__9518, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__9518, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__9518, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__9518, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9518, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9518, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 7 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int), offsetof(struct__9518, q_dir), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int), offsetof(struct__9518, q_scale), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__9518, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9518, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_429 = {
  "struct__9518",
  scope_429_entries, 11,
};

/* struct__9511 */
static const MappingEntry scope_428_entries[4] = {
  /* 0 */ { MAP_FIELD, ".message", NULL, sizeof(struct__9496), offsetof(struct__9511, message), &_Type_struct__9496_Utils, NULL, NULL, &scope_427, 1, 0},
  /* 1 */ { MAP_FIELD, ".message_sent", NULL, sizeof(kcg_bool), offsetof(struct__9511, message_sent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__9450), offsetof(struct__9511, packets), &_Type_struct__9450_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 3 */ { MAP_FIELD, ".trigger", NULL, sizeof(kcg_int), offsetof(struct__9511, trigger), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_428 = {
  "struct__9511",
  scope_428_entries, 4,
};

/* struct__9496 */
static const MappingEntry scope_427_entries[12] = {
  /* 0 */ { MAP_FIELD, ".field1", NULL, sizeof(kcg_int), offsetof(struct__9496, field1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".field2", NULL, sizeof(kcg_int), offsetof(struct__9496, field2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".field3", NULL, sizeof(kcg_int), offsetof(struct__9496, field3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_FIELD, ".field4", NULL, sizeof(kcg_int), offsetof(struct__9496, field4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_FIELD, ".field5", NULL, sizeof(kcg_int), offsetof(struct__9496, field5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 5 */ { MAP_FIELD, ".field6", NULL, sizeof(kcg_int), offsetof(struct__9496, field6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 6 */ { MAP_FIELD, ".field7", NULL, sizeof(kcg_int), offsetof(struct__9496, field7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 7 */ { MAP_FIELD, ".field8", NULL, sizeof(kcg_int), offsetof(struct__9496, field8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_FIELD, ".l_message", NULL, sizeof(kcg_int), offsetof(struct__9496, l_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9496, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 10 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9496, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 11 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9496, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_427 = {
  "struct__9496",
  scope_427_entries, 12,
};

/* struct__9491 */
static const MappingEntry scope_426_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__9455), offsetof(struct__9491, Header), &_Type_struct__9455_Utils, NULL, NULL, &scope_423, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__9450), offsetof(struct__9491, Messages), &_Type_struct__9450_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_426 = {
  "struct__9491",
  scope_426_entries, 2,
};

/* struct__9486 */
static const MappingEntry scope_425_entries[2] = {
  /* 0 */ { MAP_FIELD, ".Header", NULL, sizeof(struct__9468), offsetof(struct__9486, Header), &_Type_struct__9468_Utils, NULL, NULL, &scope_424, 1, 0},
  /* 1 */ { MAP_FIELD, ".Messages", NULL, sizeof(struct__9450), offsetof(struct__9486, Messages), &_Type_struct__9450_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_425 = {
  "struct__9486",
  scope_425_entries, 2,
};

/* struct__9468 */
static const MappingEntry scope_424_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__9468, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__9468, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__9468, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(kcg_int), offsetof(struct__9468, m_ack), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__9468, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__9468, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9468, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9468, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_int), offsetof(struct__9468, q_dir), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_int), offsetof(struct__9468, q_scale), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__9468, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__9468, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_int), offsetof(struct__9468, t_sh_rqst), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_int), offsetof(struct__9468, t_train), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_int), offsetof(struct__9468, t_train_reference), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_424 = {
  "struct__9468",
  scope_424_entries, 15,
};

/* struct__9455 */
static const MappingEntry scope_423_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(kcg_int), offsetof(struct__9455, m_dup), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__9455, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_int), offsetof(struct__9455, m_version), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(kcg_int), offsetof(struct__9455, n_pig), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(kcg_int), offsetof(struct__9455, n_total), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9455, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9455, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(kcg_int), offsetof(struct__9455, q_link), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(kcg_int), offsetof(struct__9455, q_media), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(kcg_int), offsetof(struct__9455, q_updown), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_423 = {
  "struct__9455",
  scope_423_entries, 10,
};

/* struct__9450 */
static const MappingEntry scope_422_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__9450, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__9447), offsetof(struct__9450, PacketHeaders), &_Type_array__9447_Utils, NULL, NULL, &scope_421, 1, 0}
};
static const MappingScope scope_422 = {
  "struct__9450",
  scope_422_entries, 2,
};

/* array__9447 */
static const MappingEntry scope_421_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__9439), 0, &_Type_struct__9439_Utils, NULL, NULL, &scope_420, 1, 0}
};
static const MappingScope scope_421 = {
  "array__9447",
  scope_421_entries, 1,
};

/* struct__9439 */
static const MappingEntry scope_420_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__9439, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__9439, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9439, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__9439, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__9439, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_420 = {
  "struct__9439",
  scope_420_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_419_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_419 = {
  "array_int_500",
  scope_419_entries, 1,
};

/* struct__9423 */
static const MappingEntry scope_418_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP), offsetof(struct__9423, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__9423, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__9423, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG), offsetof(struct__9423, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__9423, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__9423, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__9423, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__9423, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__9423, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__9423, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_418 = {
  "struct__9423",
  scope_418_entries, 10,
};

/* struct__9405 */
static const MappingEntry scope_417_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__9405, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__9405, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__9405, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__9405, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__9405, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__9405, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__9405, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__9405, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__9405, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__9405, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__9405, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__9405, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_real), offsetof(struct__9405, t_sh_rqst), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__9405, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_real), offsetof(struct__9405, t_train_reference), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_417 = {
  "struct__9405",
  scope_417_entries, 15,
};

/* TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal */
static const MappingEntry scope_412_entries[5] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L1), &_Type_P027V1_section_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_440, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L2), &_Type_array_int_2_Utils, NULL, NULL, &scope_443, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P027V1_section_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal, section_arrays), &_Type_P027V1_section_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_443, 1, 4}
};
static const MappingScope scope_412 = {
  "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff/ C_P027V1_fs_struct_to_arr_TM_lib_internal",
  scope_412_entries, 5,
};

/* TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_411_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L1), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(_1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L2), &_Type__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_444, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L7), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_fs_flatten_array_TM_lib_internal, flat), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 9}
};
static const MappingScope scope_411 = {
  "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff/ C_P027V1_fs_flatten_array_TM_lib_internal",
  scope_411_entries, 10,
};

/* TM_lib_internal::C_P015_fs_struct_to_array/ C_P015_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_410_entries[7] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_section_int_T_TM), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P015_section_int_T_TM_Utils, NULL, NULL, &scope_432, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_4), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_4_Utils, NULL, NULL, &scope_431, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P015_section_array_T_TM), offsetof(outC_C_P015_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P015_section_array_T_TM_Utils, NULL, NULL, &scope_431, 1, 6}
};
static const MappingScope scope_410 = {
  "TM_lib_internal::C_P015_fs_struct_to_array/ C_P015_fs_struct_to_array_TM_lib_internal",
  scope_410_entries, 7,
};

/* TM_lib_internal::C_P015_fs_flatten_array/ C_P015_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_409_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L1), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_434, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P015_OBU_sectionlist_array_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L2), &_Type_P015_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_433, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L7), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_434, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_fs_flatten_array_TM_lib_internal, flat), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_434, 1, 9}
};
static const MappingScope scope_409 = {
  "TM_lib_internal::C_P015_fs_flatten_array/ C_P015_fs_flatten_array_TM_lib_internal",
  scope_409_entries, 10,
};

/* TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_408_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_462, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(array_int_3), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L10), &_Type_array_int_3_Utils, NULL, NULL, &scope_448, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P041_section_array_T_TM), offsetof(outC_C_P041_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P041_section_array_T_TM_Utils, NULL, NULL, &scope_448, 1, 5}
};
static const MappingScope scope_408 = {
  "TM_lib_internal::C_P041_fs_struct_to_array/ C_P041_fs_struct_to_array_TM_lib_internal",
  scope_408_entries, 6,
};

/* TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_407_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L1), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P041_OBU_sectionlist_array_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L2), &_Type_P041_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_450, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L7), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_fs_flatten_array_TM_lib_internal, flat), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 9}
};
static const MappingScope scope_407 = {
  "TM_lib_internal::C_P041_fs_flatten_array/ C_P041_fs_flatten_array_TM_lib_internal",
  scope_407_entries, 10,
};

/* TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal */
static const MappingEntry scope_406_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Flattened), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_flatten_array_qdiff 1", &iter_foldi_32, sizeof(outC_C_P027V1_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_411, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027V1_fs_struct_to_array_qdiff 1", &iter_map_32, sizeof(outC_C_P027V1_fs_struct_to_arr_TM_lib_internal), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_412, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_2_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L74), &_Type_array_int_2_32_Utils, NULL, NULL, &scope_444, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L75), &_Type_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_441, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L76), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L83", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L83), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L84", NULL, sizeof(array_int_2_32_32), offsetof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal, _L84), &_Type_array_int_2_32_32_Utils, NULL, NULL, &scope_488, 1, 6}
};
static const MappingScope scope_406 = {
  "TM_lib_internal::C_P027_flatten_sections_qdiff/ C_P027_flatten_sections_qdiff_TM_lib_internal",
  scope_406_entries, 8,
};

/* TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_405_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_449, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_3), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_3_Utils, NULL, NULL, &scope_448, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P021_section_array_T_TM), offsetof(outC_C_P021_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P021_section_array_T_TM_Utils, NULL, NULL, &scope_448, 1, 5}
};
static const MappingScope scope_405 = {
  "TM_lib_internal::C_P021_fs_struct_to_array/ C_P021_fs_struct_to_array_TM_lib_internal",
  scope_405_entries, 6,
};

/* TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_404_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L1), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P021_OBU_sectionlist_array_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L2), &_Type_P021_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_450, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L7), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_fs_flatten_array_TM_lib_internal, flat), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 9}
};
static const MappingScope scope_404 = {
  "TM_lib_internal::C_P021_fs_flatten_array/ C_P021_fs_flatten_array_TM_lib_internal",
  scope_404_entries, 10,
};

/* TM_lib_internal::C_P015_flatten_sections/ C_P015_flatten_sections_TM_lib_internal */
static const MappingEntry scope_403_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Flattened), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_434, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_fs_flatten_array 1", &iter_foldi_128, sizeof(outC_C_P015_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_409, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_fs_struct_to_array 2", &iter_map_32, sizeof(outC_C_P015_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_410, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_4_32), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_4_32_Utils, NULL, NULL, &scope_433, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P015_OBU_sectionlist_int_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L75), &_Type_P015_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_435, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L76), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_434, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L78), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_434, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_4_32_128), offsetof(outC_C_P015_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_4_32_128_Utils, NULL, NULL, &scope_503, 1, 6}
};
static const MappingScope scope_403 = {
  "TM_lib_internal::C_P015_flatten_sections/ C_P015_flatten_sections_TM_lib_internal",
  scope_403_entries, 8,
};

/* TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal */
static const MappingEntry scope_402_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Flattened), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_flatten_array 1", &iter_foldi_99, sizeof(outC_C_P041_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_407, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P041_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_408, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_450, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P041_OBU_sectionlist_int_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L75), &_Type_P041_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_463, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L76), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L78), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_99), offsetof(outC_C_P041_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_99_Utils, NULL, NULL, &scope_496, 1, 6}
};
static const MappingScope scope_402 = {
  "TM_lib_internal::C_P041_flatten_sections/ C_P041_flatten_sections_TM_lib_internal",
  scope_402_entries, 8,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2 */
static const MappingEntry scope_401_entries[28] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 26},
  /* 1 */ { MAP_OUTPUT, "P027V1_sections_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, P027V1_sections_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 27},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P027_flatten_sections_qdiff 1", NULL, sizeof(outC_C_P027_flatten_sections_qdiff_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_406, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_321, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L1), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_432), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L209), &_Type_array_int_432_Utils, NULL, NULL, &scope_489, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L214), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L217", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L217), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_441, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_431, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L385", NULL, sizeof(array_int_68), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L385), &_Type_array_int_68_Utils, NULL, NULL, &scope_490, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L422", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L422), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L423", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L423), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L424", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L424), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L425", NULL, sizeof(P027V1_sections_array_flat_qdiff_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L425), &_Type_P027V1_sections_array_flat_qdiff_T_TM_baseline2_Utils, NULL, NULL, &scope_439, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L426", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L426), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L429", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L429), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L430", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L430), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L431", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, _L431), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_401 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section/ C_P027V1_tracksim_compr_o_TM_conversions_baseline2",
  scope_401_entries, 28,
};

/* TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal */
static const MappingEntry scope_400_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Flattened), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_flatten_array 1", &iter_foldi_231, sizeof(outC_C_P021_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _1_Context_1), NULL, NULL, NULL, &scope_404, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_fs_struct_to_array 1", &iter_map_33, sizeof(outC_C_P021_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_405, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_3_33), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_3_33_Utils, NULL, NULL, &scope_450, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P021_OBU_sectionlist_int_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L75), &_Type_P021_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_452, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L76), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L78), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_3_33_231), offsetof(outC_C_P021_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_3_33_231_Utils, NULL, NULL, &scope_481, 1, 6}
};
static const MappingScope scope_400 = {
  "TM_lib_internal::C_P021_flatten_sections/ C_P021_flatten_sections_TM_lib_internal",
  scope_400_entries, 8,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_399_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_393_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_393_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_399 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_399_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_398_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_394_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_394_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_398 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_398_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_397_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_395_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_395_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_397 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_397_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_396_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_395_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_395_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_396 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_396_entries, 2,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_395_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_395_entries[0], isActive_kcg_bool_kcg_false, &scope_396, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_395_entries[0], isActive_kcg_bool_kcg_true, &scope_397, 1, 2}
};
static const MappingScope scope_395 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_395_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_394_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_394_entries[0], isActive_kcg_bool_kcg_false, &scope_395, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_394_entries[0], isActive_kcg_bool_kcg_true, &scope_398, 1, 2}
};
static const MappingScope scope_394 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_394_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_393_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_393_entries[0], isActive_kcg_bool_kcg_false, &scope_394, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_393_entries[0], isActive_kcg_bool_kcg_true, &scope_399, 1, 2}
};
static const MappingScope scope_393 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_393_entries, 3,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_392_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_393, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_392 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_392_entries, 6,
};

/* TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversions */
static const MappingEntry scope_391_entries[53] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 51},
  /* 1 */ { MAP_OUTPUT, "P015_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, P015_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 52},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_392, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P015_flatten_sections 1", NULL, sizeof(outC_C_P015_flatten_sections_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_403, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_323, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_321, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L1), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_436, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_351), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L209), &_Type_array_int_351_Utils, NULL, NULL, &scope_504, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L365", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L365), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 21 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 23 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 26 */ { MAP_LOCAL, "_L371", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L371), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_435, 1, 21},
  /* 27 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_486, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 30 */ { MAP_LOCAL, "_L380", NULL, sizeof(P015_sections_array_flat_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L380), &_Type_P015_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_434, 1, 31},
  /* 31 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_20), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L381), &_Type_array_int_20_Utils, NULL, NULL, &scope_505, 1, 32},
  /* 32 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_149), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L384), &_Type_array_int_149_Utils, NULL, NULL, &scope_506, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 35 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 36 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 37 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L390), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 38 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 39 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L392), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 40 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 41 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 42 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 43 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 44},
  /* 44 */ { MAP_LOCAL, "_L398", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L398), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_435, 1, 45},
  /* 45 */ { MAP_LOCAL, "_L399", NULL, sizeof(array_int_14), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L399), &_Type_array_int_14_Utils, NULL, NULL, &scope_507, 1, 46},
  /* 46 */ { MAP_LOCAL, "_L400", NULL, sizeof(array_int_21), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L400), &_Type_array_int_21_Utils, NULL, NULL, &scope_508, 1, 47},
  /* 47 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 48},
  /* 48 */ { MAP_LOCAL, "_L403", NULL, sizeof(array_int_1), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L403), &_Type_array_int_1_Utils, NULL, NULL, &scope_477, 1, 49},
  /* 49 */ { MAP_LOCAL, "_L404", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, _L404), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 50},
  /* 50 */ { MAP_LOCAL, "n_iter", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, n_iter), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 51 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P015_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 52 */ { MAP_LOCAL, "sections", NULL, sizeof(P015_trackide_sectionlist_T_TM), offsetof(outC_C_P015_tracksim_compr_TM_conversions, sections), &_Type_P015_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_435, 1, 5}
};
static const MappingScope scope_391 = {
  "TM_conversions::C_P015_tracksim_compr/ C_P015_tracksim_compr_TM_conversions",
  scope_391_entries, 53,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_390_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_384_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_384_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_390 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_390_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_389_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_385_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_385_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_389 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_389_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_388_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_386_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_386_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_388 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_388_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_387_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_386_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_386_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_387 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_387_entries, 2,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_386_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_386_entries[0], isActive_kcg_bool_kcg_false, &scope_387, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_386_entries[0], isActive_kcg_bool_kcg_true, &scope_388, 1, 2}
};
static const MappingScope scope_386 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_386_entries, 3,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_385_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_385_entries[0], isActive_kcg_bool_kcg_false, &scope_386, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_385_entries[0], isActive_kcg_bool_kcg_true, &scope_389, 1, 2}
};
static const MappingScope scope_385 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_385_entries, 3,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_384_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_384_entries[0], isActive_kcg_bool_kcg_false, &scope_385, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_384_entries[0], isActive_kcg_bool_kcg_true, &scope_390, 1, 2}
};
static const MappingScope scope_384 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_384_entries, 3,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_383_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_384, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_383 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_383_entries, 6,
};

/* TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversions */
static const MappingEntry scope_382_entries[19] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P255_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 17},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P255_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 18},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_383, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P255_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_323, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P255_trackside_int_T_TM), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L1), &_Type_P255_trackside_int_T_TM_Utils, NULL, NULL, &scope_437, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_499), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L209), &_Type_array_int_499_Utils, NULL, NULL, &scope_502, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_1), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L373), &_Type_array_int_1_Utils, NULL, NULL, &scope_477, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 18 */ { MAP_LOCAL, "_L390", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P255_tracksim_compr_TM_conversions, _L390), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 16}
};
static const MappingScope scope_382 = {
  "TM_conversions::C_P255_tracksim_compr/ C_P255_tracksim_compr_TM_conversions",
  scope_382_entries, 19,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_381_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_375_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_375_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_381 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_381_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_380_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_376_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_376_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_380 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_380_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_379_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_377_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_377_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_379 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_379_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_378_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_377_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_377_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_378 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_378_entries, 2,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_377_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_377_entries[0], isActive_kcg_bool_kcg_false, &scope_378, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_377_entries[0], isActive_kcg_bool_kcg_true, &scope_379, 1, 2}
};
static const MappingScope scope_377 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_377_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_376_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_376_entries[0], isActive_kcg_bool_kcg_false, &scope_377, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_376_entries[0], isActive_kcg_bool_kcg_true, &scope_380, 1, 2}
};
static const MappingScope scope_376 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_376_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_375_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_375_entries[0], isActive_kcg_bool_kcg_false, &scope_376, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_375_entries[0], isActive_kcg_bool_kcg_true, &scope_381, 1, 2}
};
static const MappingScope scope_375 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_375_entries, 3,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_374_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_375, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_374 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_374_entries, 6,
};

/* TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversions */
static const MappingEntry scope_373_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 24},
  /* 1 */ { MAP_OUTPUT, "P065_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, P065_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 25},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_374, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P065_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_323, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L1), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_438, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_491), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L209), &_Type_array_int_491_Utils, NULL, NULL, &scope_500, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_9), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L373), &_Type_array_int_9_Utils, NULL, NULL, &scope_501, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 12},
  /* 15 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 20 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L397", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L397), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L398", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L398), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L399", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L399), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 24 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L401", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P065_tracksim_compr_TM_conversions, _L401), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_373 = {
  "TM_conversions::C_P065_tracksim_compr/ C_P065_tracksim_compr_TM_conversions",
  scope_373_entries, 26,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_372_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_366_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_366_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_372 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_372_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_371_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_367_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_367_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_371 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_371_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_370_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_370 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_370_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_369_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_368_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_369 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_369_entries, 2,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_368_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_368_entries[0], isActive_kcg_bool_kcg_false, &scope_369, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_368_entries[0], isActive_kcg_bool_kcg_true, &scope_370, 1, 2}
};
static const MappingScope scope_368 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_368_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_367_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_367_entries[0], isActive_kcg_bool_kcg_false, &scope_368, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_367_entries[0], isActive_kcg_bool_kcg_true, &scope_371, 1, 2}
};
static const MappingScope scope_367 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_367_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_366_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_366_entries[0], isActive_kcg_bool_kcg_false, &scope_367, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_366_entries[0], isActive_kcg_bool_kcg_true, &scope_372, 1, 2}
};
static const MappingScope scope_366 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_366_entries, 3,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_365_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_366, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_365 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_365_entries, 6,
};

/* TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions */
static const MappingEntry scope_364_entries[38] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 36},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 37},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_365, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P041_flatten_sections 1", NULL, sizeof(outC_C_P041_flatten_sections_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_402, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_323, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_321, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_465, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_395), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L209), &_Type_array_int_395_Utils, NULL, NULL, &scope_497, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(P041_trackide_sectionlist_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L368), &_Type_P041_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_464, 1, 22},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_5), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L373), &_Type_array_int_5_Utils, NULL, NULL, &scope_478, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L375", NULL, sizeof(P041_section_int_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L375), &_Type_P041_section_int_T_TM_Utils, NULL, NULL, &scope_462, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_477, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L380", NULL, sizeof(P041_sections_array_flat_T_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L380), &_Type_P041_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_6), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L381), &_Type_array_int_6_Utils, NULL, NULL, &scope_486, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_105), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L384), &_Type_array_int_105_Utils, NULL, NULL, &scope_498, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__9732), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L385), &_Type_array__9732_Utils, NULL, NULL, &scope_463, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__9919), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L386), &_Type_array__9919_Utils, NULL, NULL, &scope_499, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P041_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 35},
  /* 37 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P041_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_364 = {
  "TM_conversions::C_P041_tracksim_compr/ C_P041_tracksim_compr_TM_conversions",
  scope_364_entries, 38,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_363_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_357_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_357_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_363 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_363_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_362_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_358_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_358_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_362 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_362_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_361_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_361 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_361_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_360_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_359_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_360 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_360_entries, 2,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_359_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_359_entries[0], isActive_kcg_bool_kcg_false, &scope_360, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_359_entries[0], isActive_kcg_bool_kcg_true, &scope_361, 1, 2}
};
static const MappingScope scope_359 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_359_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_358_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_358_entries[0], isActive_kcg_bool_kcg_false, &scope_359, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_358_entries[0], isActive_kcg_bool_kcg_true, &scope_362, 1, 2}
};
static const MappingScope scope_358 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_358_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_357_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_357_entries[0], isActive_kcg_bool_kcg_false, &scope_358, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_357_entries[0], isActive_kcg_bool_kcg_true, &scope_363, 1, 2}
};
static const MappingScope scope_357 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_357_entries, 3,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_356_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_357, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_356 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_356_entries, 6,
};

/* TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2 */
static const MappingEntry scope_355_entries[50] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 48},
  /* 1 */ { MAP_OUTPUT, "P003V1_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, P003V1_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 49},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_356, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 2", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_323, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_321, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_467, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_444), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L209), &_Type_array_int_444_Utils, NULL, NULL, &scope_492, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 12 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 13 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L365", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L365), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_486, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 22 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 23 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_24), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L381), &_Type_array_int_24_Utils, NULL, NULL, &scope_493, 1, 23},
  /* 24 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 24},
  /* 25 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_56), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L384), &_Type_array_int_56_Utils, NULL, NULL, &scope_494, 1, 25},
  /* 26 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 27 */ { MAP_LOCAL, "_L388", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L388), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 28 */ { MAP_LOCAL, "_L389", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L389), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 29 */ { MAP_LOCAL, "_L390", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L390), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 30 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 31 */ { MAP_LOCAL, "_L392", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L392), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 32 */ { MAP_LOCAL, "_L393", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L393), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 33 */ { MAP_LOCAL, "_L394", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L394), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L395", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L395), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 35 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 36 */ { MAP_LOCAL, "_L397", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L397), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 37 */ { MAP_LOCAL, "_L398", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L398), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 38 */ { MAP_LOCAL, "_L399", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L399), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 39 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 40 */ { MAP_LOCAL, "_L401", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L401), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 41 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 42 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L403), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 43 */ { MAP_LOCAL, "_L404", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L404), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 43},
  /* 44 */ { MAP_LOCAL, "_L407", NULL, sizeof(array_int_18), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L407), &_Type_array_int_18_Utils, NULL, NULL, &scope_495, 1, 44},
  /* 45 */ { MAP_LOCAL, "_L408", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L408), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 45},
  /* 46 */ { MAP_LOCAL, "_L409", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L409), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 46},
  /* 47 */ { MAP_LOCAL, "_L412", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, _L412), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 47},
  /* 48 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 49 */ { MAP_LOCAL, "sections", NULL, sizeof(P003V1_trackide_sectionlist_T_TM_baseline2), offsetof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2, sections), &_Type_P003V1_trackide_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_466, 1, 4}
};
static const MappingScope scope_355 = {
  "TM_conversions_baseline2::C_P003V1_tracksim_compr/ C_P003V1_tracksim_compr_TM_conversions_baseline2",
  scope_355_entries, 50,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_354_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_14_IfBlock1), &_Type_kcg_bool_Utils, &scope_348_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_354 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_354_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_353_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_349_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_349_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_353 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_353_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_352_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_11_IfBlock1), &_Type_Q_DIR_Utils, &scope_350_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_350_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_352 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_352_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_351_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_350_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_350_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_351 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_351_entries, 2,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_350_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_350_entries[0], isActive_kcg_bool_kcg_false, &scope_351, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_350_entries[0], isActive_kcg_bool_kcg_true, &scope_352, 1, 2}
};
static const MappingScope scope_350 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_350_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_349_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _2_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_349_entries[0], isActive_kcg_bool_kcg_false, &scope_350, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_349_entries[0], isActive_kcg_bool_kcg_true, &scope_353, 1, 2}
};
static const MappingScope scope_349 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_349_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_348_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_348_entries[0], isActive_kcg_bool_kcg_false, &scope_349, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_348_entries[0], isActive_kcg_bool_kcg_true, &scope_354, 1, 2}
};
static const MappingScope scope_348 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_348_entries, 3,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_347_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_348, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_347 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2TM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_347_entries, 6,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2 */
static const MappingEntry scope_346_entries[39] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 34},
  /* 1 */ { MAP_OUTPUT, "P027V1_body_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_body_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 35},
  /* 2 */ { MAP_OUTPUT, "P027V1_sections", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, P027V1_sections), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_445, 1, 36},
  /* 3 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_347, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_323, 1, 1},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 3", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, Context_3), NULL, NULL, NULL, &scope_323, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_494), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L209), &_Type_array_int_494_Utils, NULL, NULL, &scope_485, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 19 */ { MAP_LOCAL, "_L367", NULL, sizeof(P027V1_trackside_sectionlist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L367), &_Type_P027V1_trackside_sectionlist_T_TM_baseline2_Utils, NULL, NULL, &scope_446, 1, 21},
  /* 20 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L369", NULL, sizeof(P027V1_trackside_qdifflist_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L369), &_Type_P027V1_trackside_qdifflist_T_TM_baseline2_Utils, NULL, NULL, &scope_441, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 23 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 24 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_6), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L373), &_Type_array_int_6_Utils, NULL, NULL, &scope_486, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 23},
  /* 26 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__9629), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L385), &_Type_array__9629_Utils, NULL, NULL, &scope_445, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__9883), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L386), &_Type_array__9883_Utils, NULL, NULL, &scope_487, 1, 24},
  /* 28 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 29 */ { MAP_LOCAL, "_L391", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L391), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L394", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L394), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 28},
  /* 31 */ { MAP_LOCAL, "_L396", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L396), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 32 */ { MAP_LOCAL, "_L400", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L400), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 33 */ { MAP_LOCAL, "_L402", NULL, sizeof(Q_DIR), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L402), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 31},
  /* 34 */ { MAP_LOCAL, "_L403", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L403), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L405", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, _L405), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 33},
  /* 36 */ { MAP_OUTPUT, "meta_first_section", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, meta_first_section), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 37 */ { MAP_LOCAL, "n_iter_k", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 38 */ { MAP_OUTPUT, "n_iter_k_out", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2, n_iter_k_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37}
};
static const MappingScope scope_346 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_compr_body/ C_P027V1_tracksim_compr_body_TM_conversions_baseline2",
  scope_346_entries, 39,
};

/* TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal */
static const MappingEntry scope_345_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 5}
};
static const MappingScope scope_345 = {
  "TM_lib_internal::SEND_WriteMessageHeader/ SEND_WriteMessageHeader_TM_lib_internal",
  scope_345_entries, 26,
};

/* TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2 */
static const MappingEntry scope_344_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "Packets_Out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Packets_Out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 20},
  /* 1 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_one_section 2", NULL, sizeof(outC_C_P027V1_tracksim_compr_o_TM_conversions_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_2), NULL, NULL, NULL, &scope_401, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, Context_1), NULL, NULL, NULL, &scope_345, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L431", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L431), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L432", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L432), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L433", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L433), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L434", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L434), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L435", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L435), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L436", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L436), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L437", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L437), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L438", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L438), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L439", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L439), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L440", NULL, sizeof(P027V1_section_int_T_TM_baseline2), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L440), &_Type_P027V1_section_int_T_TM_baseline2_Utils, NULL, NULL, &scope_442, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L441", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L441), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L442", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L442), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L443", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L443), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 14},
  /* 17 */ { MAP_LOCAL, "_L446", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L446), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L447", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L447), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L448", NULL, sizeof(kcg_int), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, _L448), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_OUTPUT, "cont", NULL, sizeof(kcg_bool), offsetof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2, cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19}
};
static const MappingScope scope_344 = {
  "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections/ C_P027V1_tracksim_merge_s_TM_conversions_baseline2",
  scope_344_entries, 21,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_343_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_337_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_337_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_343 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_343_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_342_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_338_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_338_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_342 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_342_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_341_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_339_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_339_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_341 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_341_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_340_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_339_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_339_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_340 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_340_entries, 2,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_339_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_339_entries[0], isActive_kcg_bool_kcg_false, &scope_340, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_339_entries[0], isActive_kcg_bool_kcg_true, &scope_341, 1, 2}
};
static const MappingScope scope_339 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_339_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_338_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_338_entries[0], isActive_kcg_bool_kcg_false, &scope_339, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_338_entries[0], isActive_kcg_bool_kcg_true, &scope_342, 1, 2}
};
static const MappingScope scope_338 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_338_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_337_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_337_entries[0], isActive_kcg_bool_kcg_false, &scope_338, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_337_entries[0], isActive_kcg_bool_kcg_true, &scope_343, 1, 2}
};
static const MappingScope scope_337 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_337_entries, 3,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_336_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_337, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_336 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_336_entries, 6,
};

/* TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions */
static const MappingEntry scope_335_entries[37] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 35},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 36},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_336, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P021_flatten_sections 1", NULL, sizeof(outC_C_P021_flatten_sections_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_400, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_323, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_321, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_454, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_396), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L209), &_Type_array_int_396_Utils, NULL, NULL, &scope_482, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L369", NULL, sizeof(P021_trackide_sectionlist_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L369), &_Type_P021_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_453, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 23 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_431, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L375", NULL, sizeof(P021_section_int_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L375), &_Type_P021_section_int_T_TM_Utils, NULL, NULL, &scope_449, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_477, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L380", NULL, sizeof(P021_sections_array_flat_T_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L380), &_Type_P021_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_451, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_478, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_104), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L384), &_Type_array_int_104_Utils, NULL, NULL, &scope_483, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__9665), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L385), &_Type_array__9665_Utils, NULL, NULL, &scope_452, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__9874), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L386), &_Type_array__9874_Utils, NULL, NULL, &scope_484, 1, 33},
  /* 34 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 35 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P021_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 34},
  /* 36 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P021_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_335 = {
  "TM_conversions::C_P021_tracksim_compr/ C_P021_tracksim_compr_TM_conversions",
  scope_335_entries, 37,
};

/* TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal */
static const MappingEntry scope_334_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L1), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_456, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(array_int_7), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L2), &_Type_array_int_7_Utils, NULL, NULL, &scope_455, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_OUTPUT, "section_arrays", NULL, sizeof(P005_section_array_T_TM), offsetof(outC_C_P005_fs_struct_to_array_TM_lib_internal, section_arrays), &_Type_P005_section_array_T_TM_Utils, NULL, NULL, &scope_455, 1, 9}
};
static const MappingScope scope_334 = {
  "TM_lib_internal::C_P005_fs_struct_to_array/ C_P005_fs_struct_to_array_TM_lib_internal",
  scope_334_entries, 10,
};

/* TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal */
static const MappingEntry scope_333_entries[10] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L1), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_458, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L154", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L154), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(P005_OBU_sectionlist_array_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L2), &_Type_P005_OBU_sectionlist_array_T_TM_Utils, NULL, NULL, &scope_457, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L7), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_458, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 9 */ { MAP_OUTPUT, "flat", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_fs_flatten_array_TM_lib_internal, flat), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_458, 1, 9}
};
static const MappingScope scope_333 = {
  "TM_lib_internal::C_P005_fs_flatten_array/ C_P005_fs_flatten_array_TM_lib_internal",
  scope_333_entries, 10,
};

/* TM_conversions::CAST_Int_to_NID_MESSAGE/ CAST_Int_to_NID_MESSAGE_TM_conversions */
static const MappingEntry scope_332_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_message", NULL, sizeof(NID_MESSAGE), offsetof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions, nid_message), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_332 = {
  "TM_conversions::CAST_Int_to_NID_MESSAGE/ CAST_Int_to_NID_MESSAGE_TM_conversions",
  scope_332_entries, 6,
};

/* TM_conversions::CAST_Int_to_L_MESSAGE/ CAST_Int_to_L_MESSAGE_TM_conversions */
static const MappingEntry scope_331_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "l_message", NULL, sizeof(L_MESSAGE), offsetof(outC_CAST_Int_to_L_MESSAGE_TM_conversions, l_message), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_331 = {
  "TM_conversions::CAST_Int_to_L_MESSAGE/ CAST_Int_to_L_MESSAGE_TM_conversions",
  scope_331_entries, 6,
};

/* TM_trackside::Write_P015/ Write_P015_TM_trackside */
static const MappingEntry scope_330_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P015_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P015_tracksim_compr 1", NULL, sizeof(outC_C_P015_tracksim_compr_TM_conversions), offsetof(outC_Write_P015_TM_trackside, Context_1), NULL, NULL, NULL, &scope_391, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P015_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P015_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_299, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_Write_P015_TM_trackside, _L1), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_436, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P015_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P015_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P015_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P015_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 13}
};
static const MappingScope scope_330 = {
  "TM_trackside::Write_P015/ Write_P015_TM_trackside",
  scope_330_entries, 17,
};

/* TM_trackside::Write_P255/ Write_P255_TM_trackside */
static const MappingEntry scope_329_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P255_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P255_tracksim_compr 1", NULL, sizeof(outC_C_P255_tracksim_compr_TM_conversions), offsetof(outC_Write_P255_TM_trackside, Context_1), NULL, NULL, NULL, &scope_382, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P255_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P255_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_299, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P255_trackside_int_T_TM), offsetof(outC_Write_P255_TM_trackside, _L1), &_Type_P255_trackside_int_T_TM_Utils, NULL, NULL, &scope_437, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P255_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P255_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P255_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P255_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 13}
};
static const MappingScope scope_329 = {
  "TM_trackside::Write_P255/ Write_P255_TM_trackside",
  scope_329_entries, 17,
};

/* TM_trackside::Write_P065/ Write_P065_TM_trackside */
static const MappingEntry scope_328_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P065_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P065_tracksim_compr 1", NULL, sizeof(outC_C_P065_tracksim_compr_TM_conversions), offsetof(outC_Write_P065_TM_trackside, Context_1), NULL, NULL, NULL, &scope_373, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P065_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P065_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_299, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_Write_P065_TM_trackside, _L1), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_438, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P065_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P065_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P065_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P065_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 13}
};
static const MappingScope scope_328 = {
  "TM_trackside::Write_P065/ Write_P065_TM_trackside",
  scope_328_entries, 17,
};

/* TM_trackside::Write_P041/ Write_P041_TM_trackside */
static const MappingEntry scope_327_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P041_tracksim_compr 1", NULL, sizeof(outC_C_P041_tracksim_compr_TM_conversions), offsetof(outC_Write_P041_TM_trackside, Context_1), NULL, NULL, NULL, &scope_364, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P041_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_299, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Write_P041_TM_trackside, _L1), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_465, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P041_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P041_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P041_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 13}
};
static const MappingScope scope_327 = {
  "TM_trackside::Write_P041/ Write_P041_TM_trackside",
  scope_327_entries, 17,
};

/* TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2 */
static const MappingEntry scope_326_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P003V1_tracksim_compr 1", NULL, sizeof(outC_C_P003V1_tracksim_compr_TM_conversions_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_355, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_299, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L1), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_467, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P003V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 13}
};
static const MappingScope scope_326 = {
  "TM_trackside_baseline2::Write_P003V1/ Write_P003V1_TM_trackside_baseline2",
  scope_326_entries, 17,
};

/* TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2 */
static const MappingEntry scope_325_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 1 */ { MAP_OUTPUT, "PacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, PacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 25},
  /* 2 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_compr_body 1", NULL, sizeof(outC_C_P027V1_tracksim_compr_body_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, Context_1), NULL, NULL, NULL, &scope_346, 1, 3},
  /* 3 */ { MAP_INSTANCE, "TM_conversions_baseline2::C_P027V1_tracksim_merge_sections 1", &iter_foldwi_33, sizeof(outC_C_P027V1_tracksim_merge_s_TM_conversions_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _3_Context_1), NULL, NULL, NULL, &scope_344, 1, 0},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteMessageHeader 1", NULL, sizeof(outC_SEND_WriteMessageHeader_TM_lib_internal), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _1_Context_1), NULL, NULL, NULL, &scope_345, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L1), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 14},
  /* 18 */ { MAP_LOCAL, "_L45", NULL, sizeof(_2_P027V1_OBU_sectionlist_int_T_TM_baseline2), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L45), &_Type__2_P027V1_OBU_sectionlist_int_T_TM_baseline2_Utils, NULL, NULL, &scope_445, 1, 16},
  /* 19 */ { MAP_LOCAL, "_L46", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L46), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 20 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L50), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 21 */ { MAP_LOCAL, "_L51", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L51), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 19},
  /* 22 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 23 */ { MAP_LOCAL, "_L54", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L54), &_Type_array_int_33_Utils, NULL, NULL, &scope_491, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L55", NULL, sizeof(array_int_33), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L55), &_Type_array_int_33_Utils, NULL, NULL, &scope_491, 1, 22},
  /* 25 */ { MAP_LOCAL, "_L56", NULL, sizeof(kcg_int), offsetof(outC_Write_P027V1_TM_trackside_baseline2, _L56), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23}
};
static const MappingScope scope_325 = {
  "TM_trackside_baseline2::Write_P027V1/ Write_P027V1_TM_trackside_baseline2",
  scope_325_entries, 26,
};

/* TM_trackside::Write_P021/ Write_P021_TM_trackside */
static const MappingEntry scope_324_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P021_tracksim_compr 1", NULL, sizeof(outC_C_P021_tracksim_compr_TM_conversions), offsetof(outC_Write_P021_TM_trackside, Context_1), NULL, NULL, NULL, &scope_335, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P021_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_299, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Write_P021_TM_trackside, _L1), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_454, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P021_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P021_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P021_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 13}
};
static const MappingScope scope_324 = {
  "TM_trackside::Write_P021/ Write_P021_TM_trackside",
  scope_324_entries, 17,
};

/* TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal */
static const MappingEntry scope_323_entries[19] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 7 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 11 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_PACKET), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L3), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 2},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 18 */ { MAP_OUTPUT, "nid_packet_meta", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal, nid_packet_meta), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 18}
};
static const MappingScope scope_323 = {
  "TM_lib_internal::T_Build_Metadata_Packet_ID/ T_Build_Metadata_Packet_ID_TM_lib_internal",
  scope_323_entries, 19,
};

/* TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal */
static const MappingEntry scope_322_entries[8] = {
  /* 0 */ { MAP_OUTPUT, "Flattened", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Flattened), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_458, 1, 7},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_flatten_array 2", &iter_foldi_231, sizeof(outC_C_P005_fs_flatten_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _1_Context_2), NULL, NULL, NULL, &scope_333, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_fs_struct_to_array 2", &iter_map_33, sizeof(outC_C_P005_fs_struct_to_array_TM_lib_internal), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, Context_2), NULL, NULL, NULL, &scope_334, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L74", NULL, sizeof(array_int_7_33), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L74), &_Type_array_int_7_33_Utils, NULL, NULL, &scope_457, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L75", NULL, sizeof(P005_OBU_sectionlist_int_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L75), &_Type_P005_OBU_sectionlist_int_T_TM_Utils, NULL, NULL, &scope_459, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L76", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L76), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_458, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L78", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L78), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_458, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L80", NULL, sizeof(array_int_7_33_231), offsetof(outC_C_P005_flatten_sections_TM_lib_internal, _L80), &_Type_array_int_7_33_231_Utils, NULL, NULL, &scope_475, 1, 6}
};
static const MappingScope scope_322 = {
  "TM_lib_internal::C_P005_flatten_sections/ C_P005_flatten_sections_TM_lib_internal",
  scope_322_entries, 8,
};

/* TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal */
static const MappingEntry scope_321_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_OUTPUT, "p_size", NULL, sizeof(kcg_int), offsetof(outC_T_DeterminePacketSizeInt_TM_lib_internal, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_321 = {
  "TM_lib_internal::T_DeterminePacketSizeInt/ T_DeterminePacketSizeInt_TM_lib_internal",
  scope_321_entries, 6,
};

/* TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal */
static const MappingEntry scope_320_entries[15] = {
  /* 0 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, DataOut), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L3), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L7), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseDataElement_TM_lib_internal, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_320 = {
  "TM_lib_internal::SEND_WriteBaliseDataElement/ SEND_WriteBaliseDataElement_TM_lib_internal",
  scope_320_entries, 15,
};

/* TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal */
static const MappingEntry scope_319_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "Acc", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, Acc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Cont", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, Cont), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_bool), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L17), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L2), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L27), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_PACKET), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L29), &_Type_NID_PACKET_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_FindSlot_TM_lib_internal, _L3), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 2}
};
static const MappingScope scope_319 = {
  "TM_lib_internal::SEND_FindSlot/ SEND_FindSlot_TM_lib_internal",
  scope_319_entries, 10,
};

/* TM_radio_messages::C_M015_int_to_header/ C_M015_int_to_header_TM_radio_messages */
static const MappingEntry scope_318_entries[21] = {
  /* 0 */ { MAP_OUTPUT, "Message_Header_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M015_int_to_header_TM_radio_messages, Message_Header_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 20},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_331, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_M015_int_to_header_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_332, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_261, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_int_T_TM_radio_messages), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L1), &_Type_M_015_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_429, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L28), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L34", NULL, sizeof(L_MESSAGE), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L34), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 19},
  /* 14 */ { MAP_LOCAL, "_L35", NULL, sizeof(T_TRAIN), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L35), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L36", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L36), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 20 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_M015_int_to_header_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_318 = {
  "TM_radio_messages::C_M015_int_to_header/ C_M015_int_to_header_TM_radio_messages",
  scope_318_entries, 21,
};

/* TM_radio_messages::C_M003_int__to_header/ C_M003_int__to_header_TM_radio_messages */
static const MappingEntry scope_317_entries[16] = {
  /* 0 */ { MAP_OUTPUT, "Message_Header_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_radio_messages, Message_Header_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 15},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_L_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_L_MESSAGE_TM_conversions), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_331, 1, 0},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_MESSAGE 1", NULL, sizeof(outC_CAST_Int_to_NID_MESSAGE_TM_conversions), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_332, 1, 1},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_M003_int__to_header_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_261, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_int_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L1), &_Type_M_003_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L19), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(L_MESSAGE), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L24), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L25), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(T_TRAIN), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L26), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_M003_int__to_header_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_317 = {
  "TM_radio_messages::C_M003_int__to_header/ C_M003_int__to_header_TM_radio_messages",
  scope_317_entries, 16,
};

/* MessageLibBaseline2::Send_P015/ Send_P015_MessageLibBaseline2 */
static const MappingEntry scope_316_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg33", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P015 1", NULL, sizeof(outC_Write_P015_TM_trackside), offsetof(outC_Send_P015_MessageLibBaseline2, Context_1), NULL, &scope_316_entries[0], isActive_kcg_bool_kcg_true, &scope_330, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P015_trackside_int_T_TM), offsetof(outC_Send_P015_MessageLibBaseline2, _L4), &_Type_P015_trackside_int_T_TM_Utils, NULL, NULL, &scope_436, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P015_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P015_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_316 = {
  "MessageLibBaseline2::Send_P015/ Send_P015_MessageLibBaseline2",
  scope_316_entries, 9,
};

/* MessageLibBaseline2::Send_P255/ Send_P255_MessageLibBaseline2 */
static const MappingEntry scope_315_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg32", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "TM_trackside::Write_P255 1", NULL, sizeof(outC_Write_P255_TM_trackside), offsetof(outC_Send_P255_MessageLibBaseline2, Context_1), NULL, &scope_315_entries[0], isActive_kcg_bool_kcg_true, &scope_329, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P255_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(P255_trackside_int_T_TM), offsetof(outC_Send_P255_MessageLibBaseline2, _L4), &_Type_P255_trackside_int_T_TM_Utils, NULL, NULL, &scope_437, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P255_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P255_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_OUTPUT, "packet_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P255_MessageLibBaseline2, packet_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8}
};
static const MappingScope scope_315 = {
  "MessageLibBaseline2::Send_P255/ Send_P255_MessageLibBaseline2",
  scope_315_entries, 9,
};

/* MessageLibBaseline2::Send_P065/ Send_P065_MessageLibBaseline2 */
static const MappingEntry scope_314_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg31", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P065 1", NULL, sizeof(outC_Write_P065_TM_trackside), offsetof(outC_Send_P065_MessageLibBaseline2, Context_1), NULL, &scope_314_entries[0], isActive_kcg_bool_kcg_true, &scope_328, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P065_trackside_int_T_TM), offsetof(outC_Send_P065_MessageLibBaseline2, _L4), &_Type_P065_trackside_int_T_TM_Utils, NULL, NULL, &scope_438, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P065_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P065_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_314 = {
  "MessageLibBaseline2::Send_P065/ Send_P065_MessageLibBaseline2",
  scope_314_entries, 9,
};

/* MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2 */
static const MappingEntry scope_313_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg30", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P041 1", NULL, sizeof(outC_Write_P041_TM_trackside), offsetof(outC_Send_P041_MessageLibBaseline2, Context_1), NULL, &scope_313_entries[0], isActive_kcg_bool_kcg_true, &scope_327, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P041_trackside_int_T_TM), offsetof(outC_Send_P041_MessageLibBaseline2, _L4), &_Type_P041_trackside_int_T_TM_Utils, NULL, NULL, &scope_465, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P041_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P041_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_313 = {
  "MessageLibBaseline2::Send_P041/ Send_P041_MessageLibBaseline2",
  scope_313_entries, 9,
};

/* MessageLibBaseline2::Send_P003V1/ Send_P003V1_MessageLibBaseline2 */
static const MappingEntry scope_312_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg29", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P003V1 1", NULL, sizeof(outC_Write_P003V1_TM_trackside_baseline2), offsetof(outC_Send_P003V1_MessageLibBaseline2, Context_1), NULL, &scope_312_entries[0], isActive_kcg_bool_kcg_true, &scope_326, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P003V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L4), &_Type_P003V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_467, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P003V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_312 = {
  "MessageLibBaseline2::Send_P003V1/ Send_P003V1_MessageLibBaseline2",
  scope_312_entries, 9,
};

/* MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2 */
static const MappingEntry scope_311_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg28", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside_baseline2::Write_P027V1 1", NULL, sizeof(outC_Write_P027V1_TM_trackside_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, Context_1), NULL, &scope_311_entries[0], isActive_kcg_bool_kcg_true, &scope_325, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P027V1_trackside_int_T_TM_baseline2), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L4), &_Type_P027V1_trackside_int_T_TM_baseline2_Utils, NULL, NULL, &scope_447, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P027V1_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_311 = {
  "MessageLibBaseline2::Send_P027V1/ Send_P027V1_MessageLibBaseline2",
  scope_311_entries, 9,
};

/* MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2 */
static const MappingEntry scope_310_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg27", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P021 1", NULL, sizeof(outC_Write_P021_TM_trackside), offsetof(outC_Send_P021_MessageLibBaseline2, Context_1), NULL, &scope_310_entries[0], isActive_kcg_bool_kcg_true, &scope_324, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P021_trackside_int_T_TM), offsetof(outC_Send_P021_MessageLibBaseline2, _L4), &_Type_P021_trackside_int_T_TM_Utils, NULL, NULL, &scope_454, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P021_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P021_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_310 = {
  "MessageLibBaseline2::Send_P021/ Send_P021_MessageLibBaseline2",
  scope_310_entries, 9,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_309_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_15_IfBlock1), &_Type_Q_DIR_Utils, &scope_303_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_16_IfBlock1), &_Type_kcg_bool_Utils, &scope_303_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_309 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_309_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_308_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L3_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_304_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_304_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_308 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_308_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_307_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_13_IfBlock1), &_Type_Q_DIR_Utils, &scope_305_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_305_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_307 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_307_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_306_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_305_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L2_1_IfBlock1), &_Type_Q_DIR_Utils, &scope_305_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_306 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_306_entries, 2,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_305_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_305_entries[0], isActive_kcg_bool_kcg_false, &scope_306, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_305_entries[0], isActive_kcg_bool_kcg_true, &scope_307, 1, 2}
};
static const MappingScope scope_305 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_305_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_304_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _4_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_304_entries[0], isActive_kcg_bool_kcg_false, &scope_305, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_304_entries[0], isActive_kcg_bool_kcg_true, &scope_308, 1, 2}
};
static const MappingScope scope_304 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_304_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_303_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_303_entries[0], isActive_kcg_bool_kcg_false, &scope_304, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_303_entries[0], isActive_kcg_bool_kcg_true, &scope_309, 1, 2}
};
static const MappingScope scope_303 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_303_entries, 3,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_302_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_303, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_302 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversionsTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_302_entries, 6,
};

/* TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions */
static const MappingEntry scope_301_entries[41] = {
  /* 0 */ { MAP_OUTPUT, "Header", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Header), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 39},
  /* 1 */ { MAP_OUTPUT, "P005_compressed", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, P005_compressed), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 40},
  /* 2 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_302, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::C_P005_flatten_sections 1", NULL, sizeof(outC_C_P005_flatten_sections_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_322, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::T_Build_Metadata_Packet_ID 1", NULL, sizeof(outC_T_Build_Metadata_Packet_ID_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, Context_1), NULL, NULL, NULL, &scope_323, 1, 3},
  /* 5 */ { MAP_INSTANCE, "TM_lib_internal::T_DeterminePacketSizeInt 1", NULL, sizeof(outC_T_DeterminePacketSizeInt_TM_lib_internal), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_321, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_461, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L204", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L204), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L206", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L206), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L209", NULL, sizeof(array_int_264), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L209), &_Type_array_int_264_Utils, NULL, NULL, &scope_476, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L212", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L212), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L213", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L213), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L214", NULL, sizeof(kcg_bool), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L214), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L215", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L215), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L216), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L217), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L218", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L218), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L219", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L219), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 18 */ { MAP_LOCAL, "_L336", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L336), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 19 */ { MAP_LOCAL, "_L356", NULL, sizeof(Q_DIR), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L356), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L365", NULL, sizeof(P005_trackide_sectionlist_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L365), &_Type_P005_trackide_sectionlist_T_TM_Utils, NULL, NULL, &scope_460, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L366", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L366), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 22 */ { MAP_LOCAL, "_L367", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L367), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L368", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L368), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L369", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L369), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 25 */ { MAP_LOCAL, "_L370", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L370), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 26 */ { MAP_LOCAL, "_L371", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L371), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 27 */ { MAP_LOCAL, "_L373", NULL, sizeof(array_int_4), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L373), &_Type_array_int_4_Utils, NULL, NULL, &scope_431, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L375", NULL, sizeof(P005_section_int_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L375), &_Type_P005_section_int_T_TM_Utils, NULL, NULL, &scope_456, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L376", NULL, sizeof(array_int_1), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L376), &_Type_array_int_1_Utils, NULL, NULL, &scope_477, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L378", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L378), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 31 */ { MAP_LOCAL, "_L379", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L379), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 32 */ { MAP_LOCAL, "_L380", NULL, sizeof(P005_sections_array_flat_T_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L380), &_Type_P005_sections_array_flat_T_TM_Utils, NULL, NULL, &scope_458, 1, 31},
  /* 33 */ { MAP_LOCAL, "_L381", NULL, sizeof(array_int_5), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L381), &_Type_array_int_5_Utils, NULL, NULL, &scope_478, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L383", NULL, sizeof(array_int_500), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L383), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 33},
  /* 35 */ { MAP_LOCAL, "_L384", NULL, sizeof(array_int_236), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L384), &_Type_array_int_236_Utils, NULL, NULL, &scope_479, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L385", NULL, sizeof(array__9703), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L385), &_Type_array__9703_Utils, NULL, NULL, &scope_459, 1, 36},
  /* 37 */ { MAP_LOCAL, "_L386", NULL, sizeof(array__9862), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L386), &_Type_array__9862_Utils, NULL, NULL, &scope_480, 1, 35},
  /* 38 */ { MAP_LOCAL, "_L387", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L387), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 39 */ { MAP_LOCAL, "_L388", NULL, sizeof(nid_packet_meta_TM), offsetof(outC_C_P005_tracksim_compr_TM_conversions, _L388), &_Type_nid_packet_meta_TM_Utils, NULL, NULL, NULL, 1, 38},
  /* 40 */ { MAP_LOCAL, "p_size", NULL, sizeof(kcg_int), offsetof(outC_C_P005_tracksim_compr_TM_conversions, p_size), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_301 = {
  "TM_conversions::C_P005_tracksim_compr/ C_P005_tracksim_compr_TM_conversions",
  scope_301_entries, 41,
};

/* TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal */
static const MappingEntry scope_300_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "DataOut", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, DataOut), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 1 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseDataElement 1", &iter_mapwi_500, sizeof(outC_SEND_WriteBaliseDataElement_TM_lib_internal), offsetof(outC_SEND_MessageData_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_320, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L1), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L402", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L402), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L403", NULL, sizeof(kcg_bool), offsetof(outC_SEND_MessageData_TM_lib_internal, _L403), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L404", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_SEND_MessageData_TM_lib_internal, _L404), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L406", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L406), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L407", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L407), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L408", NULL, sizeof(kcg_int), offsetof(outC_SEND_MessageData_TM_lib_internal, _L408), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L413", NULL, sizeof(array_int_500_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L413), &_Type_array_int_500_500_Utils, NULL, NULL, &scope_474, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L414", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L414), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L415", NULL, sizeof(array_int_500), offsetof(outC_SEND_MessageData_TM_lib_internal, _L415), &_Type_array_int_500_Utils, NULL, NULL, &scope_419, 1, 10}
};
static const MappingScope scope_300 = {
  "TM_lib_internal::SEND_MessageData/ SEND_MessageData_TM_lib_internal",
  scope_300_entries, 12,
};

/* TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal */
static const MappingEntry scope_299_entries[26] = {
  /* 0 */ { MAP_OUTPUT, "HeadersOut", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, HeadersOut), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 23},
  /* 1 */ { MAP_OUTPUT, "NewEndAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewEndAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 2 */ { MAP_OUTPUT, "NewStartAddr", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, NewStartAddr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 24},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_FindSlot 1", &iter_foldw_30, sizeof(outC_SEND_FindSlot_TM_lib_internal), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, Context_1), NULL, NULL, NULL, &scope_319, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L1), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L16), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L18), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L23", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L23), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L24", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L24), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 11},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 22},
  /* 12 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L31), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L32), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 18 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 19 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 20 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L44", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L44), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 21},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L8), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal, _L9), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 5}
};
static const MappingScope scope_299 = {
  "TM_lib_internal::SEND_WriteBaliseMessageHeader/ SEND_WriteBaliseMessageHeader_TM_lib_internal",
  scope_299_entries, 26,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003/ SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_298_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_277, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_316, 1, 5},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_310, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_311, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_314, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_315, 1, 4},
  /* 6 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10}
};
static const MappingScope scope_298 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003/ SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_298_entries, 14,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003/ SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_297_entries[16] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_277, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_316, 1, 5},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_310, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_311, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_314, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 2", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_2), NULL, NULL, NULL, &scope_314, 1, 6},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_315, 1, 4},
  /* 7 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 15},
  /* 8 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L33", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L33), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 14},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 11}
};
static const MappingScope scope_297 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003/ SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_297_entries, 16,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00230_7_M003/ _5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_296_entries[14] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_277, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_316, 1, 5},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_310, 1, 0},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_311, 1, 1},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_314, 1, 3},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_315, 1, 4},
  /* 6 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 13},
  /* 7 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 11 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 13 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10}
};
static const MappingScope scope_296 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00230_7_M003/ _5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_296_entries, 14,
};

/* MessageLibBaseline2::Send_M015_JRU/ Send_M015_JRU_MessageLibBaseline2 */
static const MappingEntry scope_295_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, Message_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_M015_int_to_header 1", NULL, sizeof(outC_C_M015_int_to_header_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, Context_1), NULL, NULL, NULL, &scope_318, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_int_T_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, _L1), &_Type_M_015_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_429, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M015_JRU_MessageLibBaseline2, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 2}
};
static const MappingScope scope_295 = {
  "MessageLibBaseline2::Send_M015_JRU/ Send_M015_JRU_MessageLibBaseline2",
  scope_295_entries, 4,
};

/* RadioLib::No_Radio_Packets/ No_Radio_Packets_RadioLib */
static const MappingEntry scope_294_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Radio_Packets_RadioLib, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_No_Radio_Packets_RadioLib, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0}
};
static const MappingScope scope_294 = {
  "RadioLib::No_Radio_Packets/ No_Radio_Packets_RadioLib",
  scope_294_entries, 2,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003/ SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_293_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P003V1 1", NULL, sizeof(outC_Send_P003V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_312, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_277, 1, 3},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_316, 1, 7},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_310, 1, 0},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_311, 1, 1},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P041 1", NULL, sizeof(outC_Send_P041_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_313, 1, 4},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_314, 1, 5},
  /* 7 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _7_Context_1), NULL, NULL, NULL, &scope_315, 1, 6},
  /* 8 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 17},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 14}
};
static const MappingScope scope_293 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003/ SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_293_entries, 18,
};

/* MessageLibBaseline2::Send_M003_JRU/ Send_M003_JRU_MessageLibBaseline2 */
static const MappingEntry scope_292_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, Message_Out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 3},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_M003_int__to_header 1", NULL, sizeof(outC_C_M003_int__to_header_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, Context_1), NULL, NULL, NULL, &scope_317, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_int_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, _L1), &_Type_M_003_int_T_TM_radio_messages_Utils, NULL, NULL, &scope_430, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Send_M003_JRU_MessageLibBaseline2, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 2}
};
static const MappingScope scope_292 = {
  "MessageLibBaseline2::Send_M003_JRU/ Send_M003_JRU_MessageLibBaseline2",
  scope_292_entries, 4,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003/ SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_291_entries[18] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P003V1 1", NULL, sizeof(outC_Send_P003V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_312, 1, 2},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_277, 1, 3},
  /* 2 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P015 1", NULL, sizeof(outC_Send_P015_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_316, 1, 7},
  /* 3 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P021 1", NULL, sizeof(outC_Send_P021_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_310, 1, 0},
  /* 4 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P027V1 1", NULL, sizeof(outC_Send_P027V1_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_311, 1, 1},
  /* 5 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P041 1", NULL, sizeof(outC_Send_P041_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_313, 1, 4},
  /* 6 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P065 1", NULL, sizeof(outC_Send_P065_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_314, 1, 5},
  /* 7 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P255 1", NULL, sizeof(outC_Send_P255_MessageLibBaseline2), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _7_Context_1), NULL, NULL, NULL, &scope_315, 1, 6},
  /* 8 */ { MAP_OUTPUT, "Radio_packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Radio_packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 17},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 12 */ { MAP_LOCAL, "_L32", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L32), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 13},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 14}
};
static const MappingScope scope_291 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003/ SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_291_entries, 18,
};

/* TM_trackside::Write_P005/ Write_P005_TM_trackside */
static const MappingEntry scope_290_entries[17] = {
  /* 0 */ { MAP_OUTPUT, "Error", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, Error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 1 */ { MAP_OUTPUT, "RadioPacketsOut", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, RadioPacketsOut), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 16},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::C_P005_tracksim_compr 1", NULL, sizeof(outC_C_P005_tracksim_compr_TM_conversions), offsetof(outC_Write_P005_TM_trackside, Context_1), NULL, NULL, NULL, &scope_301, 1, 2},
  /* 3 */ { MAP_INSTANCE, "TM_lib_internal::SEND_MessageData 1", NULL, sizeof(outC_SEND_MessageData_TM_lib_internal), offsetof(outC_Write_P005_TM_trackside, _2_Context_1), NULL, NULL, NULL, &scope_300, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_lib_internal::SEND_WriteBaliseMessageHeader 1", NULL, sizeof(outC_SEND_WriteBaliseMessageHeader_TM_lib_internal), offsetof(outC_Write_P005_TM_trackside, _1_Context_1), NULL, NULL, NULL, &scope_299, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L1", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Write_P005_TM_trackside, _L1), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_461, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L10), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), offsetof(outC_Write_P005_TM_trackside, _L18), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Write_P005_TM_trackside, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L39), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L4), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 4},
  /* 12 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L40), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 10},
  /* 13 */ { MAP_LOCAL, "_L41", NULL, sizeof(Metadata_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L41), &_Type_Metadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_421, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L42", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L42), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 11},
  /* 15 */ { MAP_LOCAL, "_L43", NULL, sizeof(MetadataElement_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L43), &_Type_MetadataElement_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_420, 1, 14},
  /* 16 */ { MAP_LOCAL, "_L44", NULL, sizeof(CompressedPacketData_T_Common_Types_Pkg), offsetof(outC_Write_P005_TM_trackside, _L44), &_Type_CompressedPacketData_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_419, 1, 13}
};
static const MappingScope scope_290 = {
  "TM_trackside::Write_P005/ Write_P005_TM_trackside",
  scope_290_entries, 17,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_341_D_00134_4_M015/ Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_289_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_295, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_294, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_289 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_341_D_00134_4_M015/ Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_289_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_369_D_00231_3_M015/ Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_288_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_295, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_294, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_288 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_369_D_00231_3_M015/ Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_288_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003/ Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_287_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_364_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_298, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_292, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_287 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003/ Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_287_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003/ Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_286_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_297, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_292, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_286 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003/ Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_286_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00230_7_M003/ _6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_285_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_362_D_00230_7_M003 1", NULL, sizeof(outC__5_SendRadioPackets_LRBG_362_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_296, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_292, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_285 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00230_7_M003/ _6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_285_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00124_9_M015/ Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_284_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_295, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_294, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_284 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00124_9_M015/ Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_284_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_360_D_00249_2_M015/ Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_283_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_295, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_294, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_283 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_360_D_00249_2_M015/ Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_283_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_358_D_00123_1_M015/ Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_282_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_295, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_294, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_282 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_358_D_00123_1_M015/ Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_282_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_356_D_00048_5_M015/ Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_281_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_295, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_294, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_281 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_356_D_00048_5_M015/ Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_281_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_355_D_00089_4_M015/ Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_280_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M015_JRU 1", NULL, sizeof(outC_Send_M015_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_295, 1, 1},
  /* 1 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 2 */ { MAP_INSTANCE, "RadioLib::No_Radio_Packets 1", NULL, sizeof(outC_No_Radio_Packets_RadioLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_294, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_280 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_355_D_00089_4_M015/ Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_280_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003/ Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_279_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_351_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_293, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_292, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_279 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003/ Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_279_entries, 11,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003/ Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_278_entries[11] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::SendRadioPackets_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_SendRadioPackets_LRBG_354_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_291, 1, 0},
  /* 1 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_M003_JRU 1", NULL, sizeof(outC_Send_M003_JRU_MessageLibBaseline2), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_292, 1, 1},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L38), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L39), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L40), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L42", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L42), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L43", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L43), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_bool), offsetof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L44), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9}
};
static const MappingScope scope_278 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003/ Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_278_entries, 11,
};

/* MessageLibBaseline2::Send_P005/ Send_P005_MessageLibBaseline2 */
static const MappingEntry scope_277_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg26", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 8},
  /* 2 */ { MAP_INSTANCE, "TM_trackside::Write_P005 1", NULL, sizeof(outC_Write_P005_TM_trackside), offsetof(outC_Send_P005_MessageLibBaseline2, Context_1), NULL, &scope_277_entries[0], isActive_kcg_bool_kcg_true, &scope_290, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(P005_trackside_int_T_TM), offsetof(outC_Send_P005_MessageLibBaseline2, _L4), &_Type_P005_trackside_int_T_TM_Utils, NULL, NULL, &scope_461, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Send_P005_MessageLibBaseline2, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Send_P005_MessageLibBaseline2, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_277 = {
  "MessageLibBaseline2::Send_P005/ Send_P005_MessageLibBaseline2",
  scope_277_entries, 9,
};

/* TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions */
static const MappingEntry scope_276_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Loc_real", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, Loc_real), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_TOOLS_convert_engineering_TM_conversions, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_276 = {
  "TM_conversions::TOOLS_convert_engineering_location/ TOOLS_convert_engineering_TM_conversions",
  scope_276_entries, 5,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/ */
static const MappingEntry scope_275_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "A_Output", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, A_Output_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_InfraLib, _L1_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L3_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L5_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L8_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_275 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLibmath::Abs 1/",
  scope_275_entries, 6,
};

/* InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib */
static const MappingEntry scope_274_entries[15] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 11},
  /* 4 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 5 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L14), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 13},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L2), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L3), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L4), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, _L5), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 10 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Interdistance_InfraLib, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_Balise_Interdistance_InfraLib, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 13 */ { MAP_OUTPUT, "distance_BB", NULL, sizeof(kcg_real), offsetof(outC_Balise_Interdistance_InfraLib, distance_BB), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_EXPANDED, "math::Abs 1", NULL, 0, 0, NULL, NULL, NULL, &scope_275, 1, 0}
};
static const MappingScope scope_274 = {
  "InfraLib::Balise_Interdistance/ Balise_Interdistance_InfraLib",
  scope_274_entries, 15,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015/ Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_273_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg25", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_341_D_00134_4_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_341_D_0013_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_273_entries[0], isActive_kcg_bool_kcg_true, &scope_289, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_273 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015/ Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_273_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015/ Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_272_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg24", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_369_D_00231_3_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_369_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_272_entries[0], isActive_kcg_bool_kcg_true, &scope_288, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_272 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015/ Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_272_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003/ Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_271_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg23", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_364_D_0009_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_271_entries[0], isActive_kcg_bool_kcg_true, &scope_287, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_271 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003/ Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_271_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003/ Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_270_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg22", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_270_entries[0], isActive_kcg_bool_kcg_true, &scope_286, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_270 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003/ Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_270_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_7_M003/ Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_269_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg21", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00230_7_M003 1", NULL, sizeof(outC__6_Build_RBC_LRBG_362_D_0023_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_269_entries[0], isActive_kcg_bool_kcg_true, &scope_285, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_269 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_7_M003/ Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_269_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015/ Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_268_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg20", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_362_D_00124_9_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_362_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_268_entries[0], isActive_kcg_bool_kcg_true, &scope_284, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_268 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015/ Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_268_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015/ Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_267_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg19", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_360_D_00249_2_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_360_D_0024_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_267_entries[0], isActive_kcg_bool_kcg_true, &scope_283, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_267 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015/ Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_267_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015/ Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_266_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg18", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_358_D_00123_1_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_358_D_0012_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_266_entries[0], isActive_kcg_bool_kcg_true, &scope_282, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_266 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015/ Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_266_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015/ Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_265_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg17", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_356_D_00048_5_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_356_D_0004_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_265_entries[0], isActive_kcg_bool_kcg_true, &scope_281, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_265 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015/ Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_265_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015/ Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_264_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg16", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_355_D_00089_4_M015 1", NULL, sizeof(outC_Build_RBC_LRBG_355_D_0008_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_264_entries[0], isActive_kcg_bool_kcg_true, &scope_280, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_264 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015/ Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_264_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003/ Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_263_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg15", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_351_D_0005_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_263_entries[0], isActive_kcg_bool_kcg_true, &scope_279, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_263 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003/ Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_263_entries, 9,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003/ Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_262_entries[9] = {
  /* 0 */ { MAP_LOCAL, "@kcg14", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 7},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Build_RBC_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_Build_RBC_LRBG_354_D_0027_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, &scope_262_entries[0], isActive_kcg_bool_kcg_true, &scope_278, 1, 0},
  /* 2 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 3 */ { MAP_LOCAL, "_L23", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L23), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_bool), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L52), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L53", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L53), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 6}
};
static const MappingScope scope_262 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003/ Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_262_entries, 9,
};

/* TM_conversions::CAST_Int_to_T_TRAIN/ CAST_Int_to_T_TRAIN_TM_conversions */
static const MappingEntry scope_261_entries[9] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_real), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L10), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L11), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 8 */ { MAP_OUTPUT, "t_train", NULL, sizeof(T_TRAIN), offsetof(outC_CAST_Int_to_T_TRAIN_TM_conversions, t_train), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_261 = {
  "TM_conversions::CAST_Int_to_T_TRAIN/ CAST_Int_to_T_TRAIN_TM_conversions",
  scope_261_entries, 9,
};

/* TM_conversions::CAST_Int_to_D_EMERGENCYSTOP/ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions */
static const MappingEntry scope_260_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_emergencystop", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions, d_emergencystop), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_260 = {
  "TM_conversions::CAST_Int_to_D_EMERGENCYSTOP/ CAST_Int_to_D_EMERGENCYSTOP_TM_conversions",
  scope_260_entries, 6,
};

/* TM_conversions::CAST_Int_to_D_REF/ CAST_Int_to_D_REF_TM_conversions */
static const MappingEntry scope_259_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ref", NULL, sizeof(D_REF), offsetof(outC_CAST_Int_to_D_REF_TM_conversions, d_ref), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_259 = {
  "TM_conversions::CAST_Int_to_D_REF/ CAST_Int_to_D_REF_TM_conversions",
  scope_259_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_EM/ CAST_Int_to_NID_EM_TM_conversions */
static const MappingEntry scope_258_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_em", NULL, sizeof(NID_EM), offsetof(outC_CAST_Int_to_NID_EM_TM_conversions, nid_em), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_258 = {
  "TM_conversions::CAST_Int_to_NID_EM/ CAST_Int_to_NID_EM_TM_conversions",
  scope_258_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_LRBG/ CAST_Int_to_NID_LRBG_TM_conversions */
static const MappingEntry scope_257_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "NID_LRBG_out", NULL, sizeof(NID_LRBG), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, NID_LRBG_out), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_LRBG_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_257 = {
  "TM_conversions::CAST_Int_to_NID_LRBG/ CAST_Int_to_NID_LRBG_TM_conversions",
  scope_257_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_256_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_252_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L8_IfBlock1), &_Type_M_ACK_Utils, &scope_252_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_256 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:then:",
  scope_256_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_255_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_253_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L71_IfBlock1), &_Type_M_ACK_Utils, &scope_253_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_255 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:then:",
  scope_255_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_254_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L1_IfBlock1), &_Type_M_ACK_Utils, &scope_253_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_253_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_254 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:else:",
  scope_254_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_253_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_253_entries[0], isActive_kcg_bool_kcg_false, &scope_254, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_253_entries[0], isActive_kcg_bool_kcg_true, &scope_255, 1, 2}
};
static const MappingScope scope_253 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:else:",
  scope_253_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1: */
static const MappingEntry scope_252_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_252_entries[0], isActive_kcg_bool_kcg_false, &scope_253, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_252_entries[0], isActive_kcg_bool_kcg_true, &scope_256, 1, 2}
};
static const MappingScope scope_252 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversionsIfBlock1:",
  scope_252_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversions */
static const MappingEntry scope_251_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_252, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_ack", NULL, sizeof(M_ACK), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_ack_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_ACK_TM_conversions, m_ack_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_251 = {
  "TM_conversions::CAST_Int_to_M_ACK/ CAST_Int_to_M_ACK_TM_conversions",
  scope_251_entries, 6,
};

/* InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLib */
static const MappingEntry scope_250_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, Balise_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L30", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L30), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L31), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L32", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_No_Balise_Packets_InfraLib, _L32), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_bool), offsetof(outC_No_Balise_Packets_InfraLib, _L35), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L36", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_No_Balise_Packets_InfraLib, _L36), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0}
};
static const MappingScope scope_250 = {
  "InfraLib::No_Balise_Packets/ No_Balise_Packets_InfraLib",
  scope_250_entries, 6,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 19/ */
static const MappingEntry scope_249_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_249 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 19/",
  scope_249_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 18/ */
static const MappingEntry scope_248_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_248 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 18/",
  scope_248_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 17/ */
static const MappingEntry scope_247_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_247 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 17/",
  scope_247_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 16/ */
static const MappingEntry scope_246_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_246 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 16/",
  scope_246_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 15/ */
static const MappingEntry scope_245_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_245 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 15/",
  scope_245_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 14/ */
static const MappingEntry scope_244_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_244 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 14/",
  scope_244_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 13/ */
static const MappingEntry scope_243_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_243 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 13/",
  scope_243_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 12/ */
static const MappingEntry scope_242_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_242 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 12/",
  scope_242_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 11/ */
static const MappingEntry scope_241_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_241 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 11/",
  scope_241_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 10/ */
static const MappingEntry scope_240_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_240 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 10/",
  scope_240_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 9/ */
static const MappingEntry scope_239_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_239 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 9/",
  scope_239_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 8/ */
static const MappingEntry scope_238_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_238 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 8/",
  scope_238_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 7/ */
static const MappingEntry scope_237_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_237 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 7/",
  scope_237_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 6/ */
static const MappingEntry scope_236_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_236 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 6/",
  scope_236_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 5/ */
static const MappingEntry scope_235_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_235 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 5/",
  scope_235_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 4/ */
static const MappingEntry scope_234_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_234 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 4/",
  scope_234_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 3/ */
static const MappingEntry scope_233_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_233 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 3/",
  scope_233_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 2/ */
static const MappingEntry scope_232_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_232 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 2/",
  scope_232_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 1/ */
static const MappingEntry scope_231_entries[2] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1}
};
static const MappingScope scope_231 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Packet 1/",
  scope_231_entries, 2,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_230_entries[54] = {
  /* 0 */ { MAP_LOCAL, "B_data_in", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_in), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 20},
  /* 1 */ { MAP_LOCAL, "B_data_link", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_link), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 22},
  /* 2 */ { MAP_LOCAL, "B_data_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 21},
  /* 3 */ { MAP_OUTPUT, "Balise_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Balise_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 53},
  /* 4 */ { MAP_EXPANDED, "InfraLib::No_Packet 1", NULL, 0, 0, NULL, NULL, NULL, &scope_231, 1, 0},
  /* 5 */ { MAP_EXPANDED, "InfraLib::No_Packet 10", NULL, 0, 0, NULL, NULL, NULL, &scope_240, 1, 10},
  /* 6 */ { MAP_EXPANDED, "InfraLib::No_Packet 11", NULL, 0, 0, NULL, NULL, NULL, &scope_241, 1, 11},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Packet 12", NULL, 0, 0, NULL, NULL, NULL, &scope_242, 1, 12},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Packet 13", NULL, 0, 0, NULL, NULL, NULL, &scope_243, 1, 13},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Packet 14", NULL, 0, 0, NULL, NULL, NULL, &scope_244, 1, 14},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Packet 15", NULL, 0, 0, NULL, NULL, NULL, &scope_245, 1, 15},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Packet 16", NULL, 0, 0, NULL, NULL, NULL, &scope_246, 1, 16},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Packet 17", NULL, 0, 0, NULL, NULL, NULL, &scope_247, 1, 17},
  /* 13 */ { MAP_EXPANDED, "InfraLib::No_Packet 18", NULL, 0, 0, NULL, NULL, NULL, &scope_248, 1, 18},
  /* 14 */ { MAP_EXPANDED, "InfraLib::No_Packet 19", NULL, 0, 0, NULL, NULL, NULL, &scope_249, 1, 19},
  /* 15 */ { MAP_EXPANDED, "InfraLib::No_Packet 2", NULL, 0, 0, NULL, NULL, NULL, &scope_232, 1, 1},
  /* 16 */ { MAP_EXPANDED, "InfraLib::No_Packet 3", NULL, 0, 0, NULL, NULL, NULL, &scope_233, 1, 2},
  /* 17 */ { MAP_EXPANDED, "InfraLib::No_Packet 4", NULL, 0, 0, NULL, NULL, NULL, &scope_234, 1, 3},
  /* 18 */ { MAP_EXPANDED, "InfraLib::No_Packet 5", NULL, 0, 0, NULL, NULL, NULL, &scope_235, 1, 4},
  /* 19 */ { MAP_EXPANDED, "InfraLib::No_Packet 6", NULL, 0, 0, NULL, NULL, NULL, &scope_236, 1, 5},
  /* 20 */ { MAP_EXPANDED, "InfraLib::No_Packet 7", NULL, 0, 0, NULL, NULL, NULL, &scope_237, 1, 6},
  /* 21 */ { MAP_EXPANDED, "InfraLib::No_Packet 8", NULL, 0, 0, NULL, NULL, NULL, &scope_238, 1, 7},
  /* 22 */ { MAP_EXPANDED, "InfraLib::No_Packet 9", NULL, 0, 0, NULL, NULL, NULL, &scope_239, 1, 8},
  /* 23 */ { MAP_INSTANCE, "MessageLibBaseline2::Send_P005 1", NULL, sizeof(outC_Send_P005_MessageLibBaseline2), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_277, 1, 9},
  /* 24 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L10), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 31},
  /* 25 */ { MAP_LOCAL, "_L11", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L12", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L12), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 42},
  /* 27 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 41},
  /* 28 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 40},
  /* 29 */ { MAP_LOCAL, "_L15", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 39},
  /* 30 */ { MAP_LOCAL, "_L16", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 38},
  /* 31 */ { MAP_LOCAL, "_L17", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 37},
  /* 32 */ { MAP_LOCAL, "_L18", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L18), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 36},
  /* 33 */ { MAP_LOCAL, "_L19", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 35},
  /* 34 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 23},
  /* 35 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 34},
  /* 36 */ { MAP_LOCAL, "_L21", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 33},
  /* 37 */ { MAP_LOCAL, "_L22", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 43},
  /* 38 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 44},
  /* 39 */ { MAP_LOCAL, "_L25", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 45},
  /* 40 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 46},
  /* 41 */ { MAP_LOCAL, "_L28", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 47},
  /* 42 */ { MAP_LOCAL, "_L29", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 48},
  /* 43 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 24},
  /* 44 */ { MAP_LOCAL, "_L30", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L30), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 49},
  /* 45 */ { MAP_LOCAL, "_L31", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L31), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 50},
  /* 46 */ { MAP_LOCAL, "_L32", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L32), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 51},
  /* 47 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_bool), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L33), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 48 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 25},
  /* 49 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 26},
  /* 50 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 27},
  /* 51 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 28},
  /* 52 */ { MAP_LOCAL, "_L8", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 29},
  /* 53 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 30}
};
static const MappingScope scope_230 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1/ Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_230_entries, 54,
};

/* InfraLib::Balise_Localisation/ Balise_Localisation_InfraLibmath::Min 1/ */
static const MappingEntry scope_229_entries[5] = {
  /* 0 */ { MAP_OUTPUT, "Mi_Output", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, Mi_Output_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L21_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L22_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L24_1), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L25_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_229 = {
  "InfraLib::Balise_Localisation/ Balise_Localisation_InfraLibmath::Min 1/",
  scope_229_entries, 5,
};

/* InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib */
static const MappingEntry scope_228_entries[28] = {
  /* 0 */ { MAP_INSTANCE, "InfraLib::Balise_Interdistance 1", NULL, sizeof(outC_Balise_Interdistance_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, Context_1), NULL, NULL, NULL, &scope_274, 1, 0},
  /* 1 */ { MAP_OUTPUT, "PIG_0_out", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, PIG_0_out), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::TOOLS_convert_engineering_location 1", NULL, sizeof(outC_TOOLS_convert_engineering_TM_conversions), offsetof(outC_Balise_Localisation_InfraLib, _1_Context_1), NULL, NULL, NULL, &scope_276, 1, 1},
  /* 3 */ { MAP_OUTPUT, "TrainPass", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, TrainPass), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L16", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Localisation_InfraLib, _L16), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L47", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L47), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L48", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L48), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L50", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L50), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L51", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L51), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L52", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L52), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L65", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, _L65), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L66", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L66), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_int), offsetof(outC_Balise_Localisation_InfraLib, _L68), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L71", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Localisation_InfraLib, _L71), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L73", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L73), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L75", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L75), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 17 */ { MAP_LOCAL, "_L76", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L76), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 16},
  /* 18 */ { MAP_LOCAL, "_L77", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L77), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L82", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L82), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L90", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L90), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L91", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L91), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L92", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L92), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L93", NULL, sizeof(kcg_real), offsetof(outC_Balise_Localisation_InfraLib, _L93), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L94", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L94), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L95", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L95), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L96", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Localisation_InfraLib, _L96), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_EXPANDED, "math::Min 1", NULL, 0, 0, NULL, NULL, NULL, &scope_229, 1, 2}
};
static const MappingScope scope_228 = {
  "InfraLib::Balise_Localisation/ Balise_Localisation_InfraLib",
  scope_228_entries, 28,
};

/* RadioLib::RBC_close/ RBC_close_RadioLib */
static const MappingEntry scope_227_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Message_out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_close_RadioLib, Message_out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 5},
  /* 1 */ { MAP_OUTPUT, "Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_close_RadioLib, Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 6},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_close_RadioLib, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_close_RadioLib, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_close_RadioLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RBC_close_RadioLib, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_RBC_close_RadioLib, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_227 = {
  "RadioLib::RBC_close/ RBC_close_RadioLib",
  scope_227_entries, 7,
};

/* RadioLib::RBC_init/ RBC_init_RadioLib */
static const MappingEntry scope_226_entries[6] = {
  /* 0 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_init_RadioLib, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 5},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_init_RadioLib, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_RBC_init_RadioLib, _L2), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_RBC_init_RadioLib, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_RBC_init_RadioLib, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_RBC_init_RadioLib, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4}
};
static const MappingScope scope_226 = {
  "RadioLib::RBC_init/ RBC_init_RadioLib",
  scope_226_entries, 6,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer/ RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_225_entries[26] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_341_D_00134_4_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_341_D_00134_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _11_Context_1), NULL, NULL, NULL, &scope_273, 1, 11},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_351_D_00054_9_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_351_D_00054_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_263, 1, 1},
  /* 2 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_354_D_00275_3_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_354_D_00275_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_262, 1, 0},
  /* 3 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_355_D_00089_4_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_355_D_00089_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _2_Context_1), NULL, NULL, NULL, &scope_264, 1, 2},
  /* 4 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_356_D_00048_5_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_356_D_00048_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _3_Context_1), NULL, NULL, NULL, &scope_265, 1, 3},
  /* 5 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_358_D_00123_1_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_358_D_00123_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _4_Context_1), NULL, NULL, NULL, &scope_266, 1, 4},
  /* 6 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_360_D_00249_2_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_360_D_00249_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _5_Context_1), NULL, NULL, NULL, &scope_267, 1, 5},
  /* 7 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00124_9_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_362_D_00124_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _6_Context_1), NULL, NULL, NULL, &scope_268, 1, 6},
  /* 8 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00230_7_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_362_D_00230_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _7_Context_1), NULL, NULL, NULL, &scope_269, 1, 7},
  /* 9 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_362_D_00238_9_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_362_D_00238_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _8_Context_1), NULL, NULL, NULL, &scope_270, 1, 8},
  /* 10 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_364_D_00091_1_M003 1", NULL, sizeof(outC_Send_RBC_LRBG_364_D_00091_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _9_Context_1), NULL, NULL, NULL, &scope_271, 1, 9},
  /* 11 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Send_RBC_LRBG_369_D_00231_3_M015 1", NULL, sizeof(outC_Send_RBC_LRBG_369_D_00231_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _10_Context_1), NULL, NULL, NULL, &scope_272, 1, 10},
  /* 12 */ { MAP_OUTPUT, "R_data_out", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, R_data_out), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 25},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L1), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L10", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L10), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L11", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L11), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L12", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L12), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L13", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L13), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 24},
  /* 18 */ { MAP_LOCAL, "_L2", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 13},
  /* 19 */ { MAP_LOCAL, "_L3", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 14},
  /* 20 */ { MAP_LOCAL, "_L4", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 15},
  /* 21 */ { MAP_LOCAL, "_L5", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 16},
  /* 22 */ { MAP_LOCAL, "_L6", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L7", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 18},
  /* 24 */ { MAP_LOCAL, "_L8", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 19},
  /* 25 */ { MAP_LOCAL, "_L9", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L9), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 20}
};
static const MappingScope scope_225 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer/ RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_225_entries, 26,
};

/* TM_conversions::CAST_D_EMERGENCYSTOP_to_int/ CAST_D_EMERGENCYSTOP_to_int_TM_conversions */
static const MappingEntry scope_224_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L1), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_emergencystop_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions, d_emergencystop_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_224 = {
  "TM_conversions::CAST_D_EMERGENCYSTOP_to_int/ CAST_D_EMERGENCYSTOP_to_int_TM_conversions",
  scope_224_entries, 6,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_223_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_215_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_223 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:then:",
  scope_223_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_222_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_216_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_222 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:then:",
  scope_222_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_221_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_217_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_221 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_221_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_220_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L26_IfBlock1), &_Type_kcg_int_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_220 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:then:",
  scope_220_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_219_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L27_IfBlock1), &_Type_kcg_int_Utils, &scope_218_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_219 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:else:",
  scope_219_entries, 2,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_218_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_218_entries[0], isActive_kcg_bool_kcg_false, &scope_219, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_218_entries[0], isActive_kcg_bool_kcg_true, &scope_220, 1, 2}
};
static const MappingScope scope_218 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_218_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_217_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_false, &scope_218, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_217_entries[0], isActive_kcg_bool_kcg_true, &scope_221, 1, 2}
};
static const MappingScope scope_217 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:else:",
  scope_217_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_216_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_false, &scope_217, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_216_entries[0], isActive_kcg_bool_kcg_true, &scope_222, 1, 2}
};
static const MappingScope scope_216 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:else:",
  scope_216_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_215_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_false, &scope_216, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_215_entries[0], isActive_kcg_bool_kcg_true, &scope_223, 1, 2}
};
static const MappingScope scope_215 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversionsIfBlock1:",
  scope_215_entries, 3,
};

/* TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversions */
static const MappingEntry scope_214_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_215, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L4), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(M_VERSION), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, m_version_in), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_version_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_VERSION_to_int_TM_conversions, m_version_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_214 = {
  "TM_conversions::CAST_M_VERSION_to_int/ CAST_M_VERSION_to_int_TM_conversions",
  scope_214_entries, 6,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_213_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_int_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_207_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_213 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:then:",
  scope_213_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_212_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_int_Utils, &scope_208_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L52_IfBlock1), &_Type_kcg_bool_Utils, &scope_208_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_212 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:then:",
  scope_212_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_211_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L43_IfBlock1), &_Type_kcg_bool_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_211 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_211_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_210_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L24_IfBlock1), &_Type_kcg_int_Utils, &scope_209_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_210 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_210_entries, 2,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_209_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_false, &scope_210, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_209_entries[0], isActive_kcg_bool_kcg_true, &scope_211, 1, 2}
};
static const MappingScope scope_209 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:else:",
  scope_209_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_208_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_208_entries[0], isActive_kcg_bool_kcg_false, &scope_209, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_208_entries[0], isActive_kcg_bool_kcg_true, &scope_212, 1, 2}
};
static const MappingScope scope_208 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:else:",
  scope_208_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_207_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_207_entries[0], isActive_kcg_bool_kcg_false, &scope_208, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_207_entries[0], isActive_kcg_bool_kcg_true, &scope_213, 1, 2}
};
static const MappingScope scope_207 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversionsIfBlock1:",
  scope_207_entries, 3,
};

/* TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversions */
static const MappingEntry scope_206_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_207, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L12), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(Q_DIR), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, q_dir_in), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_OUTPUT, "q_dir_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_DIR_to_int_TM_conversions, q_dir_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_206 = {
  "TM_conversions::CAST_Q_DIR_to_int/ CAST_Q_DIR_to_int_TM_conversions",
  scope_206_entries, 6,
};

/* TM_conversions::CAST_D_REF_to_int/ CAST_D_REF_to_int_TM_conversions */
static const MappingEntry scope_205_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_REF), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L1), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_REF_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_ref_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_REF_to_int_TM_conversions, d_ref_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_205 = {
  "TM_conversions::CAST_D_REF_to_int/ CAST_D_REF_to_int_TM_conversions",
  scope_205_entries, 6,
};

/* TM_conversions::CAST_D_SR_to_int/ CAST_D_SR_to_int_TM_conversions */
static const MappingEntry scope_204_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(D_SR), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L1), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_D_SR_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "d_sr_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_D_SR_to_int_TM_conversions, d_sr_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_204 = {
  "TM_conversions::CAST_D_SR_to_int/ CAST_D_SR_to_int_TM_conversions",
  scope_204_entries, 6,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_203_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_197_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_197_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_203 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:then:",
  scope_203_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_202_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_198_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L32_IfBlock1), &_Type_kcg_bool_Utils, &scope_198_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_202 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:then:",
  scope_202_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_201_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L13_IfBlock1), &_Type_kcg_int_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_201 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_201_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_200_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L14_IfBlock1), &_Type_kcg_int_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L25_IfBlock1), &_Type_kcg_bool_Utils, &scope_199_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_200 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_200_entries, 2,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_199_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_false, &scope_200, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_199_entries[0], isActive_kcg_bool_kcg_true, &scope_201, 1, 2}
};
static const MappingScope scope_199 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:else:",
  scope_199_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_198_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_198_entries[0], isActive_kcg_bool_kcg_false, &scope_199, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_198_entries[0], isActive_kcg_bool_kcg_true, &scope_202, 1, 2}
};
static const MappingScope scope_198 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:else:",
  scope_198_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_197_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_197_entries[0], isActive_kcg_bool_kcg_false, &scope_198, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_197_entries[0], isActive_kcg_bool_kcg_true, &scope_203, 1, 2}
};
static const MappingScope scope_197 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversionsIfBlock1:",
  scope_197_entries, 3,
};

/* TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversions */
static const MappingEntry scope_196_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_197, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L2), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_OUTPUT, "d", NULL, sizeof(kcg_int), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, d), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(Q_SCALE), offsetof(outC_CAST_Q_SCALE_to_int_TM_conversions, q_scale_in), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_196 = {
  "TM_conversions::CAST_Q_SCALE_to_int/ CAST_Q_SCALE_to_int_TM_conversions",
  scope_196_entries, 6,
};

/* TM_conversions::CAST_NID_EM_to_int/ CAST_NID_EM_to_int_TM_conversions */
static const MappingEntry scope_195_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_EM), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L1), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_em_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_EM_to_int_TM_conversions, nid_em_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_195 = {
  "TM_conversions::CAST_NID_EM_to_int/ CAST_NID_EM_to_int_TM_conversions",
  scope_195_entries, 6,
};

/* TM_conversions::CAST_NID_LRBG_to_int/ CAST_NID_LRBG_to_int_TM_conversions */
static const MappingEntry scope_194_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_LRBG), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L1), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_lrbg_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_LRBG_to_int_TM_conversions, nid_lrbg_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_194 = {
  "TM_conversions::CAST_NID_LRBG_to_int/ CAST_NID_LRBG_to_int_TM_conversions",
  scope_194_entries, 6,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_193_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_189_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L8_IfBlock1), &_Type_kcg_int_Utils, &scope_189_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_193 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:then:",
  scope_193_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_192_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L6_IfBlock1), &_Type_kcg_bool_Utils, &scope_190_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L71_IfBlock1), &_Type_kcg_int_Utils, &scope_190_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_192 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:then:",
  scope_192_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_191_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_190_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_190_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_191 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:else:",
  scope_191_entries, 2,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_190_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_190_entries[0], isActive_kcg_bool_kcg_false, &scope_191, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_190_entries[0], isActive_kcg_bool_kcg_true, &scope_192, 1, 2}
};
static const MappingScope scope_190 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:else:",
  scope_190_entries, 3,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_189_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_189_entries[0], isActive_kcg_bool_kcg_false, &scope_190, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_189_entries[0], isActive_kcg_bool_kcg_true, &scope_193, 1, 2}
};
static const MappingScope scope_189 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversionsIfBlock1:",
  scope_189_entries, 3,
};

/* TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversions */
static const MappingEntry scope_188_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_189, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_ACK), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L4), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "m_ack_in", NULL, sizeof(M_ACK), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, m_ack_in), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_ack_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_M_ACK_to_int_TM_conversions, m_ack_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_188 = {
  "TM_conversions::CAST_M_ACK_to_int/ CAST_M_ACK_to_int_TM_conversions",
  scope_188_entries, 6,
};

/* TM_conversions::CAST_T_TRAIN_to_int/ CAST_T_TRAIN_to_int_TM_conversions */
static const MappingEntry scope_187_entries[9] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(T_TRAIN), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L1), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_real), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L11), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_real), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L12), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L15), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L16", NULL, sizeof(kcg_bool), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L16), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L17", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, _L17), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_OUTPUT, "t_train_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_T_TRAIN_to_int_TM_conversions, t_train_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8}
};
static const MappingScope scope_187 = {
  "TM_conversions::CAST_T_TRAIN_to_int/ CAST_T_TRAIN_to_int_TM_conversions",
  scope_187_entries, 9,
};

/* TM_RBC_conversions::M003_to_Radio_Track_Train_H/ M003_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_186_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_468, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_186 = {
  "TM_RBC_conversions::M003_to_Radio_Track_Train_H/ M003_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_186_entries, 20,
};

/* TM_radio_messages::C_header_to_M003/ C_header_to_M003_TM_radio_messages */
static const MappingEntry scope_185_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M003_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M003_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_257, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M003_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_radio_messages, _L26), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_468, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M003_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M003_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M003_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M003_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M003_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M003_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 18 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_C_header_to_M003_TM_radio_messages, message_out), &_Type_M_003_T_TM_radio_messages_Utils, NULL, NULL, &scope_468, 1, 18}
};
static const MappingScope scope_185 = {
  "TM_radio_messages::C_header_to_M003/ C_header_to_M003_TM_radio_messages",
  scope_185_entries, 19,
};

/* TM_radio_messages::C_header_to_M008/ C_header_to_M008_TM_radio_messages */
static const MappingEntry scope_184_entries[21] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M008_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M008_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_257, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_T_TRAIN 1", NULL, sizeof(outC_CAST_Int_to_T_TRAIN_TM_conversions), offsetof(outC_C_header_to_M008_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_261, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M008_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_radio_messages, _L26), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_469, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M008_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M008_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M008_TM_radio_messages, _L29), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M008_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M008_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M008_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M008_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 20 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_C_header_to_M008_TM_radio_messages, message_out), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_469, 1, 20}
};
static const MappingScope scope_184 = {
  "TM_radio_messages::C_header_to_M008/ C_header_to_M008_TM_radio_messages",
  scope_184_entries, 21,
};

/* TM_RBC_conversions::M008_to_Radio_Track_Train_H/ M008_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_183_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_008_T_TM_radio_messages_Utils, NULL, NULL, &scope_469, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_183 = {
  "TM_RBC_conversions::M008_to_Radio_Track_Train_H/ M008_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_183_entries, 20,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then: */
static const MappingEntry scope_182_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_119_IfBlock1), &_Type_Q_DIR_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L5_120_IfBlock1), &_Type_kcg_bool_Utils, &scope_176_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_182 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:then:",
  scope_182_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then: */
static const MappingEntry scope_181_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3_112_IfBlock1), &_Type_Q_DIR_Utils, &scope_177_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L5_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_177_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_181 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:then:",
  scope_181_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then: */
static const MappingEntry scope_180_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_116_IfBlock1), &_Type_Q_DIR_Utils, &scope_178_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_117_IfBlock1), &_Type_kcg_bool_Utils, &scope_178_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_180 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:then:",
  scope_180_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else: */
static const MappingEntry scope_179_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_115_IfBlock1), &_Type_kcg_bool_Utils, &scope_178_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_114_IfBlock1), &_Type_Q_DIR_Utils, &scope_178_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_179 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:else:",
  scope_179_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else: */
static const MappingEntry scope_178_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _13_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_178_entries[0], isActive_kcg_bool_kcg_false, &scope_179, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_178_entries[0], isActive_kcg_bool_kcg_true, &scope_180, 1, 2}
};
static const MappingScope scope_178 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:else:",
  scope_178_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else: */
static const MappingEntry scope_177_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _18_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_177_entries[0], isActive_kcg_bool_kcg_false, &scope_178, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_177_entries[0], isActive_kcg_bool_kcg_true, &scope_181, 1, 2}
};
static const MappingScope scope_177 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:else:",
  scope_177_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1: */
static const MappingEntry scope_176_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _11_IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_false, &scope_177, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_176_entries[0], isActive_kcg_bool_kcg_true, &scope_182, 1, 2}
};
static const MappingScope scope_176 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/IfBlock1:",
  scope_176_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/ */
static const MappingEntry scope_175_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_176, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L12_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L13_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _10_error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "q_dir", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, q_dir_1), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_dir_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, q_dir_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_175 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_DIR 1/",
  scope_175_entries, 6,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then: */
static const MappingEntry scope_174_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_18_IfBlock1), &_Type_Q_SCALE_Utils, &scope_168_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3_19_IfBlock1), &_Type_kcg_bool_Utils, &scope_168_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_174 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:then:",
  scope_174_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then: */
static const MappingEntry scope_173_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_1_IfBlock1), &_Type_Q_SCALE_Utils, &scope_169_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_169_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_173 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:then:",
  scope_173_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then: */
static const MappingEntry scope_172_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_16_IfBlock1), &_Type_Q_SCALE_Utils, &scope_170_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_170_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_172 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:then:",
  scope_172_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else: */
static const MappingEntry scope_171_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1_15_IfBlock1), &_Type_Q_SCALE_Utils, &scope_170_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_1_IfBlock1), &_Type_kcg_bool_Utils, &scope_170_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_171 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:else:",
  scope_171_entries, 2,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else: */
static const MappingEntry scope_170_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_170_entries[0], isActive_kcg_bool_kcg_false, &scope_171, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_170_entries[0], isActive_kcg_bool_kcg_true, &scope_172, 1, 2}
};
static const MappingScope scope_170 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:else:",
  scope_170_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else: */
static const MappingEntry scope_169_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _7_else_clock_1_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_169_entries[0], isActive_kcg_bool_kcg_false, &scope_170, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_169_entries[0], isActive_kcg_bool_kcg_true, &scope_173, 1, 2}
};
static const MappingScope scope_169 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:else:",
  scope_169_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1: */
static const MappingEntry scope_168_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, IfBlock1_clock_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_168_entries[0], isActive_kcg_bool_kcg_false, &scope_169, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_168_entries[0], isActive_kcg_bool_kcg_true, &scope_174, 1, 2}
};
static const MappingScope scope_168 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/IfBlock1:",
  scope_168_entries, 3,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/ */
static const MappingEntry scope_167_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_168, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, error_1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_OUTPUT, "q_scale", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, q_scale_1), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 0},
  /* 5 */ { MAP_LOCAL, "q_scale_in", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, q_scale_in_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_167 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messagesTM_conversions::CAST_Int_to_Q_SCALE 1/",
  scope_167_entries, 6,
};

/* TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messages */
static const MappingEntry scope_166_entries[29] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_EMERGENCYSTOP 1", NULL, sizeof(outC_CAST_Int_to_D_EMERGENCYSTOP_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_260, 1, 6},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_D_REF 1", NULL, sizeof(outC_CAST_Int_to_D_REF_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_259, 1, 4},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _4_Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_EM 1", NULL, sizeof(outC_CAST_Int_to_NID_EM_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_258, 1, 2},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M015_TM_radio_messages, _3_Context_1), NULL, NULL, NULL, &scope_257, 1, 1},
  /* 5 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_DIR 1", NULL, 0, 0, NULL, NULL, NULL, &scope_175, 1, 5},
  /* 6 */ { MAP_EXPANDED, "TM_conversions::CAST_Int_to_Q_SCALE 1", NULL, 0, 0, NULL, NULL, NULL, &scope_167, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 9 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 10 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 11 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M015_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_radio_messages, _L26), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_470, 1, 20},
  /* 14 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M015_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M015_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 22},
  /* 16 */ { MAP_LOCAL, "_L29", NULL, sizeof(NID_EM), offsetof(outC_C_header_to_M015_TM_radio_messages, _L29), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 23},
  /* 17 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L30", NULL, sizeof(Q_SCALE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L30), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L31", NULL, sizeof(D_REF), offsetof(outC_C_header_to_M015_TM_radio_messages, _L31), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_DIR), offsetof(outC_C_header_to_M015_TM_radio_messages, _L32), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L33", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_C_header_to_M015_TM_radio_messages, _L33), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M015_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 17},
  /* 23 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M015_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 16},
  /* 24 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 25 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 26 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 27 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M015_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 28 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_C_header_to_M015_TM_radio_messages, message_out), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_470, 1, 28}
};
static const MappingScope scope_166 = {
  "TM_radio_messages::C_header_to_M015/ C_header_to_M015_TM_radio_messages",
  scope_166_entries, 29,
};

/* TM_RBC_conversions::M015_to_Radio_Track_Train_H/ M015_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_165_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_015_T_TM_radio_messages_Utils, NULL, NULL, &scope_470, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L24", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 16},
  /* 9 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_DIR), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 15},
  /* 10 */ { MAP_LOCAL, "_L26", NULL, sizeof(D_REF), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L26), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L27", NULL, sizeof(Q_SCALE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L27), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_EM), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L28), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 14 */ { MAP_LOCAL, "_L31", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L31), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L32), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_165 = {
  "TM_RBC_conversions::M015_to_Radio_Track_Train_H/ M015_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_165_entries, 20,
};

/* TM_RBC_conversions::M024_to_Radio_Track_Train_H/ M024_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_164_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_468, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L23", NULL, sizeof(M_VERSION), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L23), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 16},
  /* 13 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 14 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_164 = {
  "TM_RBC_conversions::M024_to_Radio_Track_Train_H/ M024_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_164_entries, 20,
};

/* TM_radio_messages::C_header_to_M024/ C_header_to_M024_TM_radio_messages */
static const MappingEntry scope_163_entries[19] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M024_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M024_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_257, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M024_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 14},
  /* 8 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_radio_messages, _L26), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_468, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M024_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M024_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M024_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 12 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M024_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M024_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 15 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 16 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 17 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M024_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 18 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_C_header_to_M024_TM_radio_messages, message_out), &_Type_M_024_T_TM_radio_messages_Utils, NULL, NULL, &scope_468, 1, 18}
};
static const MappingScope scope_163 = {
  "TM_radio_messages::C_header_to_M024/ C_header_to_M024_TM_radio_messages",
  scope_163_entries, 19,
};

/* TM_radio_messages::C_header_to_M032/ C_header_to_M032_TM_radio_messages */
static const MappingEntry scope_162_entries[21] = {
  /* 0 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_ACK 1", NULL, sizeof(outC_CAST_Int_to_M_ACK_TM_conversions), offsetof(outC_C_header_to_M032_TM_radio_messages, _2_Context_1), NULL, NULL, NULL, &scope_251, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_VERSION 1", NULL, sizeof(outC_CAST_Int_to_M_VERSION_TM_conversions), offsetof(outC_C_header_to_M032_TM_radio_messages, Context_1), NULL, NULL, NULL, &scope_60, 1, 2},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_LRBG 1", NULL, sizeof(outC_CAST_Int_to_NID_LRBG_TM_conversions), offsetof(outC_C_header_to_M032_TM_radio_messages, _1_Context_1), NULL, NULL, NULL, &scope_257, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_radio_messages, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L13), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_C_header_to_M032_TM_radio_messages, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_radio_messages, _L26), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_471, 1, 16},
  /* 10 */ { MAP_LOCAL, "_L27", NULL, sizeof(M_ACK), offsetof(outC_C_header_to_M032_TM_radio_messages, _L27), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 17},
  /* 11 */ { MAP_LOCAL, "_L28", NULL, sizeof(NID_LRBG), offsetof(outC_C_header_to_M032_TM_radio_messages, _L28), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 18},
  /* 12 */ { MAP_LOCAL, "_L29", NULL, sizeof(M_VERSION), offsetof(outC_C_header_to_M032_TM_radio_messages, _L29), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 19},
  /* 13 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_header_to_M032_TM_radio_messages, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_C_header_to_M032_TM_radio_messages, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_header_to_M032_TM_radio_messages, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 16 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 17 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 19 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_C_header_to_M032_TM_radio_messages, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 20 */ { MAP_OUTPUT, "message_out", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_C_header_to_M032_TM_radio_messages, message_out), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_471, 1, 20}
};
static const MappingScope scope_162 = {
  "TM_radio_messages::C_header_to_M032/ C_header_to_M032_TM_radio_messages",
  scope_162_entries, 21,
};

/* TM_RBC_conversions::M032_to_Radio_Track_Train_H/ M032_to_Radio_Track_Train_H_TM_RBC_conversions */
static const MappingEntry scope_161_entries[20] = {
  /* 0 */ { MAP_OUTPUT, "Radio_Track_Train_Hd_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, Radio_Track_Train_Hd_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 19},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L1), &_Type_M_032_T_TM_radio_messages_Utils, NULL, NULL, &scope_471, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L14", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L14), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 7},
  /* 3 */ { MAP_LOCAL, "_L15", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L15), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_EM), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L16), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 9},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(Q_SCALE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L17), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L18", NULL, sizeof(D_SR), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L18), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L19), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L20", NULL, sizeof(D_REF), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L20), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 13},
  /* 10 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_DIR), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L21), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 14},
  /* 11 */ { MAP_LOCAL, "_L22", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L22), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 12 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 13 */ { MAP_LOCAL, "_L25", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L25), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 16},
  /* 14 */ { MAP_LOCAL, "_L26", NULL, sizeof(M_VERSION), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L26), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 18},
  /* 15 */ { MAP_LOCAL, "_L3", NULL, sizeof(NID_MESSAGE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L3), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L4", NULL, sizeof(L_MESSAGE), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L4), &_Type_L_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 17 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 3},
  /* 18 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 2},
  /* 19 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_161 = {
  "TM_RBC_conversions::M032_to_Radio_Track_Train_H/ M032_to_Radio_Track_Train_H_TM_RBC_conversions",
  scope_161_entries, 20,
};

/* TM_conversions::CAST_NID_MESSAGE_to_int/ CAST_NID_MESSAGE_to_int_TM_conversions */
static const MappingEntry scope_160_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_MESSAGE), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L1), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_message_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_MESSAGE_to_int_TM_conversions, nid_message_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_160 = {
  "TM_conversions::CAST_NID_MESSAGE_to_int/ CAST_NID_MESSAGE_to_int_TM_conversions",
  scope_160_entries, 6,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1/ Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_159_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg13", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_159_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_159 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1/ Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_159_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0/ Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_158_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg12", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_158_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_158 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0/ Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_158_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1/ Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_157_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg11", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_157_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_157 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1/ Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_157_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0/ Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_156_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg10", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_156_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_156 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0/ Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_156_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0/ Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_155_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg9", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_155_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_155 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0/ Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_155_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1/ Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_154_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg8", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_154_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_154 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1/ Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_154_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1/ Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_153_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg7", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_153_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_153 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1/ Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_153_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0/ Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_152_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg6", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_152_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_152 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0/ Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_152_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0/ Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_151_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg5", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_151_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_151 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0/ Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_151_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1/ Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_150_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_150_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_150 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1/ Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_150_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1/ Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_149_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_149_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_149 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1/ Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_149_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0/ Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_148_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 2 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 3 */ { MAP_INSTANCE, "InfraLib::No_Balise_Packets 1", NULL, sizeof(outC_No_Balise_Packets_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_148_entries[0], isActive_kcg_bool_kcg_true, &scope_250, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_148 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0/ Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_148_entries, 13,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0_00A/ Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_147_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1 1", NULL, sizeof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_147_entries[0], isActive_kcg_bool_kcg_true, &scope_230, 1, 1},
  /* 2 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 3 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_147 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0_00A/ Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_147_entries, 13,
};

/* InfraLib::Balise_Group_Close/ Balise_Group_Close_InfraLib */
static const MappingEntry scope_146_entries[10] = {
  /* 0 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 9},
  /* 1 */ { MAP_OUTPUT, "Error_out", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, Error_out), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L2), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L20", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L20), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L21", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Close_InfraLib, _L21), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L22", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L22), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L23", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Close_InfraLib, _L23), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L24", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_Close_InfraLib, _L24), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, _L25), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Close_InfraLib, _L26), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_146 = {
  "InfraLib::Balise_Group_Close/ Balise_Group_Close_InfraLib",
  scope_146_entries, 10,
};

/* InfraLib::Balise_Group_Init/ Balise_Group_Init_InfraLib */
static const MappingEntry scope_145_entries[9] = {
  /* 0 */ { MAP_OUTPUT, "BG_internal_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Init_InfraLib, BG_internal_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 8},
  /* 1 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_InfraLib, _L14), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_Init_InfraLib, _L2), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L26", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_Init_InfraLib, _L26), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L27", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_Init_InfraLib, _L27), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L28", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Balise_Group_Init_InfraLib, _L28), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L29", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_Init_InfraLib, _L29), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L30", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_Init_InfraLib, _L30), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L31", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_Init_InfraLib, _L31), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7}
};
static const MappingScope scope_145 = {
  "InfraLib::Balise_Group_Init/ Balise_Group_Init_InfraLib",
  scope_145_entries, 9,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1_00A/ Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_144_entries[13] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, tmp), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 11},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Packets_BG364_00A_L1 1", NULL, sizeof(outC_Packets_BG364_00A_L1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, &scope_144_entries[0], isActive_kcg_bool_kcg_true, &scope_230, 1, 1},
  /* 2 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 3 */ { MAP_INSTANCE, "InfraLib::Balise_Localisation 1", NULL, sizeof(outC_Balise_Localisation_InfraLib), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_228, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L15", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L15), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L17", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L17), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 7},
  /* 7 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L23", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 3},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 4}
};
static const MappingScope scope_144 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1_00A/ Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_144_entries, 13,
};

/* AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration/ Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC */
static const MappingEntry scope_143_entries[13] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::RBC_Sheet06_Bijlmer 2", NULL, sizeof(outC_RBC_Sheet06_Bijlmer_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_2), NULL, NULL, NULL, &scope_225, 1, 0},
  /* 1 */ { MAP_OUTPUT, "Message_out", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Message_out), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 11},
  /* 2 */ { MAP_OUTPUT, "Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 3 */ { MAP_INSTANCE, "RadioLib::RBC_close 1", NULL, sizeof(outC_RBC_close_RadioLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _1_Context_1), NULL, NULL, NULL, &scope_227, 1, 2},
  /* 4 */ { MAP_INSTANCE, "RadioLib::RBC_init 1", NULL, sizeof(outC_RBC_init_RadioLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, Context_1), NULL, NULL, NULL, &scope_226, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L2), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L3), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 4},
  /* 7 */ { MAP_LOCAL, "_L4", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L4), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 8 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L6), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 10 */ { MAP_LOCAL, "_L7", NULL, sizeof(R_data_internal_T_InfraLib), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L7), &_Type_R_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_428, 1, 8},
  /* 11 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L8), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9}
};
static const MappingScope scope_143 = {
  "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration/ Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC",
  scope_143_entries, 13,
};

/* TM_specific::DIRTY_m_version_filter_for_aprobst/ DIRTY_m_version_filter_fo_TM_specific */
static const MappingEntry scope_142_entries[12] = {
  /* 0 */ { MAP_OUTPUT, "RadioMessage_out", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, RadioMessage_out), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 11},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L1), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L2), &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_424, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L3), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 1},
  /* 4 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L38", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L38), &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_424, 1, 5},
  /* 6 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L39), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 8 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_bool), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L41), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_DIRTY_m_version_filter_fo_TM_specific, _L6), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 3}
};
static const MappingScope scope_142 = {
  "TM_specific::DIRTY_m_version_filter_for_aprobst/ DIRTY_m_version_filter_fo_TM_specific",
  scope_142_entries, 12,
};

/* TM_conversions::C_TrackTrainMessage_to_Int/ C_TrackTrainMessage_to_Int_TM_conversions */
static const MappingEntry scope_141_entries[44] = {
  /* 0 */ { MAP_OUTPUT, "Message_Out", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Message_Out), &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_424, 1, 43},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_D_EMERGENCYSTOP_to_int 1", NULL, sizeof(outC_CAST_D_EMERGENCYSTOP_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_1), NULL, NULL, NULL, &scope_224, 1, 12},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_D_REF_to_int 1", NULL, sizeof(outC_CAST_D_REF_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_205, 1, 9},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_D_SR_to_int 1", NULL, sizeof(outC_CAST_D_SR_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_204, 1, 7},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_M_ACK_to_int 1", NULL, sizeof(outC_CAST_M_ACK_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _8_Context_1), NULL, NULL, NULL, &scope_188, 1, 2},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_M_VERSION_to_int 1", NULL, sizeof(outC_CAST_M_VERSION_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_214, 1, 11},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_EM_to_int 1", NULL, sizeof(outC_CAST_NID_EM_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _6_Context_1), NULL, NULL, NULL, &scope_195, 1, 5},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_LRBG_to_int 1", NULL, sizeof(outC_CAST_NID_LRBG_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _7_Context_1), NULL, NULL, NULL, &scope_194, 1, 3},
  /* 8 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_MESSAGE_to_int 1", NULL, sizeof(outC_CAST_NID_MESSAGE_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _10_Context_1), NULL, NULL, NULL, &scope_160, 1, 0},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Q_DIR_to_int 1", NULL, sizeof(outC_CAST_Q_DIR_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_206, 1, 10},
  /* 10 */ { MAP_INSTANCE, "TM_conversions::CAST_Q_SCALE_to_int 1", NULL, sizeof(outC_CAST_Q_SCALE_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _5_Context_1), NULL, NULL, NULL, &scope_196, 1, 6},
  /* 11 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 1", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _9_Context_1), NULL, NULL, NULL, &scope_187, 1, 1},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 2", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_2), NULL, NULL, NULL, &scope_187, 1, 4},
  /* 13 */ { MAP_INSTANCE, "TM_conversions::CAST_T_TRAIN_to_int 3", NULL, sizeof(outC_CAST_T_TRAIN_to_int_TM_conversions), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, Context_3), NULL, NULL, NULL, &scope_187, 1, 8},
  /* 14 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 13},
  /* 15 */ { MAP_LOCAL, "_L10", NULL, sizeof(Q_SCALE), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L10), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 20},
  /* 16 */ { MAP_LOCAL, "_L11", NULL, sizeof(D_SR), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L11), &_Type_D_SR_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L12", NULL, sizeof(T_TRAIN), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L12), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L13", NULL, sizeof(D_REF), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L13), &_Type_D_REF_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L14", NULL, sizeof(Q_DIR), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L14), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 16},
  /* 20 */ { MAP_LOCAL, "_L15", NULL, sizeof(D_EMERGENCYSTOP), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L15), &_Type_D_EMERGENCYSTOP_Utils, NULL, NULL, NULL, 1, 15},
  /* 21 */ { MAP_LOCAL, "_L16", NULL, sizeof(M_VERSION), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L16), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 22 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 27},
  /* 24 */ { MAP_LOCAL, "_L32", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L32), &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_424, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L34), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L35", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L35), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L36), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 33},
  /* 29 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L37), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 34},
  /* 30 */ { MAP_LOCAL, "_L38", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L38), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 35},
  /* 31 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L39), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 36},
  /* 32 */ { MAP_LOCAL, "_L4", NULL, sizeof(NID_MESSAGE), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L4), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 26},
  /* 33 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L40), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 34 */ { MAP_LOCAL, "_L41", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L41), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 38},
  /* 35 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L42), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 39},
  /* 36 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L43), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 40},
  /* 37 */ { MAP_LOCAL, "_L44", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L44), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 41},
  /* 38 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_int), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L45), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 42},
  /* 39 */ { MAP_LOCAL, "_L5", NULL, sizeof(T_TRAIN), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L5), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 25},
  /* 40 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_ACK), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L6), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 24},
  /* 41 */ { MAP_LOCAL, "_L7", NULL, sizeof(NID_LRBG), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L7), &_Type_NID_LRBG_Utils, NULL, NULL, NULL, 1, 23},
  /* 42 */ { MAP_LOCAL, "_L8", NULL, sizeof(T_TRAIN), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L8), &_Type_T_TRAIN_Utils, NULL, NULL, NULL, 1, 22},
  /* 43 */ { MAP_LOCAL, "_L9", NULL, sizeof(NID_EM), offsetof(outC_C_TrackTrainMessage_to_Int_TM_conversions, _L9), &_Type_NID_EM_Utils, NULL, NULL, NULL, 1, 21}
};
static const MappingScope scope_141 = {
  "TM_conversions::C_TrackTrainMessage_to_Int/ C_TrackTrainMessage_to_Int_TM_conversions",
  scope_141_entries, 44,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:then: */
static const MappingEntry scope_140_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M003_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M003_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _1_Context_1), NULL, &scope_130_entries[0], isActive_kcg_bool_kcg_true, &scope_186, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M003 2", NULL, sizeof(outC_C_header_to_M003_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, Context_2), NULL, &scope_130_entries[0], isActive_kcg_bool_kcg_true, &scope_185, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L1_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_130_entries[0], isActive_kcg_bool_kcg_true, &scope_427, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_003_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L2_IfBlock1), &_Type_M_003_T_TM_radio_messages_Utils, &scope_130_entries[0], isActive_kcg_bool_kcg_true, &scope_468, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L3_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_130_entries[0], isActive_kcg_bool_kcg_true, &scope_417, 1, 4}
};
static const MappingScope scope_140 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:then:",
  scope_140_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:then: */
static const MappingEntry scope_139_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M008_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M008_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _3_Context_1), NULL, &scope_131_entries[0], isActive_kcg_bool_kcg_true, &scope_183, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M008 2", NULL, sizeof(outC_C_header_to_M008_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _2_Context_2), NULL, &scope_131_entries[0], isActive_kcg_bool_kcg_true, &scope_184, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L113_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_131_entries[0], isActive_kcg_bool_kcg_true, &scope_427, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L214_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_131_entries[0], isActive_kcg_bool_kcg_true, &scope_417, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_008_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L315_IfBlock1), &_Type_M_008_T_TM_radio_messages_Utils, &scope_131_entries[0], isActive_kcg_bool_kcg_true, &scope_469, 1, 2}
};
static const MappingScope scope_139 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:then:",
  scope_139_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_138_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M015_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M015_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _5_Context_1), NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_165, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M015 1", NULL, sizeof(outC_C_header_to_M015_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _4_Context_1), NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_166, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L116_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_427, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L217_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_417, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_015_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L318_IfBlock1), &_Type_M_015_T_TM_radio_messages_Utils, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_470, 1, 2}
};
static const MappingScope scope_138 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:then:",
  scope_138_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_137_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M024_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M024_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _7_Context_1), NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_164, 1, 1},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M024 1", NULL, sizeof(outC_C_header_to_M024_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _6_Context_1), NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_163, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_024_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L119_IfBlock1), &_Type_M_024_T_TM_radio_messages_Utils, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_468, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L220_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_417, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L321_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_427, 1, 2}
};
static const MappingScope scope_137 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:then:",
  scope_137_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_136_entries[5] = {
  /* 0 */ { MAP_INSTANCE, "TM_RBC_conversions::M032_to_Radio_Track_Train_H 1", NULL, sizeof(outC_M032_to_Radio_Track_Train_H_TM_RBC_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _9_Context_1), NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_161, 1, 0},
  /* 1 */ { MAP_INSTANCE, "TM_radio_messages::C_header_to_M032 1", NULL, sizeof(outC_C_header_to_M032_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _8_Context_1), NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_162, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L122_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_417, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_032_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L223_IfBlock1), &_Type_M_032_T_TM_radio_messages_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_471, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L324_IfBlock1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_427, 1, 2}
};
static const MappingScope scope_136 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:then:",
  scope_136_entries, 5,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_135_entries[1] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L125_IfBlock1), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, &scope_134_entries[0], isActive_kcg_bool_kcg_false, &scope_417, 1, 0}
};
static const MappingScope scope_135 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:else:",
  scope_135_entries, 1,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_134_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_false, &scope_135, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_134_entries[0], isActive_kcg_bool_kcg_true, &scope_136, 1, 2}
};
static const MappingScope scope_134 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:else:",
  scope_134_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_133_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _10_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_false, &scope_134, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_133_entries[0], isActive_kcg_bool_kcg_true, &scope_137, 1, 2}
};
static const MappingScope scope_133 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:else:",
  scope_133_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else: */
static const MappingEntry scope_132_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _11_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_false, &scope_133, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_132_entries[0], isActive_kcg_bool_kcg_true, &scope_138, 1, 2}
};
static const MappingScope scope_132 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:else:",
  scope_132_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else: */
static const MappingEntry scope_131_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _12_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_131_entries[0], isActive_kcg_bool_kcg_false, &scope_132, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_131_entries[0], isActive_kcg_bool_kcg_true, &scope_139, 1, 2}
};
static const MappingScope scope_131 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:else:",
  scope_131_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1: */
static const MappingEntry scope_130_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_130_entries[0], isActive_kcg_bool_kcg_false, &scope_131, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_130_entries[0], isActive_kcg_bool_kcg_true, &scope_140, 1, 2}
};
static const MappingScope scope_130 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversionsIfBlock1:",
  scope_130_entries, 3,
};

/* TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversions */
static const MappingEntry scope_129_entries[7] = {
  /* 0 */ { MAP_OUTPUT, "Header_Out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, Header_Out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 6},
  /* 1 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_130, 1, 1},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_MESSAGE_to_int 1", NULL, sizeof(outC_CAST_NID_MESSAGE_to_int_TM_conversions), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, Context_1), NULL, NULL, NULL, &scope_160, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L1", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L1), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 3},
  /* 4 */ { MAP_LOCAL, "_L32", NULL, sizeof(NID_MESSAGE), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L32), &_Type_NID_MESSAGE_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, _L33), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 6 */ { MAP_LOCAL, "nid_message", NULL, sizeof(kcg_int), offsetof(outC_compressed_to_Radio_Track_TM_RBC_conversions, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_129 = {
  "TM_RBC_conversions::compressed_to_Radio_Track_Train_H/ compressed_to_Radio_Track_TM_RBC_conversions",
  scope_129_entries, 7,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_128_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L4_IfBlock1), &_Type_Q_LINK_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_124_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_128 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:then:",
  scope_128_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_127_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L3_IfBlock1), &_Type_Q_LINK_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_127 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:then:",
  scope_127_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_126_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L1_IfBlock1), &_Type_Q_LINK_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_125_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_126 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:else:",
  scope_126_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_125_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_125_entries[0], isActive_kcg_bool_kcg_false, &scope_126, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_125_entries[0], isActive_kcg_bool_kcg_true, &scope_127, 1, 2}
};
static const MappingScope scope_125 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:else:",
  scope_125_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1: */
static const MappingEntry scope_124_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_124_entries[0], isActive_kcg_bool_kcg_false, &scope_125, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_124_entries[0], isActive_kcg_bool_kcg_true, &scope_128, 1, 2}
};
static const MappingScope scope_124 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversionsIfBlock1:",
  scope_124_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions */
static const MappingEntry scope_123_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_124, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_link", NULL, sizeof(Q_LINK), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_link_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_LINK_TM_conversions, q_link_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_123 = {
  "TM_conversions::CAST_Int_to_Q_LINK/ CAST_Int_to_Q_LINK_TM_conversions",
  scope_123_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions */
static const MappingEntry scope_122_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_CAST_Int_to_NID_BG_TM_conversions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_122 = {
  "TM_conversions::CAST_Int_to_NID_BG/ CAST_Int_to_NID_BG_TM_conversions",
  scope_122_entries, 6,
};

/* TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions */
static const MappingEntry scope_121_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_CAST_Int_to_NID_C_TM_conversions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_121 = {
  "TM_conversions::CAST_Int_to_NID_C/ CAST_Int_to_NID_C_TM_conversions",
  scope_121_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_MCOUNT/ CAST_Int_to_M_MCOUNT_TM_conversions */
static const MappingEntry scope_120_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "m_mcount", NULL, sizeof(M_MCOUNT), offsetof(outC_CAST_Int_to_M_MCOUNT_TM_conversions, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_120 = {
  "TM_conversions::CAST_Int_to_M_MCOUNT/ CAST_Int_to_M_MCOUNT_TM_conversions",
  scope_120_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_119_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L6_IfBlock1), &_Type_M_DUP_Utils, &scope_113_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L7_IfBlock1), &_Type_kcg_bool_Utils, &scope_113_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_119 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:then:",
  scope_119_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_118_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L5", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L5_IfBlock1), &_Type_M_DUP_Utils, &scope_114_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L62_IfBlock1), &_Type_kcg_bool_Utils, &scope_114_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_118 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:then:",
  scope_118_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_117_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L4_IfBlock1), &_Type_M_DUP_Utils, &scope_115_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_115_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_117 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:then:",
  scope_117_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_116_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_115_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L3_IfBlock1), &_Type_M_DUP_Utils, &scope_115_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_116 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:else:",
  scope_116_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_115_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_115_entries[0], isActive_kcg_bool_kcg_false, &scope_116, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_115_entries[0], isActive_kcg_bool_kcg_true, &scope_117, 1, 2}
};
static const MappingScope scope_115 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:else:",
  scope_115_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_114_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_114_entries[0], isActive_kcg_bool_kcg_false, &scope_115, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_114_entries[0], isActive_kcg_bool_kcg_true, &scope_118, 1, 2}
};
static const MappingScope scope_114 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:else:",
  scope_114_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1: */
static const MappingEntry scope_113_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_113_entries[0], isActive_kcg_bool_kcg_false, &scope_114, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_113_entries[0], isActive_kcg_bool_kcg_true, &scope_119, 1, 2}
};
static const MappingScope scope_113 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversionsIfBlock1:",
  scope_113_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversions */
static const MappingEntry scope_112_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_113, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_dup", NULL, sizeof(M_DUP), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_dup_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_DUP_TM_conversions, m_dup_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_112 = {
  "TM_conversions::CAST_Int_to_M_DUP/ CAST_Int_to_M_DUP_TM_conversions",
  scope_112_entries, 6,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_111_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L2_IfBlock1), &_Type_N_TOTAL_Utils, &scope_95_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_95_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_111 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:then:",
  scope_111_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_110_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L1_IfBlock1), &_Type_N_TOTAL_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_96_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_110 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:then:",
  scope_110_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_109_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L19_IfBlock1), &_Type_N_TOTAL_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L38_IfBlock1), &_Type_kcg_bool_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_109 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:then:",
  scope_109_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_108_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L111_IfBlock1), &_Type_N_TOTAL_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L310_IfBlock1), &_Type_kcg_bool_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_108 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:then:",
  scope_108_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_107_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L113_IfBlock1), &_Type_N_TOTAL_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L312_IfBlock1), &_Type_kcg_bool_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_107 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_107_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_106_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L214_IfBlock1), &_Type_N_TOTAL_Utils, &scope_100_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_100_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_106 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_106_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_105_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L116_IfBlock1), &_Type_N_TOTAL_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_105 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_105_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_104_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L118_IfBlock1), &_Type_N_TOTAL_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L317_IfBlock1), &_Type_kcg_bool_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_104 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_104_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_103_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L119_IfBlock1), &_Type_N_TOTAL_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_103 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_103_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_102_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_false, &scope_103, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_true, &scope_104, 1, 2}
};
static const MappingScope scope_102 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_102_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_101_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_false, &scope_102, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_true, &scope_105, 1, 2}
};
static const MappingScope scope_101 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_101_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_100_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_100_entries[0], isActive_kcg_bool_kcg_false, &scope_101, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_100_entries[0], isActive_kcg_bool_kcg_true, &scope_106, 1, 2}
};
static const MappingScope scope_100 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_100_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_99_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_false, &scope_100, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_true, &scope_107, 1, 2}
};
static const MappingScope scope_99 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:else:",
  scope_99_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_98_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_false, &scope_99, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_true, &scope_108, 1, 2}
};
static const MappingScope scope_98 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:else:",
  scope_98_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_97_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_false, &scope_98, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_true, &scope_109, 1, 2}
};
static const MappingScope scope_97 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:else:",
  scope_97_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_96_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_96_entries[0], isActive_kcg_bool_kcg_false, &scope_97, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_96_entries[0], isActive_kcg_bool_kcg_true, &scope_110, 1, 2}
};
static const MappingScope scope_96 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:else:",
  scope_96_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1: */
static const MappingEntry scope_95_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_95_entries[0], isActive_kcg_bool_kcg_false, &scope_96, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_95_entries[0], isActive_kcg_bool_kcg_true, &scope_111, 1, 2}
};
static const MappingScope scope_95 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversionsIfBlock1:",
  scope_95_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversions */
static const MappingEntry scope_94_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_95, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, n_pig), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "n_total_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_TOTAL_TM_conversions, n_total_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_94 = {
  "TM_conversions::CAST_Int_to_N_TOTAL/ CAST_Int_to_N_TOTAL_TM_conversions",
  scope_94_entries, 6,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_93_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2_IfBlock1), &_Type_N_PIG_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_93 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then:",
  scope_93_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_92_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L1_IfBlock1), &_Type_N_PIG_Utils, &scope_78_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_92 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then:",
  scope_92_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_91_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L18_IfBlock1), &_Type_N_PIG_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_91 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then:",
  scope_91_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_90_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L110_IfBlock1), &_Type_N_PIG_Utils, &scope_80_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L39_IfBlock1), &_Type_kcg_bool_Utils, &scope_80_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_90 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then:",
  scope_90_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L112_IfBlock1), &_Type_N_PIG_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L311_IfBlock1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_89 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_89_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_88_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L214_IfBlock1), &_Type_N_PIG_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L413_IfBlock1), &_Type_kcg_bool_Utils, &scope_82_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_88 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_88_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_87_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L116_IfBlock1), &_Type_N_PIG_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_83_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_87 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_87_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_86_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L118_IfBlock1), &_Type_N_PIG_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L417_IfBlock1), &_Type_kcg_bool_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_86 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_86_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_85_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L220_IfBlock1), &_Type_N_PIG_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L319_IfBlock1), &_Type_kcg_bool_Utils, &scope_84_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_85 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_85_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_84_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_false, &scope_85, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_84_entries[0], isActive_kcg_bool_kcg_true, &scope_86, 1, 2}
};
static const MappingScope scope_84 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_84_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_83_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_false, &scope_84, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_83_entries[0], isActive_kcg_bool_kcg_true, &scope_87, 1, 2}
};
static const MappingScope scope_83 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_83_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_82_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_82_entries[0], isActive_kcg_bool_kcg_false, &scope_83, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_82_entries[0], isActive_kcg_bool_kcg_true, &scope_88, 1, 2}
};
static const MappingScope scope_82 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_82_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_81_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_false, &scope_82, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_89, 1, 2}
};
static const MappingScope scope_81 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:",
  scope_81_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_80_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_80_entries[0], isActive_kcg_bool_kcg_false, &scope_81, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_80_entries[0], isActive_kcg_bool_kcg_true, &scope_90, 1, 2}
};
static const MappingScope scope_80 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:",
  scope_80_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_79_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_false, &scope_80, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_91, 1, 2}
};
static const MappingScope scope_79 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:",
  scope_79_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_78_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_78_entries[0], isActive_kcg_bool_kcg_false, &scope_79, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_78_entries[0], isActive_kcg_bool_kcg_true, &scope_92, 1, 2}
};
static const MappingScope scope_78 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:",
  scope_78_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1: */
static const MappingEntry scope_77_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_false, &scope_78, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_true, &scope_93, 1, 2}
};
static const MappingScope scope_77 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:",
  scope_77_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions */
static const MappingEntry scope_76_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_77, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "n_pig_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_76 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions",
  scope_76_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_75_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L4_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_71_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_75 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:then:",
  scope_75_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_74_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L3_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_72_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_72_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_74 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:then:",
  scope_74_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_73_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L1_IfBlock1), &_Type_Q_MEDIA_Utils, &scope_72_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_72_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_73 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:else:",
  scope_73_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_72_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_72_entries[0], isActive_kcg_bool_kcg_false, &scope_73, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_72_entries[0], isActive_kcg_bool_kcg_true, &scope_74, 1, 2}
};
static const MappingScope scope_72 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:else:",
  scope_72_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1: */
static const MappingEntry scope_71_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_false, &scope_72, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_71_entries[0], isActive_kcg_bool_kcg_true, &scope_75, 1, 2}
};
static const MappingScope scope_71 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversionsIfBlock1:",
  scope_71_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversions */
static const MappingEntry scope_70_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_71, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_media", NULL, sizeof(Q_MEDIA), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_media_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_MEDIA_TM_conversions, q_media_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_70 = {
  "TM_conversions::CAST_Int_to_Q_MEDIA/ CAST_Int_to_Q_MEDIA_TM_conversions",
  scope_70_entries, 6,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4_IfBlock1), &_Type_M_VERSION_Utils, &scope_61_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_61_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_69 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:then:",
  scope_69_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_68_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L3_IfBlock1), &_Type_M_VERSION_Utils, &scope_62_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L53_IfBlock1), &_Type_kcg_bool_Utils, &scope_62_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_68 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:then:",
  scope_68_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_67_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L2_IfBlock1), &_Type_M_VERSION_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L44_IfBlock1), &_Type_kcg_bool_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_67 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:then:",
  scope_67_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_66_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L26_IfBlock1), &_Type_M_VERSION_Utils, &scope_64_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L45_IfBlock1), &_Type_kcg_bool_Utils, &scope_64_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_66 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:then:",
  scope_66_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_65_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L1_IfBlock1), &_Type_kcg_bool_Utils, &scope_64_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L27_IfBlock1), &_Type_M_VERSION_Utils, &scope_64_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_65 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:else:",
  scope_65_entries, 2,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_64_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_64_entries[0], isActive_kcg_bool_kcg_false, &scope_65, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_64_entries[0], isActive_kcg_bool_kcg_true, &scope_66, 1, 2}
};
static const MappingScope scope_64 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:else:",
  scope_64_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_63_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_false, &scope_64, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_true, &scope_67, 1, 2}
};
static const MappingScope scope_63 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:else:",
  scope_63_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_62_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_false, &scope_63, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_true, &scope_68, 1, 2}
};
static const MappingScope scope_62 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:else:",
  scope_62_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1: */
static const MappingEntry scope_61_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_false, &scope_62, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_true, &scope_69, 1, 2}
};
static const MappingScope scope_61 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversionsIfBlock1:",
  scope_61_entries, 3,
};

/* TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions */
static const MappingEntry scope_60_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_61, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "m_version_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_M_VERSION_TM_conversions, m_version_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_60 = {
  "TM_conversions::CAST_Int_to_M_VERSION/ CAST_Int_to_M_VERSION_TM_conversions",
  scope_60_entries, 6,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_59_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L4", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L4_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_55_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_59 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:then:",
  scope_59_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_58_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L3", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L3_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L51_IfBlock1), &_Type_kcg_bool_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_58 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:then:",
  scope_58_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_57_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L1_IfBlock1), &_Type_Q_UPDOWN_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L2_IfBlock1), &_Type_kcg_bool_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0}
};
static const MappingScope scope_57 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:else:",
  scope_57_entries, 2,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_56_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive_kcg_bool_kcg_false, &scope_57, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive_kcg_bool_kcg_true, &scope_58, 1, 2}
};
static const MappingScope scope_56 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:else:",
  scope_56_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1: */
static const MappingEntry scope_55_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_false, &scope_56, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_55_entries[0], isActive_kcg_bool_kcg_true, &scope_59, 1, 2}
};
static const MappingScope scope_55 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversionsIfBlock1:",
  scope_55_entries, 3,
};

/* TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversions */
static const MappingEntry scope_54_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_55, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L12), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_OUTPUT, "q_updown", NULL, sizeof(Q_UPDOWN), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "q_updown_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions, q_updown_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_54 = {
  "TM_conversions::CAST_Int_to_Q_UPDOWN/ CAST_Int_to_Q_UPDOWN_TM_conversions",
  scope_54_entries, 6,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_53_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_53 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_53_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_52_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_52 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_52_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_51_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_51 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_51_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_50_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_50 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_50_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_49_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_49 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_49_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_48_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_48 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_48_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_47_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_0 1", NULL, sizeof(outC_Balise_341_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_158, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_341_1 1", NULL, sizeof(outC_Balise_341_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_159, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_146, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_145, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_48, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_49, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_50, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_51, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_52, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_53, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 19}
};
static const MappingScope scope_47 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341/ Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_47_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_46_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_46 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_46_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_45_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_45 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_45_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_44_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_44 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_44_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_43_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_43 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_43_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_42_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_42 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_42_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_41_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_41 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_41_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_40_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_0 1", NULL, sizeof(outC_Balise_365_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_156, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_365_1 1", NULL, sizeof(outC_Balise_365_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_157, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_146, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_145, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_41, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_42, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_43, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_44, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_45, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_46, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 19}
};
static const MappingScope scope_40 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365/ Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_40_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_39_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_39 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_39_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_38_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_38 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_38_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_37_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_37 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_37_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_36_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_36 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_36_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_35_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_35 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_35_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_34_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_34 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_34_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_33_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_0 1", NULL, sizeof(outC_Balise_369_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_155, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_369_1 1", NULL, sizeof(outC_Balise_369_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_154, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_146, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_145, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_34, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_35, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_36, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_37, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_38, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_39, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 19}
};
static const MappingScope scope_33 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369/ Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_33_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_32_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_32 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_32_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_31_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_31 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_31_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_30_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_30 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_30_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_29_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_29 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_29_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_28_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_28 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_28_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_27_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_27 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_27_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_26_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_0 1", NULL, sizeof(outC_Balise_366_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_152, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_366_1 1", NULL, sizeof(outC_Balise_366_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_153, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_146, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_145, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_27, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_28, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_29, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_30, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_31, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_32, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 19}
};
static const MappingScope scope_26 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366/ Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_26_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_25_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_25 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_25_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_24_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_24 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_24_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_23_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_23 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_23_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_22_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_22 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_22_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_21_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_21 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_21_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_20_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_20 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_20_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_19_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_0 1", NULL, sizeof(outC_Balise_368_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_151, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_368_1 1", NULL, sizeof(outC_Balise_368_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_150, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_146, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_145, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_20, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_21, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_22, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_23, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_24, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_25, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 19}
};
static const MappingScope scope_19 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368/ Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_19_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_18_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_18 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_18_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_17_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_17 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_17_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_16_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_16 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_16_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_15_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_15 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_15_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_14_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_14 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_14_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_13_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_13 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_13_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_12_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_0 1", NULL, sizeof(outC_Balise_367_0_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_148, 1, 0},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_367_1 1", NULL, sizeof(outC_Balise_367_1_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_149, 1, 9},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_146, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_145, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_13, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_14, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_15, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_16, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_17, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_18, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 19}
};
static const MappingScope scope_12 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367/ Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_12_entries, 37,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/ */
static const MappingEntry scope_11_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_6), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_11 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 6/",
  scope_11_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/ */
static const MappingEntry scope_10_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_5), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_10 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 5/",
  scope_10_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/ */
static const MappingEntry scope_9_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_4), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_9 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 4/",
  scope_9_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/ */
static const MappingEntry scope_8_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_3), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_8 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 3/",
  scope_8_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/ */
static const MappingEntry scope_7_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_2), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_7 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 2/",
  scope_7_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/ */
static const MappingEntry scope_6_entries[4] = {
  /* 0 */ { MAP_OUTPUT, "B_data_out", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, B_data_out_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1_1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2_1), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3_1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 3}
};
static const MappingScope scope_6 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_BijlmerInfraLib::No_Balise 1/",
  scope_6_entries, 4,
};

/* AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer */
static const MappingEntry scope_5_entries[37] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_0_00A 1", NULL, sizeof(outC_Balise_364_0_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _1_Context_1), NULL, NULL, NULL, &scope_147, 1, 9},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_364_1_00A 1", NULL, sizeof(outC_Balise_364_1_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _2_Context_1), NULL, NULL, NULL, &scope_144, 1, 0},
  /* 2 */ { MAP_OUTPUT, "BG_message_out", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, BG_message_out), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 36},
  /* 3 */ { MAP_LOCAL, "BaliseDataIn", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataIn), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 10},
  /* 4 */ { MAP_LOCAL, "BaliseDataOut", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, BaliseDataOut), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 11},
  /* 5 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Close 1", NULL, sizeof(outC_Balise_Group_Close_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _3_Context_1), NULL, NULL, NULL, &scope_146, 1, 8},
  /* 6 */ { MAP_INSTANCE, "InfraLib::Balise_Group_Init 1", NULL, sizeof(outC_Balise_Group_Init_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, Context_1), NULL, NULL, NULL, &scope_145, 1, 7},
  /* 7 */ { MAP_EXPANDED, "InfraLib::No_Balise 1", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 1},
  /* 8 */ { MAP_EXPANDED, "InfraLib::No_Balise 2", NULL, 0, 0, NULL, NULL, NULL, &scope_7, 1, 2},
  /* 9 */ { MAP_EXPANDED, "InfraLib::No_Balise 3", NULL, 0, 0, NULL, NULL, NULL, &scope_8, 1, 3},
  /* 10 */ { MAP_EXPANDED, "InfraLib::No_Balise 4", NULL, 0, 0, NULL, NULL, NULL, &scope_9, 1, 4},
  /* 11 */ { MAP_EXPANDED, "InfraLib::No_Balise 5", NULL, 0, 0, NULL, NULL, NULL, &scope_10, 1, 5},
  /* 12 */ { MAP_EXPANDED, "InfraLib::No_Balise 6", NULL, 0, 0, NULL, NULL, NULL, &scope_11, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L1", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L1), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 12},
  /* 14 */ { MAP_LOCAL, "_L11", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L11), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L13", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L13), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L16", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L16), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L19", NULL, sizeof(BaliseGroupData_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L19), &_Type_BaliseGroupData_TM_Utils, NULL, NULL, &scope_473, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L2", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L2), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 13},
  /* 20 */ { MAP_LOCAL, "_L20", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L20), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 25},
  /* 21 */ { MAP_LOCAL, "_L21", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L21), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L22), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L23", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L23), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L24", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L24), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L25", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L25), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L26), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_int), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L27), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 32},
  /* 28 */ { MAP_LOCAL, "_L28", NULL, sizeof(kcg_real), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L28), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 34},
  /* 29 */ { MAP_LOCAL, "_L29", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L29), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 35},
  /* 30 */ { MAP_LOCAL, "_L3", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L3), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 14},
  /* 31 */ { MAP_LOCAL, "_L4", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L4), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 15},
  /* 32 */ { MAP_LOCAL, "_L5", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L5), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L6", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L6), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 17},
  /* 34 */ { MAP_LOCAL, "_L7", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L7), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 18},
  /* 35 */ { MAP_LOCAL, "_L8", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L8), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 33},
  /* 36 */ { MAP_LOCAL, "_L9", NULL, sizeof(B_data_internal_T_InfraLib), offsetof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer, _L9), &_Type_B_data_internal_T_InfraLib_Utils, NULL, NULL, &scope_472, 1, 19}
};
static const MappingScope scope_5 = {
  "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A/ Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer",
  scope_5_entries, 37,
};

/* FirstTest::Story00A_RBC/ Story00A_RBC_FirstTest */
static const MappingEntry scope_4_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL2::Sheet06_Bijlmer_RBC::Amsterdam_Utrecht_Sheet06_Biljmer_integration 1", NULL, sizeof(outC_Amsterdam_Utrecht_Sheet06_AmsterdamUtrechtL2_Sheet06_Bijlmer_RBC), offsetof(outC_Story00A_RBC_FirstTest, Context_1), NULL, NULL, NULL, &scope_143, 1, 3},
  /* 1 */ { MAP_OUTPUT, "Compressed_Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Story00A_RBC_FirstTest, Compressed_Packets_out), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 15},
  /* 2 */ { MAP_OUTPUT, "Compressed_Radio_Message_out", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_Story00A_RBC_FirstTest, Compressed_Radio_Message_out), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 16},
  /* 3 */ { MAP_OUTPUT, "RadioTrackTrainHeader_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Story00A_RBC_FirstTest, RadioTrackTrainHeader_out), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 14},
  /* 4 */ { MAP_INSTANCE, "TM_RBC_conversions::compressed_to_Radio_Track_Train_H 1", NULL, sizeof(outC_compressed_to_Radio_Track_TM_RBC_conversions), offsetof(outC_Story00A_RBC_FirstTest, _1_Context_1), NULL, NULL, NULL, &scope_129, 1, 0},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::C_TrackTrainMessage_to_Int 1", NULL, sizeof(outC_C_TrackTrainMessage_to_Int_TM_conversions), offsetof(outC_Story00A_RBC_FirstTest, _2_Context_1), NULL, NULL, NULL, &scope_141, 1, 1},
  /* 6 */ { MAP_INSTANCE, "TM_specific::DIRTY_m_version_filter_for_aprobst 1", NULL, sizeof(outC_DIRTY_m_version_filter_fo_TM_specific), offsetof(outC_Story00A_RBC_FirstTest, _3_Context_1), NULL, NULL, NULL, &scope_142, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_Story00A_RBC_FirstTest, _L10), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 11},
  /* 8 */ { MAP_LOCAL, "_L13", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Story00A_RBC_FirstTest, _L13), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 13},
  /* 9 */ { MAP_LOCAL, "_L14", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Story00A_RBC_FirstTest, _L14), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 10 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Story00A_RBC_FirstTest, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_Story00A_RBC_FirstTest, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 12 */ { MAP_LOCAL, "_L5", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Story00A_RBC_FirstTest, _L5), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 6},
  /* 13 */ { MAP_LOCAL, "_L6", NULL, sizeof(M_TrackTrain_Radio_T_TM_radio_messages), offsetof(outC_Story00A_RBC_FirstTest, _L6), &_Type_M_TrackTrain_Radio_T_TM_radio_messages_Utils, NULL, NULL, &scope_427, 1, 7},
  /* 14 */ { MAP_LOCAL, "_L7", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Story00A_RBC_FirstTest, _L7), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 8},
  /* 15 */ { MAP_LOCAL, "_L8", NULL, sizeof(_3_Radio_TrackTrain_Header_T_TM), offsetof(outC_Story00A_RBC_FirstTest, _L8), &_Type__3_Radio_TrackTrain_Header_T_TM_Utils, NULL, NULL, &scope_424, 1, 9},
  /* 16 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedRadioMessage_TM), offsetof(outC_Story00A_RBC_FirstTest, _L9), &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 10}
};
static const MappingScope scope_4 = {
  "FirstTest::Story00A_RBC/ Story00A_RBC_FirstTest",
  scope_4_entries, 17,
};

/* TM_conversions::CASTLIB_BaliseHeaders/ CASTLIB_BaliseHeaders_TM_conversions */
static const MappingEntry scope_3_entries[33] = {
  /* 0 */ { MAP_OUTPUT, "Out", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, Out), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_418, 1, 32},
  /* 1 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_DUP 1", NULL, sizeof(outC_CAST_Int_to_M_DUP_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _4_Context_1), NULL, NULL, NULL, &scope_112, 1, 5},
  /* 2 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_MCOUNT 1", NULL, sizeof(outC_CAST_Int_to_M_MCOUNT_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _3_Context_1), NULL, NULL, NULL, &scope_120, 1, 6},
  /* 3 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_M_VERSION 1", NULL, sizeof(outC_CAST_Int_to_M_VERSION_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _8_Context_1), NULL, NULL, NULL, &scope_60, 1, 1},
  /* 4 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_BG 1", NULL, sizeof(outC_CAST_Int_to_NID_BG_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _1_Context_1), NULL, NULL, NULL, &scope_122, 1, 8},
  /* 5 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_NID_C 1", NULL, sizeof(outC_CAST_Int_to_NID_C_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _2_Context_1), NULL, NULL, NULL, &scope_121, 1, 7},
  /* 6 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_PIG 1", NULL, sizeof(outC_CAST_Int_to_N_PIG_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _6_Context_1), NULL, NULL, NULL, &scope_76, 1, 3},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_TOTAL 1", NULL, sizeof(outC_CAST_Int_to_N_TOTAL_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _5_Context_1), NULL, NULL, NULL, &scope_94, 1, 4},
  /* 8 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_LINK 1", NULL, sizeof(outC_CAST_Int_to_Q_LINK_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, Context_1), NULL, NULL, NULL, &scope_123, 1, 9},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_MEDIA 1", NULL, sizeof(outC_CAST_Int_to_Q_MEDIA_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _7_Context_1), NULL, NULL, NULL, &scope_70, 1, 2},
  /* 10 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_Q_UPDOWN 1", NULL, sizeof(outC_CAST_Int_to_Q_UPDOWN_TM_conversions), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _9_Context_1), NULL, NULL, NULL, &scope_54, 1, 0},
  /* 11 */ { MAP_LOCAL, "_L1", NULL, sizeof(BaliseTelegramHeader_int_T_TM), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L1), &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 10},
  /* 12 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 14 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 20},
  /* 15 */ { MAP_LOCAL, "_L22", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L22), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_418, 1, 21},
  /* 16 */ { MAP_LOCAL, "_L23", NULL, sizeof(Q_UPDOWN), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L23), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 22},
  /* 17 */ { MAP_LOCAL, "_L24", NULL, sizeof(M_VERSION), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L24), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L25", NULL, sizeof(Q_MEDIA), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L25), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L26", NULL, sizeof(N_PIG), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L26), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L27", NULL, sizeof(N_TOTAL), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L27), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 26},
  /* 21 */ { MAP_LOCAL, "_L28", NULL, sizeof(M_DUP), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L28), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 27},
  /* 22 */ { MAP_LOCAL, "_L29", NULL, sizeof(M_MCOUNT), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L29), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 28},
  /* 23 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L3), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 19},
  /* 24 */ { MAP_LOCAL, "_L30", NULL, sizeof(NID_C), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L30), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L31", NULL, sizeof(NID_BG), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L31), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L32", NULL, sizeof(Q_LINK), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L32), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L4), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 28 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L5), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 29 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L6), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 30 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L7), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 15},
  /* 31 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L8), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 32 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), offsetof(outC_CASTLIB_BaliseHeaders_TM_conversions, _L9), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13}
};
static const MappingScope scope_3 = {
  "TM_conversions::CASTLIB_BaliseHeaders/ CASTLIB_BaliseHeaders_TM_conversions",
  scope_3_entries, 33,
};

/* FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest */
static const MappingEntry scope_2_entries[17] = {
  /* 0 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_341 1", NULL, sizeof(outC_Balise_Group_341_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _6_Context_1), NULL, NULL, NULL, &scope_47, 1, 6},
  /* 1 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_364_00A 1", NULL, sizeof(outC_Balise_Group_364_00A_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, Context_1), NULL, NULL, NULL, &scope_5, 1, 0},
  /* 2 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_365 1", NULL, sizeof(outC_Balise_Group_365_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _1_Context_1), NULL, NULL, NULL, &scope_40, 1, 5},
  /* 3 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_366 1", NULL, sizeof(outC_Balise_Group_366_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _2_Context_1), NULL, NULL, NULL, &scope_26, 1, 3},
  /* 4 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_367 1", NULL, sizeof(outC_Balise_Group_367_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _3_Context_1), NULL, NULL, NULL, &scope_12, 1, 1},
  /* 5 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_368 1", NULL, sizeof(outC_Balise_Group_368_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _4_Context_1), NULL, NULL, NULL, &scope_19, 1, 2},
  /* 6 */ { MAP_INSTANCE, "AmsterdamUtrechtL1::Sheet06_Bijlmer::Balise_Group_369 1", NULL, sizeof(outC_Balise_Group_369_AmsterdamUtrechtL1_Sheet06_Bijlmer), offsetof(outC_Story00A_BTM_FirstTest, _5_Context_1), NULL, NULL, NULL, &scope_33, 1, 4},
  /* 7 */ { MAP_OUTPUT, "BM", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, BM), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 16},
  /* 8 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_real), offsetof(outC_Story00A_BTM_FirstTest, _L33), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 15},
  /* 9 */ { MAP_LOCAL, "_L34", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L34), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 14},
  /* 10 */ { MAP_LOCAL, "_L35", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L35), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 13},
  /* 11 */ { MAP_LOCAL, "_L36", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L36), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 12},
  /* 12 */ { MAP_LOCAL, "_L37", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L37), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L38", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L38), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 10},
  /* 14 */ { MAP_LOCAL, "_L39", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L39), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 9},
  /* 15 */ { MAP_LOCAL, "_L40", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L40), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 8},
  /* 16 */ { MAP_LOCAL, "_L41", NULL, sizeof(CompressedBaliseMessage_TM), offsetof(outC_Story00A_BTM_FirstTest, _L41), &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 7}
};
static const MappingScope scope_2 = {
  "FirstTest::Story00A_BTM/ Story00A_BTM_FirstTest",
  scope_2_entries, 17,
};

/* FirstTest::Story00A/ Story00A_FirstTest */
static const MappingEntry scope_1_entries[19] = {
  /* 0 */ { MAP_OUTPUT, "Balise_Header", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (size_t)&outputs_ctx.Balise_Header, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_418, 1, 13},
  /* 1 */ { MAP_OUTPUT, "Balise_Packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx.Balise_Packets, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 12},
  /* 2 */ { MAP_OUTPUT, "Compressed_Packets_out", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx.Compressed_Packets_out, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 15},
  /* 3 */ { MAP_OUTPUT, "Compressed_Radio_Message_out", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx.Compressed_Radio_Message_out, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 16},
  /* 4 */ { MAP_INSTANCE, "FirstTest::Story00A_BTM 1", NULL, sizeof(outC_Story00A_BTM_FirstTest), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_2, 1, 0},
  /* 5 */ { MAP_INSTANCE, "FirstTest::Story00A_RBC 1", NULL, sizeof(outC_Story00A_RBC_FirstTest), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_4, 1, 2},
  /* 6 */ { MAP_OUTPUT, "RadioTrackTrainHeader_out", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), (size_t)&outputs_ctx.RadioTrackTrainHeader_out, &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 14},
  /* 7 */ { MAP_INSTANCE, "TM_conversions::CASTLIB_BaliseHeaders 1", NULL, sizeof(outC_CASTLIB_BaliseHeaders_TM_conversions), (size_t)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_3, 1, 1},
  /* 8 */ { MAP_INPUT, "TrainPos", NULL, sizeof(kcg_real), (size_t)&inputs_ctx.TrainPos, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 17},
  /* 9 */ { MAP_INPUT, "Trigger_in", NULL, sizeof(kcg_int), (size_t)&inputs_ctx.Trigger_in, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 10 */ { MAP_LOCAL, "_L1", NULL, sizeof(CompressedBaliseMessage_TM), (size_t)&outputs_ctx._L1, &_Type_CompressedBaliseMessage_TM_Utils, NULL, NULL, &scope_426, 1, 3},
  /* 11 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedRadioMessage_TM), (size_t)&outputs_ctx._L10, &_Type_CompressedRadioMessage_TM_Utils, NULL, NULL, &scope_425, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L13, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 13 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_real), (size_t)&outputs_ctx._L2, &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 4},
  /* 14 */ { MAP_LOCAL, "_L5", NULL, sizeof(BaliseTelegramHeader_int_T_TM), (size_t)&outputs_ctx._L5, &_Type_BaliseTelegramHeader_int_T_TM_Utils, NULL, NULL, &scope_423, 1, 6},
  /* 15 */ { MAP_LOCAL, "_L6", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L6, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 5},
  /* 16 */ { MAP_LOCAL, "_L7", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), (size_t)&outputs_ctx._L7, &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_418, 1, 7},
  /* 17 */ { MAP_LOCAL, "_L8", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), (size_t)&outputs_ctx._L8, &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_417, 1, 10},
  /* 18 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L9, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_422, 1, 9}
};
static const MappingScope scope_1 = {
  "FirstTest::Story00A/ Story00A_FirstTest",
  scope_1_entries, 19,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "FirstTest::Story00A", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

