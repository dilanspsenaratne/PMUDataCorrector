OPFILE 1.11 PHASOR
Solver<Euler<F64>,Direct<F64,AdmittanceMatrix<F64>>> {
	name=RTS96_pins_simple_v2_solver
	powerSystem=RTS96_pins_simple_v2
}
PowerSystem {
	name=RTS96_pins_simple_v2
	frequency=60
	base=100
	network {
		items {
			bus_101
			bus_102
			bus_103
			bus_104
			bus_105
			bus_106
			bus_107
			bus_108
			bus_109
			bus_110
			bus_111
			bus_112
			bus_113
			bus_114
			bus_115
			bus_116
			bus_117
			bus_118
			bus_119
			bus_120
			bus_121
			bus_122
			bus_123
			bus_124
			bus_201
			bus_202
			bus_203
			bus_204
			bus_205
			bus_206
			bus_207
			bus_208
			bus_209
			bus_210
			bus_211
			bus_212
			bus_213
			bus_214
			bus_215
			bus_216
			bus_217
			bus_218
			bus_219
			bus_220
			bus_221
			bus_222
			bus_223
			bus_224
			bus_301
			bus_302
			bus_303
			bus_304
			bus_305
			bus_306
			bus_307
			bus_308
			bus_309
			bus_310
			bus_311
			bus_312
			bus_313
			bus_314
			bus_315
			bus_316
			bus_317
			bus_318
			bus_319
			bus_320
			bus_321
			bus_322
			bus_323
			bus_324
			bus_325
			load_P_101_1
			load_P_102_1
			load_P_103_1
			load_P_104_1
			load_P_105_1
			load_P_106_1
			load_P_107_1
			load_P_108_1
			load_P_109_1
			load_P_110_1
			load_P_113_1
			load_P_114_1
			load_P_115_1
			load_P_116_1
			load_P_118_1
			load_P_119_1
			load_P_120_1
			load_P_201_1
			load_P_202_1
			load_P_203_1
			load_P_204_1
			load_P_205_1
			load_P_206_1
			load_P_207_1
			load_P_208_1
			load_P_209_1
			load_P_210_1
			load_P_213_1
			load_P_214_1
			load_P_215_1
			load_P_216_1
			load_P_218_1
			load_P_219_1
			load_P_220_1
			load_P_301_1
			load_P_302_1
			load_P_303_1
			load_P_304_1
			load_P_305_1
			load_P_306_1
			load_P_307_1
			load_P_308_1
			load_P_309_1
			load_P_310_1
			load_P_313_1
			load_P_314_1
			load_P_315_1
			load_P_316_1
			load_P_318_1
			load_P_319_1
			load_P_320_1
			fSH_106_1
			fSH_206_1
			fSH_306_1
			line_101_to_102_1
			line_101_to_103_1
			line_101_to_105_1
			line_102_to_104_1
			line_102_to_106_1
			line_103_to_109_1
			line_104_to_109_1
			line_105_to_110_1
			line_106_to_110_1
			line_107_to_108_1
			line_107_to_203_1
			line_108_to_109_1
			line_108_to_110_1
			line_111_to_113_1
			line_111_to_114_1
			line_112_to_113_1
			line_112_to_123_1
			line_113_to_123_1
			line_113_to_215_1
			line_114_to_116_1
			line_115_to_116_1
			line_115_to_121_1
			line_115_to_121_2
			line_115_to_124_1
			line_116_to_117_1
			line_116_to_119_1
			line_117_to_118_1
			line_117_to_122_1
			line_118_to_121_1
			line_118_to_121_2
			line_119_to_120_1
			line_119_to_120_2
			line_120_to_123_1
			line_120_to_123_2
			line_121_to_122_1
			line_121_to_325_1
			line_123_to_217_1
			line_201_to_202_1
			line_201_to_203_1
			line_201_to_205_1
			line_202_to_204_1
			line_202_to_206_1
			line_203_to_209_1
			line_204_to_209_1
			line_205_to_210_1
			line_206_to_210_1
			line_207_to_208_1
			line_208_to_209_1
			line_208_to_210_1
			line_211_to_213_1
			line_211_to_214_1
			line_212_to_213_1
			line_212_to_223_1
			line_213_to_223_1
			line_214_to_216_1
			line_215_to_216_1
			line_215_to_221_1
			line_215_to_221_2
			line_215_to_224_1
			line_216_to_217_1
			line_216_to_219_1
			line_217_to_218_1
			line_217_to_222_1
			line_218_to_221_1
			line_218_to_221_2
			line_219_to_220_1
			line_219_to_220_2
			line_220_to_223_1
			line_220_to_223_2
			line_221_to_222_1
			line_223_to_318_1
			line_301_to_302_1
			line_301_to_303_1
			line_301_to_305_1
			line_302_to_304_1
			line_302_to_306_1
			line_303_to_309_1
			line_304_to_309_1
			line_305_to_310_1
			line_306_to_310_1
			line_307_to_308_1
			line_308_to_309_1
			line_308_to_310_1
			line_311_to_313_1
			line_311_to_314_1
			line_312_to_313_1
			line_312_to_323_1
			line_313_to_323_1
			line_314_to_316_1
			line_315_to_316_1
			line_315_to_321_1
			line_315_to_321_2
			line_315_to_324_1
			line_316_to_317_1
			line_316_to_319_1
			line_317_to_318_1
			line_317_to_322_1
			line_318_to_321_1
			line_318_to_321_2
			line_319_to_320_1
			line_319_to_320_2
			line_320_to_323_1
			line_320_to_323_2
			line_321_to_322_1
			xf_103_to_124_1
			xf_109_to_111_1
			xf_109_to_112_1
			xf_110_to_111_1
			xf_110_to_112_1
			xf_203_to_224_1
			xf_209_to_211_1
			xf_209_to_212_1
			xf_210_to_211_1
			xf_210_to_212_1
			xf_303_to_324_1
			xf_309_to_311_1
			xf_309_to_312_1
			xf_310_to_311_1
			xf_310_to_312_1
			xf_323_to_325_1
			gen_101_1
			gen_101_2
			gen_101_3
			gen_101_4
			gen_102_1
			gen_102_2
			gen_102_3
			gen_102_4
			gen_107_1
			gen_107_2
			gen_107_3
			gen_113_1
			gen_113_2
			gen_113_3
			gen_114_1
			gen_115_1
			gen_115_2
			gen_115_3
			gen_115_4
			gen_115_5
			gen_115_6
			gen_116_1
			gen_118_1
			gen_121_1
			gen_122_1
			gen_122_2
			gen_122_3
			gen_122_4
			gen_122_5
			gen_122_6
			gen_123_1
			gen_123_2
			gen_123_3
			gen_201_1
			gen_201_2
			gen_201_3
			gen_201_4
			gen_202_1
			gen_202_2
			gen_202_3
			gen_202_4
			gen_207_1
			gen_207_2
			gen_207_3
			gen_213_1
			gen_213_2
			gen_213_3
			gen_214_1
			gen_215_1
			gen_215_2
			gen_215_3
			gen_215_4
			gen_215_5
			gen_215_6
			gen_216_1
			gen_218_1
			gen_221_1
			gen_222_1
			gen_222_2
			gen_222_3
			gen_222_4
			gen_222_5
			gen_222_6
			gen_223_1
			gen_223_2
			gen_223_3
			gen_301_1
			gen_301_2
			gen_301_3
			gen_301_4
			gen_302_1
			gen_302_2
			gen_302_3
			gen_302_4
			gen_307_1
			gen_307_2
			gen_307_3
			gen_313_1
			gen_313_2
			gen_313_3
			gen_314_1
			gen_315_1
			gen_315_2
			gen_315_3
			gen_315_4
			gen_315_5
			gen_315_6
			gen_316_1
			gen_318_1
			gen_321_1
			gen_322_1
			gen_322_2
			gen_322_3
			gen_322_4
			gen_322_5
			gen_322_6
			gen_323_1
			gen_323_2
			gen_323_3
			ex_101_1
			ex_101_2
			ex_101_3
			ex_101_4
			ex_102_1
			ex_102_2
			ex_102_3
			ex_102_4
			ex_107_1
			ex_107_2
			ex_107_3
			ex_113_1
			ex_113_2
			ex_113_3
			ex_114_1
			ex_115_1
			ex_115_2
			ex_115_3
			ex_115_4
			ex_115_5
			ex_115_6
			ex_116_1
			ex_118_1
			ex_121_1
			ex_122_1
			ex_122_2
			ex_122_3
			ex_122_4
			ex_122_5
			ex_122_6
			ex_123_1
			ex_123_2
			ex_123_3
			ex_201_1
			ex_201_2
			ex_201_3
			ex_201_4
			ex_202_1
			ex_202_2
			ex_202_3
			ex_202_4
			ex_207_1
			ex_207_2
			ex_207_3
			ex_213_1
			ex_213_2
			ex_213_3
			ex_214_1
			ex_215_1
			ex_215_2
			ex_215_3
			ex_215_4
			ex_215_5
			ex_215_6
			ex_216_1
			ex_218_1
			ex_221_1
			ex_222_1
			ex_222_2
			ex_222_3
			ex_222_4
			ex_222_5
			ex_222_6
			ex_223_1
			ex_223_2
			ex_223_3
			ex_301_1
			ex_301_2
			ex_301_3
			ex_301_4
			ex_302_1
			ex_302_2
			ex_302_3
			ex_302_4
			ex_307_1
			ex_307_2
			ex_307_3
			ex_313_1
			ex_313_2
			ex_313_3
			ex_314_1
			ex_315_1
			ex_315_2
			ex_315_3
			ex_315_4
			ex_315_5
			ex_315_6
			ex_316_1
			ex_318_1
			ex_321_1
			ex_322_1
			ex_322_2
			ex_322_3
			ex_322_4
			ex_322_5
			ex_322_6
			ex_323_1
			ex_323_2
			ex_323_3
			tg_101_2
			tg_101_3
			tg_101_4
			tg_102_1
			tg_102_2
			tg_102_3
			tg_102_4
			tg_107_1
			tg_107_2
			tg_107_3
			tg_113_1
			tg_113_2
			tg_113_3
			tg_114_1
			tg_115_1
			tg_115_2
			tg_115_3
			tg_115_4
			tg_115_5
			tg_115_6
			tg_116_1
			tg_118_1
			tg_121_1
			tg_122_1
			tg_122_2
			tg_122_3
			tg_122_4
			tg_122_5
			tg_122_6
			tg_123_1
			tg_123_2
			tg_123_3
			tg_201_1
			tg_201_2
			tg_201_3
			tg_201_4
			tg_202_1
			tg_202_2
			tg_202_3
			tg_202_4
			tg_207_1
			tg_207_2
			tg_207_3
			tg_213_1
			tg_213_2
			tg_213_3
			tg_214_1
			tg_215_1
			tg_215_2
			tg_215_3
			tg_215_4
			tg_215_5
			tg_215_6
			tg_216_1
			tg_218_1
			tg_221_1
			tg_222_1
			tg_222_2
			tg_222_3
			tg_222_4
			tg_222_5
			tg_222_6
			tg_223_1
			tg_223_2
			tg_223_3
			tg_301_1
			tg_301_2
			tg_301_3
			tg_301_4
			tg_302_1
			tg_302_2
			tg_302_3
			tg_302_4
			tg_307_1
			tg_307_2
			tg_307_3
			tg_313_1
			tg_313_2
			tg_313_3
			tg_314_1
			tg_315_1
			tg_315_2
			tg_315_3
			tg_315_4
			tg_315_5
			tg_315_6
			tg_316_1
			tg_318_1
			tg_321_1
			tg_322_1
			tg_322_2
			tg_322_3
			tg_322_4
			tg_322_5
			tg_322_6
			tg_323_1
			tg_323_2
			tg_323_3
		}
		connectionsList {
			item {
				input=gen_101_1/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=gen_101_1/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_1/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=ex_101_1/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_1/inputs/XadIfd
				output=gen_101_1/outputs/XadIfd
			}
			item {
				input=ex_101_1/inputs/busIx
				output=gen_101_1/outputs/busIx
			}
			item {
				input=ex_101_1/inputs/busIy
				output=gen_101_1/outputs/busIy
			}
			item {
				input=ex_101_1/inputs/ExAux_eterm0
				output=gen_101_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_101_1/inputs/ExAux_etermAng0
				output=gen_101_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_101_1/inputs/ExAux_itAbs0
				output=gen_101_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_101_1/inputs/ExAux_itermAng0
				output=gen_101_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_101_1/inputs/Eterm0
				output=gen_101_1/outputs/Eterm0
			}
			item {
				input=ex_101_1/inputs/Efd0
				output=gen_101_1/outputs/Efd0
			}
			item {
				output=ex_101_1/outputs/Efd
				input=gen_101_1/inputs/Efd
			}
			item {
				input=gen_101_2/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=gen_101_2/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_2/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=ex_101_2/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_2/inputs/XadIfd
				output=gen_101_2/outputs/XadIfd
			}
			item {
				input=ex_101_2/inputs/busIx
				output=gen_101_2/outputs/busIx
			}
			item {
				input=ex_101_2/inputs/busIy
				output=gen_101_2/outputs/busIy
			}
			item {
				input=ex_101_2/inputs/ExAux_eterm0
				output=gen_101_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_101_2/inputs/ExAux_etermAng0
				output=gen_101_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_101_2/inputs/ExAux_itAbs0
				output=gen_101_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_101_2/inputs/ExAux_itermAng0
				output=gen_101_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_101_2/inputs/Eterm0
				output=gen_101_2/outputs/Eterm0
			}
			item {
				input=ex_101_2/inputs/Efd0
				output=gen_101_2/outputs/Efd0
			}
			item {
				output=ex_101_2/outputs/Efd
				input=gen_101_2/inputs/Efd
			}
			item {
				input=tg_101_2/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=tg_101_2/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=tg_101_2/inputs/slip
				output=gen_101_2/outputs/slip
			}
			item {
				input=tg_101_2/inputs/busIx
				output=gen_101_2/outputs/busIx
			}
			item {
				input=tg_101_2/inputs/busIy
				output=gen_101_2/outputs/busIy
			}
			item {
				input=tg_101_2/inputs/Pmech0
				output=gen_101_2/outputs/Pmech0
			}
			item {
				input=tg_101_2/inputs/mBasePower
				output=gen_101_2/outputs/mBasePower
			}
			item {
				output=tg_101_2/outputs/Pmech
				input=gen_101_2/inputs/Pmech
			}
			item {
				input=gen_101_3/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=gen_101_3/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_3/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=ex_101_3/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_3/inputs/XadIfd
				output=gen_101_3/outputs/XadIfd
			}
			item {
				input=ex_101_3/inputs/busIx
				output=gen_101_3/outputs/busIx
			}
			item {
				input=ex_101_3/inputs/busIy
				output=gen_101_3/outputs/busIy
			}
			item {
				input=ex_101_3/inputs/ExAux_eterm0
				output=gen_101_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_101_3/inputs/ExAux_etermAng0
				output=gen_101_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_101_3/inputs/ExAux_itAbs0
				output=gen_101_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_101_3/inputs/ExAux_itermAng0
				output=gen_101_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_101_3/inputs/Eterm0
				output=gen_101_3/outputs/Eterm0
			}
			item {
				input=ex_101_3/inputs/Efd0
				output=gen_101_3/outputs/Efd0
			}
			item {
				output=ex_101_3/outputs/Efd
				input=gen_101_3/inputs/Efd
			}
			item {
				input=tg_101_3/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=tg_101_3/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=tg_101_3/inputs/slip
				output=gen_101_3/outputs/slip
			}
			item {
				input=tg_101_3/inputs/busIx
				output=gen_101_3/outputs/busIx
			}
			item {
				input=tg_101_3/inputs/busIy
				output=gen_101_3/outputs/busIy
			}
			item {
				input=tg_101_3/inputs/Pmech0
				output=gen_101_3/outputs/Pmech0
			}
			item {
				input=tg_101_3/inputs/mBasePower
				output=gen_101_3/outputs/mBasePower
			}
			item {
				output=tg_101_3/outputs/Pmech
				input=gen_101_3/inputs/Pmech
			}
			item {
				input=gen_101_4/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=gen_101_4/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_4/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=ex_101_4/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=ex_101_4/inputs/XadIfd
				output=gen_101_4/outputs/XadIfd
			}
			item {
				input=ex_101_4/inputs/busIx
				output=gen_101_4/outputs/busIx
			}
			item {
				input=ex_101_4/inputs/busIy
				output=gen_101_4/outputs/busIy
			}
			item {
				input=ex_101_4/inputs/ExAux_eterm0
				output=gen_101_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_101_4/inputs/ExAux_etermAng0
				output=gen_101_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_101_4/inputs/ExAux_itAbs0
				output=gen_101_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_101_4/inputs/ExAux_itermAng0
				output=gen_101_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_101_4/inputs/Eterm0
				output=gen_101_4/outputs/Eterm0
			}
			item {
				input=ex_101_4/inputs/Efd0
				output=gen_101_4/outputs/Efd0
			}
			item {
				output=ex_101_4/outputs/Efd
				input=gen_101_4/inputs/Efd
			}
			item {
				input=tg_101_4/inputs/busVx
				output=bus_101/outputs/busVx
			}
			item {
				input=tg_101_4/inputs/busVy
				output=bus_101/outputs/busVy
			}
			item {
				input=tg_101_4/inputs/slip
				output=gen_101_4/outputs/slip
			}
			item {
				input=tg_101_4/inputs/busIx
				output=gen_101_4/outputs/busIx
			}
			item {
				input=tg_101_4/inputs/busIy
				output=gen_101_4/outputs/busIy
			}
			item {
				input=tg_101_4/inputs/Pmech0
				output=gen_101_4/outputs/Pmech0
			}
			item {
				input=tg_101_4/inputs/mBasePower
				output=gen_101_4/outputs/mBasePower
			}
			item {
				output=tg_101_4/outputs/Pmech
				input=gen_101_4/inputs/Pmech
			}
			item {
				input=gen_102_1/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=gen_102_1/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_1/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=ex_102_1/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_1/inputs/XadIfd
				output=gen_102_1/outputs/XadIfd
			}
			item {
				input=ex_102_1/inputs/busIx
				output=gen_102_1/outputs/busIx
			}
			item {
				input=ex_102_1/inputs/busIy
				output=gen_102_1/outputs/busIy
			}
			item {
				input=ex_102_1/inputs/ExAux_eterm0
				output=gen_102_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_102_1/inputs/ExAux_etermAng0
				output=gen_102_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_102_1/inputs/ExAux_itAbs0
				output=gen_102_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_102_1/inputs/ExAux_itermAng0
				output=gen_102_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_102_1/inputs/Eterm0
				output=gen_102_1/outputs/Eterm0
			}
			item {
				input=ex_102_1/inputs/Efd0
				output=gen_102_1/outputs/Efd0
			}
			item {
				output=ex_102_1/outputs/Efd
				input=gen_102_1/inputs/Efd
			}
			item {
				input=tg_102_1/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=tg_102_1/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=tg_102_1/inputs/slip
				output=gen_102_1/outputs/slip
			}
			item {
				input=tg_102_1/inputs/busIx
				output=gen_102_1/outputs/busIx
			}
			item {
				input=tg_102_1/inputs/busIy
				output=gen_102_1/outputs/busIy
			}
			item {
				input=tg_102_1/inputs/Pmech0
				output=gen_102_1/outputs/Pmech0
			}
			item {
				input=tg_102_1/inputs/mBasePower
				output=gen_102_1/outputs/mBasePower
			}
			item {
				output=tg_102_1/outputs/Pmech
				input=gen_102_1/inputs/Pmech
			}
			item {
				input=gen_102_2/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=gen_102_2/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_2/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=ex_102_2/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_2/inputs/XadIfd
				output=gen_102_2/outputs/XadIfd
			}
			item {
				input=ex_102_2/inputs/busIx
				output=gen_102_2/outputs/busIx
			}
			item {
				input=ex_102_2/inputs/busIy
				output=gen_102_2/outputs/busIy
			}
			item {
				input=ex_102_2/inputs/ExAux_eterm0
				output=gen_102_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_102_2/inputs/ExAux_etermAng0
				output=gen_102_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_102_2/inputs/ExAux_itAbs0
				output=gen_102_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_102_2/inputs/ExAux_itermAng0
				output=gen_102_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_102_2/inputs/Eterm0
				output=gen_102_2/outputs/Eterm0
			}
			item {
				input=ex_102_2/inputs/Efd0
				output=gen_102_2/outputs/Efd0
			}
			item {
				output=ex_102_2/outputs/Efd
				input=gen_102_2/inputs/Efd
			}
			item {
				input=tg_102_2/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=tg_102_2/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=tg_102_2/inputs/slip
				output=gen_102_2/outputs/slip
			}
			item {
				input=tg_102_2/inputs/busIx
				output=gen_102_2/outputs/busIx
			}
			item {
				input=tg_102_2/inputs/busIy
				output=gen_102_2/outputs/busIy
			}
			item {
				input=tg_102_2/inputs/Pmech0
				output=gen_102_2/outputs/Pmech0
			}
			item {
				input=tg_102_2/inputs/mBasePower
				output=gen_102_2/outputs/mBasePower
			}
			item {
				output=tg_102_2/outputs/Pmech
				input=gen_102_2/inputs/Pmech
			}
			item {
				input=gen_102_3/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=gen_102_3/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_3/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=ex_102_3/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_3/inputs/XadIfd
				output=gen_102_3/outputs/XadIfd
			}
			item {
				input=ex_102_3/inputs/busIx
				output=gen_102_3/outputs/busIx
			}
			item {
				input=ex_102_3/inputs/busIy
				output=gen_102_3/outputs/busIy
			}
			item {
				input=ex_102_3/inputs/ExAux_eterm0
				output=gen_102_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_102_3/inputs/ExAux_etermAng0
				output=gen_102_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_102_3/inputs/ExAux_itAbs0
				output=gen_102_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_102_3/inputs/ExAux_itermAng0
				output=gen_102_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_102_3/inputs/Eterm0
				output=gen_102_3/outputs/Eterm0
			}
			item {
				input=ex_102_3/inputs/Efd0
				output=gen_102_3/outputs/Efd0
			}
			item {
				output=ex_102_3/outputs/Efd
				input=gen_102_3/inputs/Efd
			}
			item {
				input=tg_102_3/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=tg_102_3/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=tg_102_3/inputs/slip
				output=gen_102_3/outputs/slip
			}
			item {
				input=tg_102_3/inputs/busIx
				output=gen_102_3/outputs/busIx
			}
			item {
				input=tg_102_3/inputs/busIy
				output=gen_102_3/outputs/busIy
			}
			item {
				input=tg_102_3/inputs/Pmech0
				output=gen_102_3/outputs/Pmech0
			}
			item {
				input=tg_102_3/inputs/mBasePower
				output=gen_102_3/outputs/mBasePower
			}
			item {
				output=tg_102_3/outputs/Pmech
				input=gen_102_3/inputs/Pmech
			}
			item {
				input=gen_102_4/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=gen_102_4/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_4/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=ex_102_4/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=ex_102_4/inputs/XadIfd
				output=gen_102_4/outputs/XadIfd
			}
			item {
				input=ex_102_4/inputs/busIx
				output=gen_102_4/outputs/busIx
			}
			item {
				input=ex_102_4/inputs/busIy
				output=gen_102_4/outputs/busIy
			}
			item {
				input=ex_102_4/inputs/ExAux_eterm0
				output=gen_102_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_102_4/inputs/ExAux_etermAng0
				output=gen_102_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_102_4/inputs/ExAux_itAbs0
				output=gen_102_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_102_4/inputs/ExAux_itermAng0
				output=gen_102_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_102_4/inputs/Eterm0
				output=gen_102_4/outputs/Eterm0
			}
			item {
				input=ex_102_4/inputs/Efd0
				output=gen_102_4/outputs/Efd0
			}
			item {
				output=ex_102_4/outputs/Efd
				input=gen_102_4/inputs/Efd
			}
			item {
				input=tg_102_4/inputs/busVx
				output=bus_102/outputs/busVx
			}
			item {
				input=tg_102_4/inputs/busVy
				output=bus_102/outputs/busVy
			}
			item {
				input=tg_102_4/inputs/slip
				output=gen_102_4/outputs/slip
			}
			item {
				input=tg_102_4/inputs/busIx
				output=gen_102_4/outputs/busIx
			}
			item {
				input=tg_102_4/inputs/busIy
				output=gen_102_4/outputs/busIy
			}
			item {
				input=tg_102_4/inputs/Pmech0
				output=gen_102_4/outputs/Pmech0
			}
			item {
				input=tg_102_4/inputs/mBasePower
				output=gen_102_4/outputs/mBasePower
			}
			item {
				output=tg_102_4/outputs/Pmech
				input=gen_102_4/inputs/Pmech
			}
			item {
				input=gen_107_1/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=gen_107_1/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=ex_107_1/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=ex_107_1/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=ex_107_1/inputs/XadIfd
				output=gen_107_1/outputs/XadIfd
			}
			item {
				input=ex_107_1/inputs/busIx
				output=gen_107_1/outputs/busIx
			}
			item {
				input=ex_107_1/inputs/busIy
				output=gen_107_1/outputs/busIy
			}
			item {
				input=ex_107_1/inputs/ExAux_eterm0
				output=gen_107_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_107_1/inputs/ExAux_etermAng0
				output=gen_107_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_107_1/inputs/ExAux_itAbs0
				output=gen_107_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_107_1/inputs/ExAux_itermAng0
				output=gen_107_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_107_1/inputs/Eterm0
				output=gen_107_1/outputs/Eterm0
			}
			item {
				input=ex_107_1/inputs/Efd0
				output=gen_107_1/outputs/Efd0
			}
			item {
				output=ex_107_1/outputs/Efd
				input=gen_107_1/inputs/Efd
			}
			item {
				input=tg_107_1/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=tg_107_1/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=tg_107_1/inputs/slip
				output=gen_107_1/outputs/slip
			}
			item {
				input=tg_107_1/inputs/busIx
				output=gen_107_1/outputs/busIx
			}
			item {
				input=tg_107_1/inputs/busIy
				output=gen_107_1/outputs/busIy
			}
			item {
				input=tg_107_1/inputs/Pmech0
				output=gen_107_1/outputs/Pmech0
			}
			item {
				input=tg_107_1/inputs/mBasePower
				output=gen_107_1/outputs/mBasePower
			}
			item {
				output=tg_107_1/outputs/Pmech
				input=gen_107_1/inputs/Pmech
			}
			item {
				input=gen_107_2/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=gen_107_2/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=ex_107_2/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=ex_107_2/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=ex_107_2/inputs/XadIfd
				output=gen_107_2/outputs/XadIfd
			}
			item {
				input=ex_107_2/inputs/busIx
				output=gen_107_2/outputs/busIx
			}
			item {
				input=ex_107_2/inputs/busIy
				output=gen_107_2/outputs/busIy
			}
			item {
				input=ex_107_2/inputs/ExAux_eterm0
				output=gen_107_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_107_2/inputs/ExAux_etermAng0
				output=gen_107_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_107_2/inputs/ExAux_itAbs0
				output=gen_107_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_107_2/inputs/ExAux_itermAng0
				output=gen_107_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_107_2/inputs/Eterm0
				output=gen_107_2/outputs/Eterm0
			}
			item {
				input=ex_107_2/inputs/Efd0
				output=gen_107_2/outputs/Efd0
			}
			item {
				output=ex_107_2/outputs/Efd
				input=gen_107_2/inputs/Efd
			}
			item {
				input=tg_107_2/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=tg_107_2/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=tg_107_2/inputs/slip
				output=gen_107_2/outputs/slip
			}
			item {
				input=tg_107_2/inputs/busIx
				output=gen_107_2/outputs/busIx
			}
			item {
				input=tg_107_2/inputs/busIy
				output=gen_107_2/outputs/busIy
			}
			item {
				input=tg_107_2/inputs/Pmech0
				output=gen_107_2/outputs/Pmech0
			}
			item {
				input=tg_107_2/inputs/mBasePower
				output=gen_107_2/outputs/mBasePower
			}
			item {
				output=tg_107_2/outputs/Pmech
				input=gen_107_2/inputs/Pmech
			}
			item {
				input=gen_107_3/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=gen_107_3/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=ex_107_3/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=ex_107_3/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=ex_107_3/inputs/XadIfd
				output=gen_107_3/outputs/XadIfd
			}
			item {
				input=ex_107_3/inputs/busIx
				output=gen_107_3/outputs/busIx
			}
			item {
				input=ex_107_3/inputs/busIy
				output=gen_107_3/outputs/busIy
			}
			item {
				input=ex_107_3/inputs/ExAux_eterm0
				output=gen_107_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_107_3/inputs/ExAux_etermAng0
				output=gen_107_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_107_3/inputs/ExAux_itAbs0
				output=gen_107_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_107_3/inputs/ExAux_itermAng0
				output=gen_107_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_107_3/inputs/Eterm0
				output=gen_107_3/outputs/Eterm0
			}
			item {
				input=ex_107_3/inputs/Efd0
				output=gen_107_3/outputs/Efd0
			}
			item {
				output=ex_107_3/outputs/Efd
				input=gen_107_3/inputs/Efd
			}
			item {
				input=tg_107_3/inputs/busVx
				output=bus_107/outputs/busVx
			}
			item {
				input=tg_107_3/inputs/busVy
				output=bus_107/outputs/busVy
			}
			item {
				input=tg_107_3/inputs/slip
				output=gen_107_3/outputs/slip
			}
			item {
				input=tg_107_3/inputs/busIx
				output=gen_107_3/outputs/busIx
			}
			item {
				input=tg_107_3/inputs/busIy
				output=gen_107_3/outputs/busIy
			}
			item {
				input=tg_107_3/inputs/Pmech0
				output=gen_107_3/outputs/Pmech0
			}
			item {
				input=tg_107_3/inputs/mBasePower
				output=gen_107_3/outputs/mBasePower
			}
			item {
				output=tg_107_3/outputs/Pmech
				input=gen_107_3/inputs/Pmech
			}
			item {
				input=gen_113_1/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=gen_113_1/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=ex_113_1/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=ex_113_1/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=ex_113_1/inputs/XadIfd
				output=gen_113_1/outputs/XadIfd
			}
			item {
				input=ex_113_1/inputs/busIx
				output=gen_113_1/outputs/busIx
			}
			item {
				input=ex_113_1/inputs/busIy
				output=gen_113_1/outputs/busIy
			}
			item {
				input=ex_113_1/inputs/ExAux_eterm0
				output=gen_113_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_113_1/inputs/ExAux_etermAng0
				output=gen_113_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_113_1/inputs/ExAux_itAbs0
				output=gen_113_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_113_1/inputs/ExAux_itermAng0
				output=gen_113_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_113_1/inputs/Eterm0
				output=gen_113_1/outputs/Eterm0
			}
			item {
				input=ex_113_1/inputs/Efd0
				output=gen_113_1/outputs/Efd0
			}
			item {
				output=ex_113_1/outputs/Efd
				input=gen_113_1/inputs/Efd
			}
			item {
				input=tg_113_1/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=tg_113_1/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=tg_113_1/inputs/slip
				output=gen_113_1/outputs/slip
			}
			item {
				input=tg_113_1/inputs/busIx
				output=gen_113_1/outputs/busIx
			}
			item {
				input=tg_113_1/inputs/busIy
				output=gen_113_1/outputs/busIy
			}
			item {
				input=tg_113_1/inputs/Pmech0
				output=gen_113_1/outputs/Pmech0
			}
			item {
				input=tg_113_1/inputs/mBasePower
				output=gen_113_1/outputs/mBasePower
			}
			item {
				output=tg_113_1/outputs/Pmech
				input=gen_113_1/inputs/Pmech
			}
			item {
				input=gen_113_2/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=gen_113_2/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=ex_113_2/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=ex_113_2/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=ex_113_2/inputs/XadIfd
				output=gen_113_2/outputs/XadIfd
			}
			item {
				input=ex_113_2/inputs/busIx
				output=gen_113_2/outputs/busIx
			}
			item {
				input=ex_113_2/inputs/busIy
				output=gen_113_2/outputs/busIy
			}
			item {
				input=ex_113_2/inputs/ExAux_eterm0
				output=gen_113_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_113_2/inputs/ExAux_etermAng0
				output=gen_113_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_113_2/inputs/ExAux_itAbs0
				output=gen_113_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_113_2/inputs/ExAux_itermAng0
				output=gen_113_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_113_2/inputs/Eterm0
				output=gen_113_2/outputs/Eterm0
			}
			item {
				input=ex_113_2/inputs/Efd0
				output=gen_113_2/outputs/Efd0
			}
			item {
				output=ex_113_2/outputs/Efd
				input=gen_113_2/inputs/Efd
			}
			item {
				input=tg_113_2/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=tg_113_2/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=tg_113_2/inputs/slip
				output=gen_113_2/outputs/slip
			}
			item {
				input=tg_113_2/inputs/busIx
				output=gen_113_2/outputs/busIx
			}
			item {
				input=tg_113_2/inputs/busIy
				output=gen_113_2/outputs/busIy
			}
			item {
				input=tg_113_2/inputs/Pmech0
				output=gen_113_2/outputs/Pmech0
			}
			item {
				input=tg_113_2/inputs/mBasePower
				output=gen_113_2/outputs/mBasePower
			}
			item {
				output=tg_113_2/outputs/Pmech
				input=gen_113_2/inputs/Pmech
			}
			item {
				input=gen_113_3/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=gen_113_3/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=ex_113_3/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=ex_113_3/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=ex_113_3/inputs/XadIfd
				output=gen_113_3/outputs/XadIfd
			}
			item {
				input=ex_113_3/inputs/busIx
				output=gen_113_3/outputs/busIx
			}
			item {
				input=ex_113_3/inputs/busIy
				output=gen_113_3/outputs/busIy
			}
			item {
				input=ex_113_3/inputs/ExAux_eterm0
				output=gen_113_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_113_3/inputs/ExAux_etermAng0
				output=gen_113_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_113_3/inputs/ExAux_itAbs0
				output=gen_113_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_113_3/inputs/ExAux_itermAng0
				output=gen_113_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_113_3/inputs/Eterm0
				output=gen_113_3/outputs/Eterm0
			}
			item {
				input=ex_113_3/inputs/Efd0
				output=gen_113_3/outputs/Efd0
			}
			item {
				output=ex_113_3/outputs/Efd
				input=gen_113_3/inputs/Efd
			}
			item {
				input=tg_113_3/inputs/busVx
				output=bus_113/outputs/busVx
			}
			item {
				input=tg_113_3/inputs/busVy
				output=bus_113/outputs/busVy
			}
			item {
				input=tg_113_3/inputs/slip
				output=gen_113_3/outputs/slip
			}
			item {
				input=tg_113_3/inputs/busIx
				output=gen_113_3/outputs/busIx
			}
			item {
				input=tg_113_3/inputs/busIy
				output=gen_113_3/outputs/busIy
			}
			item {
				input=tg_113_3/inputs/Pmech0
				output=gen_113_3/outputs/Pmech0
			}
			item {
				input=tg_113_3/inputs/mBasePower
				output=gen_113_3/outputs/mBasePower
			}
			item {
				output=tg_113_3/outputs/Pmech
				input=gen_113_3/inputs/Pmech
			}
			item {
				input=gen_114_1/inputs/busVx
				output=bus_114/outputs/busVx
			}
			item {
				input=gen_114_1/inputs/busVy
				output=bus_114/outputs/busVy
			}
			item {
				input=ex_114_1/inputs/busVx
				output=bus_114/outputs/busVx
			}
			item {
				input=ex_114_1/inputs/busVy
				output=bus_114/outputs/busVy
			}
			item {
				input=ex_114_1/inputs/XadIfd
				output=gen_114_1/outputs/XadIfd
			}
			item {
				input=ex_114_1/inputs/busIx
				output=gen_114_1/outputs/busIx
			}
			item {
				input=ex_114_1/inputs/busIy
				output=gen_114_1/outputs/busIy
			}
			item {
				input=ex_114_1/inputs/ExAux_eterm0
				output=gen_114_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_114_1/inputs/ExAux_etermAng0
				output=gen_114_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_114_1/inputs/ExAux_itAbs0
				output=gen_114_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_114_1/inputs/ExAux_itermAng0
				output=gen_114_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_114_1/inputs/Eterm0
				output=gen_114_1/outputs/Eterm0
			}
			item {
				input=ex_114_1/inputs/Efd0
				output=gen_114_1/outputs/Efd0
			}
			item {
				output=ex_114_1/outputs/Efd
				input=gen_114_1/inputs/Efd
			}
			item {
				input=tg_114_1/inputs/busVx
				output=bus_114/outputs/busVx
			}
			item {
				input=tg_114_1/inputs/busVy
				output=bus_114/outputs/busVy
			}
			item {
				input=tg_114_1/inputs/slip
				output=gen_114_1/outputs/slip
			}
			item {
				input=tg_114_1/inputs/busIx
				output=gen_114_1/outputs/busIx
			}
			item {
				input=tg_114_1/inputs/busIy
				output=gen_114_1/outputs/busIy
			}
			item {
				input=tg_114_1/inputs/Pmech0
				output=gen_114_1/outputs/Pmech0
			}
			item {
				input=tg_114_1/inputs/mBasePower
				output=gen_114_1/outputs/mBasePower
			}
			item {
				output=tg_114_1/outputs/Pmech
				input=gen_114_1/inputs/Pmech
			}
			item {
				input=gen_115_1/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=gen_115_1/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_1/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=ex_115_1/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_1/inputs/XadIfd
				output=gen_115_1/outputs/XadIfd
			}
			item {
				input=ex_115_1/inputs/busIx
				output=gen_115_1/outputs/busIx
			}
			item {
				input=ex_115_1/inputs/busIy
				output=gen_115_1/outputs/busIy
			}
			item {
				input=ex_115_1/inputs/ExAux_eterm0
				output=gen_115_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_115_1/inputs/ExAux_etermAng0
				output=gen_115_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_115_1/inputs/ExAux_itAbs0
				output=gen_115_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_115_1/inputs/ExAux_itermAng0
				output=gen_115_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_115_1/inputs/Eterm0
				output=gen_115_1/outputs/Eterm0
			}
			item {
				input=ex_115_1/inputs/Efd0
				output=gen_115_1/outputs/Efd0
			}
			item {
				output=ex_115_1/outputs/Efd
				input=gen_115_1/inputs/Efd
			}
			item {
				input=tg_115_1/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=tg_115_1/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=tg_115_1/inputs/slip
				output=gen_115_1/outputs/slip
			}
			item {
				input=tg_115_1/inputs/busIx
				output=gen_115_1/outputs/busIx
			}
			item {
				input=tg_115_1/inputs/busIy
				output=gen_115_1/outputs/busIy
			}
			item {
				input=tg_115_1/inputs/Pmech0
				output=gen_115_1/outputs/Pmech0
			}
			item {
				input=tg_115_1/inputs/mBasePower
				output=gen_115_1/outputs/mBasePower
			}
			item {
				output=tg_115_1/outputs/Pmech
				input=gen_115_1/inputs/Pmech
			}
			item {
				input=gen_115_2/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=gen_115_2/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_2/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=ex_115_2/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_2/inputs/XadIfd
				output=gen_115_2/outputs/XadIfd
			}
			item {
				input=ex_115_2/inputs/busIx
				output=gen_115_2/outputs/busIx
			}
			item {
				input=ex_115_2/inputs/busIy
				output=gen_115_2/outputs/busIy
			}
			item {
				input=ex_115_2/inputs/ExAux_eterm0
				output=gen_115_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_115_2/inputs/ExAux_etermAng0
				output=gen_115_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_115_2/inputs/ExAux_itAbs0
				output=gen_115_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_115_2/inputs/ExAux_itermAng0
				output=gen_115_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_115_2/inputs/Eterm0
				output=gen_115_2/outputs/Eterm0
			}
			item {
				input=ex_115_2/inputs/Efd0
				output=gen_115_2/outputs/Efd0
			}
			item {
				output=ex_115_2/outputs/Efd
				input=gen_115_2/inputs/Efd
			}
			item {
				input=tg_115_2/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=tg_115_2/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=tg_115_2/inputs/slip
				output=gen_115_2/outputs/slip
			}
			item {
				input=tg_115_2/inputs/busIx
				output=gen_115_2/outputs/busIx
			}
			item {
				input=tg_115_2/inputs/busIy
				output=gen_115_2/outputs/busIy
			}
			item {
				input=tg_115_2/inputs/Pmech0
				output=gen_115_2/outputs/Pmech0
			}
			item {
				input=tg_115_2/inputs/mBasePower
				output=gen_115_2/outputs/mBasePower
			}
			item {
				output=tg_115_2/outputs/Pmech
				input=gen_115_2/inputs/Pmech
			}
			item {
				input=gen_115_3/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=gen_115_3/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_3/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=ex_115_3/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_3/inputs/XadIfd
				output=gen_115_3/outputs/XadIfd
			}
			item {
				input=ex_115_3/inputs/busIx
				output=gen_115_3/outputs/busIx
			}
			item {
				input=ex_115_3/inputs/busIy
				output=gen_115_3/outputs/busIy
			}
			item {
				input=ex_115_3/inputs/ExAux_eterm0
				output=gen_115_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_115_3/inputs/ExAux_etermAng0
				output=gen_115_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_115_3/inputs/ExAux_itAbs0
				output=gen_115_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_115_3/inputs/ExAux_itermAng0
				output=gen_115_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_115_3/inputs/Eterm0
				output=gen_115_3/outputs/Eterm0
			}
			item {
				input=ex_115_3/inputs/Efd0
				output=gen_115_3/outputs/Efd0
			}
			item {
				output=ex_115_3/outputs/Efd
				input=gen_115_3/inputs/Efd
			}
			item {
				input=tg_115_3/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=tg_115_3/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=tg_115_3/inputs/slip
				output=gen_115_3/outputs/slip
			}
			item {
				input=tg_115_3/inputs/busIx
				output=gen_115_3/outputs/busIx
			}
			item {
				input=tg_115_3/inputs/busIy
				output=gen_115_3/outputs/busIy
			}
			item {
				input=tg_115_3/inputs/Pmech0
				output=gen_115_3/outputs/Pmech0
			}
			item {
				input=tg_115_3/inputs/mBasePower
				output=gen_115_3/outputs/mBasePower
			}
			item {
				output=tg_115_3/outputs/Pmech
				input=gen_115_3/inputs/Pmech
			}
			item {
				input=gen_115_4/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=gen_115_4/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_4/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=ex_115_4/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_4/inputs/XadIfd
				output=gen_115_4/outputs/XadIfd
			}
			item {
				input=ex_115_4/inputs/busIx
				output=gen_115_4/outputs/busIx
			}
			item {
				input=ex_115_4/inputs/busIy
				output=gen_115_4/outputs/busIy
			}
			item {
				input=ex_115_4/inputs/ExAux_eterm0
				output=gen_115_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_115_4/inputs/ExAux_etermAng0
				output=gen_115_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_115_4/inputs/ExAux_itAbs0
				output=gen_115_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_115_4/inputs/ExAux_itermAng0
				output=gen_115_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_115_4/inputs/Eterm0
				output=gen_115_4/outputs/Eterm0
			}
			item {
				input=ex_115_4/inputs/Efd0
				output=gen_115_4/outputs/Efd0
			}
			item {
				output=ex_115_4/outputs/Efd
				input=gen_115_4/inputs/Efd
			}
			item {
				input=tg_115_4/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=tg_115_4/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=tg_115_4/inputs/slip
				output=gen_115_4/outputs/slip
			}
			item {
				input=tg_115_4/inputs/busIx
				output=gen_115_4/outputs/busIx
			}
			item {
				input=tg_115_4/inputs/busIy
				output=gen_115_4/outputs/busIy
			}
			item {
				input=tg_115_4/inputs/Pmech0
				output=gen_115_4/outputs/Pmech0
			}
			item {
				input=tg_115_4/inputs/mBasePower
				output=gen_115_4/outputs/mBasePower
			}
			item {
				output=tg_115_4/outputs/Pmech
				input=gen_115_4/inputs/Pmech
			}
			item {
				input=gen_115_5/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=gen_115_5/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_5/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=ex_115_5/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_5/inputs/XadIfd
				output=gen_115_5/outputs/XadIfd
			}
			item {
				input=ex_115_5/inputs/busIx
				output=gen_115_5/outputs/busIx
			}
			item {
				input=ex_115_5/inputs/busIy
				output=gen_115_5/outputs/busIy
			}
			item {
				input=ex_115_5/inputs/ExAux_eterm0
				output=gen_115_5/outputs/ExAux_eterm0
			}
			item {
				input=ex_115_5/inputs/ExAux_etermAng0
				output=gen_115_5/outputs/ExAux_etermAng0
			}
			item {
				input=ex_115_5/inputs/ExAux_itAbs0
				output=gen_115_5/outputs/ExAux_itAbs0
			}
			item {
				input=ex_115_5/inputs/ExAux_itermAng0
				output=gen_115_5/outputs/ExAux_itermAng0
			}
			item {
				input=ex_115_5/inputs/Eterm0
				output=gen_115_5/outputs/Eterm0
			}
			item {
				input=ex_115_5/inputs/Efd0
				output=gen_115_5/outputs/Efd0
			}
			item {
				output=ex_115_5/outputs/Efd
				input=gen_115_5/inputs/Efd
			}
			item {
				input=tg_115_5/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=tg_115_5/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=tg_115_5/inputs/slip
				output=gen_115_5/outputs/slip
			}
			item {
				input=tg_115_5/inputs/busIx
				output=gen_115_5/outputs/busIx
			}
			item {
				input=tg_115_5/inputs/busIy
				output=gen_115_5/outputs/busIy
			}
			item {
				input=tg_115_5/inputs/Pmech0
				output=gen_115_5/outputs/Pmech0
			}
			item {
				input=tg_115_5/inputs/mBasePower
				output=gen_115_5/outputs/mBasePower
			}
			item {
				output=tg_115_5/outputs/Pmech
				input=gen_115_5/inputs/Pmech
			}
			item {
				input=gen_115_6/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=gen_115_6/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_6/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=ex_115_6/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=ex_115_6/inputs/XadIfd
				output=gen_115_6/outputs/XadIfd
			}
			item {
				input=ex_115_6/inputs/busIx
				output=gen_115_6/outputs/busIx
			}
			item {
				input=ex_115_6/inputs/busIy
				output=gen_115_6/outputs/busIy
			}
			item {
				input=ex_115_6/inputs/ExAux_eterm0
				output=gen_115_6/outputs/ExAux_eterm0
			}
			item {
				input=ex_115_6/inputs/ExAux_etermAng0
				output=gen_115_6/outputs/ExAux_etermAng0
			}
			item {
				input=ex_115_6/inputs/ExAux_itAbs0
				output=gen_115_6/outputs/ExAux_itAbs0
			}
			item {
				input=ex_115_6/inputs/ExAux_itermAng0
				output=gen_115_6/outputs/ExAux_itermAng0
			}
			item {
				input=ex_115_6/inputs/Eterm0
				output=gen_115_6/outputs/Eterm0
			}
			item {
				input=ex_115_6/inputs/Efd0
				output=gen_115_6/outputs/Efd0
			}
			item {
				output=ex_115_6/outputs/Efd
				input=gen_115_6/inputs/Efd
			}
			item {
				input=tg_115_6/inputs/busVx
				output=bus_115/outputs/busVx
			}
			item {
				input=tg_115_6/inputs/busVy
				output=bus_115/outputs/busVy
			}
			item {
				input=tg_115_6/inputs/slip
				output=gen_115_6/outputs/slip
			}
			item {
				input=tg_115_6/inputs/busIx
				output=gen_115_6/outputs/busIx
			}
			item {
				input=tg_115_6/inputs/busIy
				output=gen_115_6/outputs/busIy
			}
			item {
				input=tg_115_6/inputs/Pmech0
				output=gen_115_6/outputs/Pmech0
			}
			item {
				input=tg_115_6/inputs/mBasePower
				output=gen_115_6/outputs/mBasePower
			}
			item {
				output=tg_115_6/outputs/Pmech
				input=gen_115_6/inputs/Pmech
			}
			item {
				input=gen_116_1/inputs/busVx
				output=bus_116/outputs/busVx
			}
			item {
				input=gen_116_1/inputs/busVy
				output=bus_116/outputs/busVy
			}
			item {
				input=ex_116_1/inputs/busVx
				output=bus_116/outputs/busVx
			}
			item {
				input=ex_116_1/inputs/busVy
				output=bus_116/outputs/busVy
			}
			item {
				input=ex_116_1/inputs/XadIfd
				output=gen_116_1/outputs/XadIfd
			}
			item {
				input=ex_116_1/inputs/busIx
				output=gen_116_1/outputs/busIx
			}
			item {
				input=ex_116_1/inputs/busIy
				output=gen_116_1/outputs/busIy
			}
			item {
				input=ex_116_1/inputs/ExAux_eterm0
				output=gen_116_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_116_1/inputs/ExAux_etermAng0
				output=gen_116_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_116_1/inputs/ExAux_itAbs0
				output=gen_116_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_116_1/inputs/ExAux_itermAng0
				output=gen_116_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_116_1/inputs/Eterm0
				output=gen_116_1/outputs/Eterm0
			}
			item {
				input=ex_116_1/inputs/Efd0
				output=gen_116_1/outputs/Efd0
			}
			item {
				output=ex_116_1/outputs/Efd
				input=gen_116_1/inputs/Efd
			}
			item {
				input=tg_116_1/inputs/busVx
				output=bus_116/outputs/busVx
			}
			item {
				input=tg_116_1/inputs/busVy
				output=bus_116/outputs/busVy
			}
			item {
				input=tg_116_1/inputs/slip
				output=gen_116_1/outputs/slip
			}
			item {
				input=tg_116_1/inputs/busIx
				output=gen_116_1/outputs/busIx
			}
			item {
				input=tg_116_1/inputs/busIy
				output=gen_116_1/outputs/busIy
			}
			item {
				input=tg_116_1/inputs/Pmech0
				output=gen_116_1/outputs/Pmech0
			}
			item {
				input=tg_116_1/inputs/mBasePower
				output=gen_116_1/outputs/mBasePower
			}
			item {
				output=tg_116_1/outputs/Pmech
				input=gen_116_1/inputs/Pmech
			}
			item {
				input=gen_118_1/inputs/busVx
				output=bus_118/outputs/busVx
			}
			item {
				input=gen_118_1/inputs/busVy
				output=bus_118/outputs/busVy
			}
			item {
				input=ex_118_1/inputs/busVx
				output=bus_118/outputs/busVx
			}
			item {
				input=ex_118_1/inputs/busVy
				output=bus_118/outputs/busVy
			}
			item {
				input=ex_118_1/inputs/XadIfd
				output=gen_118_1/outputs/XadIfd
			}
			item {
				input=ex_118_1/inputs/busIx
				output=gen_118_1/outputs/busIx
			}
			item {
				input=ex_118_1/inputs/busIy
				output=gen_118_1/outputs/busIy
			}
			item {
				input=ex_118_1/inputs/ExAux_eterm0
				output=gen_118_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_118_1/inputs/ExAux_etermAng0
				output=gen_118_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_118_1/inputs/ExAux_itAbs0
				output=gen_118_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_118_1/inputs/ExAux_itermAng0
				output=gen_118_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_118_1/inputs/Eterm0
				output=gen_118_1/outputs/Eterm0
			}
			item {
				input=ex_118_1/inputs/Efd0
				output=gen_118_1/outputs/Efd0
			}
			item {
				output=ex_118_1/outputs/Efd
				input=gen_118_1/inputs/Efd
			}
			item {
				input=tg_118_1/inputs/busVx
				output=bus_118/outputs/busVx
			}
			item {
				input=tg_118_1/inputs/busVy
				output=bus_118/outputs/busVy
			}
			item {
				input=tg_118_1/inputs/slip
				output=gen_118_1/outputs/slip
			}
			item {
				input=tg_118_1/inputs/busIx
				output=gen_118_1/outputs/busIx
			}
			item {
				input=tg_118_1/inputs/busIy
				output=gen_118_1/outputs/busIy
			}
			item {
				input=tg_118_1/inputs/Pmech0
				output=gen_118_1/outputs/Pmech0
			}
			item {
				input=tg_118_1/inputs/mBasePower
				output=gen_118_1/outputs/mBasePower
			}
			item {
				output=tg_118_1/outputs/Pmech
				input=gen_118_1/inputs/Pmech
			}
			item {
				input=gen_121_1/inputs/busVx
				output=bus_121/outputs/busVx
			}
			item {
				input=gen_121_1/inputs/busVy
				output=bus_121/outputs/busVy
			}
			item {
				input=ex_121_1/inputs/busVx
				output=bus_121/outputs/busVx
			}
			item {
				input=ex_121_1/inputs/busVy
				output=bus_121/outputs/busVy
			}
			item {
				input=ex_121_1/inputs/XadIfd
				output=gen_121_1/outputs/XadIfd
			}
			item {
				input=ex_121_1/inputs/busIx
				output=gen_121_1/outputs/busIx
			}
			item {
				input=ex_121_1/inputs/busIy
				output=gen_121_1/outputs/busIy
			}
			item {
				input=ex_121_1/inputs/ExAux_eterm0
				output=gen_121_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_121_1/inputs/ExAux_etermAng0
				output=gen_121_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_121_1/inputs/ExAux_itAbs0
				output=gen_121_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_121_1/inputs/ExAux_itermAng0
				output=gen_121_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_121_1/inputs/Eterm0
				output=gen_121_1/outputs/Eterm0
			}
			item {
				input=ex_121_1/inputs/Efd0
				output=gen_121_1/outputs/Efd0
			}
			item {
				output=ex_121_1/outputs/Efd
				input=gen_121_1/inputs/Efd
			}
			item {
				input=tg_121_1/inputs/busVx
				output=bus_121/outputs/busVx
			}
			item {
				input=tg_121_1/inputs/busVy
				output=bus_121/outputs/busVy
			}
			item {
				input=tg_121_1/inputs/slip
				output=gen_121_1/outputs/slip
			}
			item {
				input=tg_121_1/inputs/busIx
				output=gen_121_1/outputs/busIx
			}
			item {
				input=tg_121_1/inputs/busIy
				output=gen_121_1/outputs/busIy
			}
			item {
				input=tg_121_1/inputs/Pmech0
				output=gen_121_1/outputs/Pmech0
			}
			item {
				input=tg_121_1/inputs/mBasePower
				output=gen_121_1/outputs/mBasePower
			}
			item {
				output=tg_121_1/outputs/Pmech
				input=gen_121_1/inputs/Pmech
			}
			item {
				input=gen_122_1/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=gen_122_1/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_1/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=ex_122_1/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_1/inputs/XadIfd
				output=gen_122_1/outputs/XadIfd
			}
			item {
				input=ex_122_1/inputs/busIx
				output=gen_122_1/outputs/busIx
			}
			item {
				input=ex_122_1/inputs/busIy
				output=gen_122_1/outputs/busIy
			}
			item {
				input=ex_122_1/inputs/ExAux_eterm0
				output=gen_122_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_122_1/inputs/ExAux_etermAng0
				output=gen_122_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_122_1/inputs/ExAux_itAbs0
				output=gen_122_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_122_1/inputs/ExAux_itermAng0
				output=gen_122_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_122_1/inputs/Eterm0
				output=gen_122_1/outputs/Eterm0
			}
			item {
				input=ex_122_1/inputs/Efd0
				output=gen_122_1/outputs/Efd0
			}
			item {
				output=ex_122_1/outputs/Efd
				input=gen_122_1/inputs/Efd
			}
			item {
				input=tg_122_1/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=tg_122_1/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=tg_122_1/inputs/slip
				output=gen_122_1/outputs/slip
			}
			item {
				input=tg_122_1/inputs/busIx
				output=gen_122_1/outputs/busIx
			}
			item {
				input=tg_122_1/inputs/busIy
				output=gen_122_1/outputs/busIy
			}
			item {
				input=tg_122_1/inputs/Pmech0
				output=gen_122_1/outputs/Pmech0
			}
			item {
				input=tg_122_1/inputs/mBasePower
				output=gen_122_1/outputs/mBasePower
			}
			item {
				output=tg_122_1/outputs/Pmech
				input=gen_122_1/inputs/Pmech
			}
			item {
				input=gen_122_2/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=gen_122_2/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_2/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=ex_122_2/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_2/inputs/XadIfd
				output=gen_122_2/outputs/XadIfd
			}
			item {
				input=ex_122_2/inputs/busIx
				output=gen_122_2/outputs/busIx
			}
			item {
				input=ex_122_2/inputs/busIy
				output=gen_122_2/outputs/busIy
			}
			item {
				input=ex_122_2/inputs/ExAux_eterm0
				output=gen_122_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_122_2/inputs/ExAux_etermAng0
				output=gen_122_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_122_2/inputs/ExAux_itAbs0
				output=gen_122_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_122_2/inputs/ExAux_itermAng0
				output=gen_122_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_122_2/inputs/Eterm0
				output=gen_122_2/outputs/Eterm0
			}
			item {
				input=ex_122_2/inputs/Efd0
				output=gen_122_2/outputs/Efd0
			}
			item {
				output=ex_122_2/outputs/Efd
				input=gen_122_2/inputs/Efd
			}
			item {
				input=tg_122_2/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=tg_122_2/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=tg_122_2/inputs/slip
				output=gen_122_2/outputs/slip
			}
			item {
				input=tg_122_2/inputs/busIx
				output=gen_122_2/outputs/busIx
			}
			item {
				input=tg_122_2/inputs/busIy
				output=gen_122_2/outputs/busIy
			}
			item {
				input=tg_122_2/inputs/Pmech0
				output=gen_122_2/outputs/Pmech0
			}
			item {
				input=tg_122_2/inputs/mBasePower
				output=gen_122_2/outputs/mBasePower
			}
			item {
				output=tg_122_2/outputs/Pmech
				input=gen_122_2/inputs/Pmech
			}
			item {
				input=gen_122_3/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=gen_122_3/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_3/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=ex_122_3/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_3/inputs/XadIfd
				output=gen_122_3/outputs/XadIfd
			}
			item {
				input=ex_122_3/inputs/busIx
				output=gen_122_3/outputs/busIx
			}
			item {
				input=ex_122_3/inputs/busIy
				output=gen_122_3/outputs/busIy
			}
			item {
				input=ex_122_3/inputs/ExAux_eterm0
				output=gen_122_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_122_3/inputs/ExAux_etermAng0
				output=gen_122_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_122_3/inputs/ExAux_itAbs0
				output=gen_122_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_122_3/inputs/ExAux_itermAng0
				output=gen_122_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_122_3/inputs/Eterm0
				output=gen_122_3/outputs/Eterm0
			}
			item {
				input=ex_122_3/inputs/Efd0
				output=gen_122_3/outputs/Efd0
			}
			item {
				output=ex_122_3/outputs/Efd
				input=gen_122_3/inputs/Efd
			}
			item {
				input=tg_122_3/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=tg_122_3/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=tg_122_3/inputs/slip
				output=gen_122_3/outputs/slip
			}
			item {
				input=tg_122_3/inputs/busIx
				output=gen_122_3/outputs/busIx
			}
			item {
				input=tg_122_3/inputs/busIy
				output=gen_122_3/outputs/busIy
			}
			item {
				input=tg_122_3/inputs/Pmech0
				output=gen_122_3/outputs/Pmech0
			}
			item {
				input=tg_122_3/inputs/mBasePower
				output=gen_122_3/outputs/mBasePower
			}
			item {
				output=tg_122_3/outputs/Pmech
				input=gen_122_3/inputs/Pmech
			}
			item {
				input=gen_122_4/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=gen_122_4/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_4/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=ex_122_4/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_4/inputs/XadIfd
				output=gen_122_4/outputs/XadIfd
			}
			item {
				input=ex_122_4/inputs/busIx
				output=gen_122_4/outputs/busIx
			}
			item {
				input=ex_122_4/inputs/busIy
				output=gen_122_4/outputs/busIy
			}
			item {
				input=ex_122_4/inputs/ExAux_eterm0
				output=gen_122_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_122_4/inputs/ExAux_etermAng0
				output=gen_122_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_122_4/inputs/ExAux_itAbs0
				output=gen_122_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_122_4/inputs/ExAux_itermAng0
				output=gen_122_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_122_4/inputs/Eterm0
				output=gen_122_4/outputs/Eterm0
			}
			item {
				input=ex_122_4/inputs/Efd0
				output=gen_122_4/outputs/Efd0
			}
			item {
				output=ex_122_4/outputs/Efd
				input=gen_122_4/inputs/Efd
			}
			item {
				input=tg_122_4/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=tg_122_4/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=tg_122_4/inputs/slip
				output=gen_122_4/outputs/slip
			}
			item {
				input=tg_122_4/inputs/busIx
				output=gen_122_4/outputs/busIx
			}
			item {
				input=tg_122_4/inputs/busIy
				output=gen_122_4/outputs/busIy
			}
			item {
				input=tg_122_4/inputs/Pmech0
				output=gen_122_4/outputs/Pmech0
			}
			item {
				input=tg_122_4/inputs/mBasePower
				output=gen_122_4/outputs/mBasePower
			}
			item {
				output=tg_122_4/outputs/Pmech
				input=gen_122_4/inputs/Pmech
			}
			item {
				input=gen_122_5/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=gen_122_5/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_5/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=ex_122_5/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_5/inputs/XadIfd
				output=gen_122_5/outputs/XadIfd
			}
			item {
				input=ex_122_5/inputs/busIx
				output=gen_122_5/outputs/busIx
			}
			item {
				input=ex_122_5/inputs/busIy
				output=gen_122_5/outputs/busIy
			}
			item {
				input=ex_122_5/inputs/ExAux_eterm0
				output=gen_122_5/outputs/ExAux_eterm0
			}
			item {
				input=ex_122_5/inputs/ExAux_etermAng0
				output=gen_122_5/outputs/ExAux_etermAng0
			}
			item {
				input=ex_122_5/inputs/ExAux_itAbs0
				output=gen_122_5/outputs/ExAux_itAbs0
			}
			item {
				input=ex_122_5/inputs/ExAux_itermAng0
				output=gen_122_5/outputs/ExAux_itermAng0
			}
			item {
				input=ex_122_5/inputs/Eterm0
				output=gen_122_5/outputs/Eterm0
			}
			item {
				input=ex_122_5/inputs/Efd0
				output=gen_122_5/outputs/Efd0
			}
			item {
				output=ex_122_5/outputs/Efd
				input=gen_122_5/inputs/Efd
			}
			item {
				input=tg_122_5/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=tg_122_5/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=tg_122_5/inputs/slip
				output=gen_122_5/outputs/slip
			}
			item {
				input=tg_122_5/inputs/busIx
				output=gen_122_5/outputs/busIx
			}
			item {
				input=tg_122_5/inputs/busIy
				output=gen_122_5/outputs/busIy
			}
			item {
				input=tg_122_5/inputs/Pmech0
				output=gen_122_5/outputs/Pmech0
			}
			item {
				input=tg_122_5/inputs/mBasePower
				output=gen_122_5/outputs/mBasePower
			}
			item {
				output=tg_122_5/outputs/Pmech
				input=gen_122_5/inputs/Pmech
			}
			item {
				input=gen_122_6/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=gen_122_6/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_6/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=ex_122_6/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=ex_122_6/inputs/XadIfd
				output=gen_122_6/outputs/XadIfd
			}
			item {
				input=ex_122_6/inputs/busIx
				output=gen_122_6/outputs/busIx
			}
			item {
				input=ex_122_6/inputs/busIy
				output=gen_122_6/outputs/busIy
			}
			item {
				input=ex_122_6/inputs/ExAux_eterm0
				output=gen_122_6/outputs/ExAux_eterm0
			}
			item {
				input=ex_122_6/inputs/ExAux_etermAng0
				output=gen_122_6/outputs/ExAux_etermAng0
			}
			item {
				input=ex_122_6/inputs/ExAux_itAbs0
				output=gen_122_6/outputs/ExAux_itAbs0
			}
			item {
				input=ex_122_6/inputs/ExAux_itermAng0
				output=gen_122_6/outputs/ExAux_itermAng0
			}
			item {
				input=ex_122_6/inputs/Eterm0
				output=gen_122_6/outputs/Eterm0
			}
			item {
				input=ex_122_6/inputs/Efd0
				output=gen_122_6/outputs/Efd0
			}
			item {
				output=ex_122_6/outputs/Efd
				input=gen_122_6/inputs/Efd
			}
			item {
				input=tg_122_6/inputs/busVx
				output=bus_122/outputs/busVx
			}
			item {
				input=tg_122_6/inputs/busVy
				output=bus_122/outputs/busVy
			}
			item {
				input=tg_122_6/inputs/slip
				output=gen_122_6/outputs/slip
			}
			item {
				input=tg_122_6/inputs/busIx
				output=gen_122_6/outputs/busIx
			}
			item {
				input=tg_122_6/inputs/busIy
				output=gen_122_6/outputs/busIy
			}
			item {
				input=tg_122_6/inputs/Pmech0
				output=gen_122_6/outputs/Pmech0
			}
			item {
				input=tg_122_6/inputs/mBasePower
				output=gen_122_6/outputs/mBasePower
			}
			item {
				output=tg_122_6/outputs/Pmech
				input=gen_122_6/inputs/Pmech
			}
			item {
				input=gen_123_1/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=gen_123_1/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=ex_123_1/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=ex_123_1/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=ex_123_1/inputs/XadIfd
				output=gen_123_1/outputs/XadIfd
			}
			item {
				input=ex_123_1/inputs/busIx
				output=gen_123_1/outputs/busIx
			}
			item {
				input=ex_123_1/inputs/busIy
				output=gen_123_1/outputs/busIy
			}
			item {
				input=ex_123_1/inputs/ExAux_eterm0
				output=gen_123_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_123_1/inputs/ExAux_etermAng0
				output=gen_123_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_123_1/inputs/ExAux_itAbs0
				output=gen_123_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_123_1/inputs/ExAux_itermAng0
				output=gen_123_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_123_1/inputs/Eterm0
				output=gen_123_1/outputs/Eterm0
			}
			item {
				input=ex_123_1/inputs/Efd0
				output=gen_123_1/outputs/Efd0
			}
			item {
				output=ex_123_1/outputs/Efd
				input=gen_123_1/inputs/Efd
			}
			item {
				input=tg_123_1/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=tg_123_1/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=tg_123_1/inputs/slip
				output=gen_123_1/outputs/slip
			}
			item {
				input=tg_123_1/inputs/busIx
				output=gen_123_1/outputs/busIx
			}
			item {
				input=tg_123_1/inputs/busIy
				output=gen_123_1/outputs/busIy
			}
			item {
				input=tg_123_1/inputs/Pmech0
				output=gen_123_1/outputs/Pmech0
			}
			item {
				input=tg_123_1/inputs/mBasePower
				output=gen_123_1/outputs/mBasePower
			}
			item {
				output=tg_123_1/outputs/Pmech
				input=gen_123_1/inputs/Pmech
			}
			item {
				input=gen_123_2/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=gen_123_2/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=ex_123_2/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=ex_123_2/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=ex_123_2/inputs/XadIfd
				output=gen_123_2/outputs/XadIfd
			}
			item {
				input=ex_123_2/inputs/busIx
				output=gen_123_2/outputs/busIx
			}
			item {
				input=ex_123_2/inputs/busIy
				output=gen_123_2/outputs/busIy
			}
			item {
				input=ex_123_2/inputs/ExAux_eterm0
				output=gen_123_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_123_2/inputs/ExAux_etermAng0
				output=gen_123_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_123_2/inputs/ExAux_itAbs0
				output=gen_123_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_123_2/inputs/ExAux_itermAng0
				output=gen_123_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_123_2/inputs/Eterm0
				output=gen_123_2/outputs/Eterm0
			}
			item {
				input=ex_123_2/inputs/Efd0
				output=gen_123_2/outputs/Efd0
			}
			item {
				output=ex_123_2/outputs/Efd
				input=gen_123_2/inputs/Efd
			}
			item {
				input=tg_123_2/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=tg_123_2/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=tg_123_2/inputs/slip
				output=gen_123_2/outputs/slip
			}
			item {
				input=tg_123_2/inputs/busIx
				output=gen_123_2/outputs/busIx
			}
			item {
				input=tg_123_2/inputs/busIy
				output=gen_123_2/outputs/busIy
			}
			item {
				input=tg_123_2/inputs/Pmech0
				output=gen_123_2/outputs/Pmech0
			}
			item {
				input=tg_123_2/inputs/mBasePower
				output=gen_123_2/outputs/mBasePower
			}
			item {
				output=tg_123_2/outputs/Pmech
				input=gen_123_2/inputs/Pmech
			}
			item {
				input=gen_123_3/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=gen_123_3/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=ex_123_3/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=ex_123_3/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=ex_123_3/inputs/XadIfd
				output=gen_123_3/outputs/XadIfd
			}
			item {
				input=ex_123_3/inputs/busIx
				output=gen_123_3/outputs/busIx
			}
			item {
				input=ex_123_3/inputs/busIy
				output=gen_123_3/outputs/busIy
			}
			item {
				input=ex_123_3/inputs/ExAux_eterm0
				output=gen_123_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_123_3/inputs/ExAux_etermAng0
				output=gen_123_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_123_3/inputs/ExAux_itAbs0
				output=gen_123_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_123_3/inputs/ExAux_itermAng0
				output=gen_123_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_123_3/inputs/Eterm0
				output=gen_123_3/outputs/Eterm0
			}
			item {
				input=ex_123_3/inputs/Efd0
				output=gen_123_3/outputs/Efd0
			}
			item {
				output=ex_123_3/outputs/Efd
				input=gen_123_3/inputs/Efd
			}
			item {
				input=tg_123_3/inputs/busVx
				output=bus_123/outputs/busVx
			}
			item {
				input=tg_123_3/inputs/busVy
				output=bus_123/outputs/busVy
			}
			item {
				input=tg_123_3/inputs/slip
				output=gen_123_3/outputs/slip
			}
			item {
				input=tg_123_3/inputs/busIx
				output=gen_123_3/outputs/busIx
			}
			item {
				input=tg_123_3/inputs/busIy
				output=gen_123_3/outputs/busIy
			}
			item {
				input=tg_123_3/inputs/Pmech0
				output=gen_123_3/outputs/Pmech0
			}
			item {
				input=tg_123_3/inputs/mBasePower
				output=gen_123_3/outputs/mBasePower
			}
			item {
				output=tg_123_3/outputs/Pmech
				input=gen_123_3/inputs/Pmech
			}
			item {
				input=gen_201_1/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=gen_201_1/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_1/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=ex_201_1/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_1/inputs/XadIfd
				output=gen_201_1/outputs/XadIfd
			}
			item {
				input=ex_201_1/inputs/busIx
				output=gen_201_1/outputs/busIx
			}
			item {
				input=ex_201_1/inputs/busIy
				output=gen_201_1/outputs/busIy
			}
			item {
				input=ex_201_1/inputs/ExAux_eterm0
				output=gen_201_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_201_1/inputs/ExAux_etermAng0
				output=gen_201_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_201_1/inputs/ExAux_itAbs0
				output=gen_201_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_201_1/inputs/ExAux_itermAng0
				output=gen_201_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_201_1/inputs/Eterm0
				output=gen_201_1/outputs/Eterm0
			}
			item {
				input=ex_201_1/inputs/Efd0
				output=gen_201_1/outputs/Efd0
			}
			item {
				output=ex_201_1/outputs/Efd
				input=gen_201_1/inputs/Efd
			}
			item {
				input=tg_201_1/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=tg_201_1/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=tg_201_1/inputs/slip
				output=gen_201_1/outputs/slip
			}
			item {
				input=tg_201_1/inputs/busIx
				output=gen_201_1/outputs/busIx
			}
			item {
				input=tg_201_1/inputs/busIy
				output=gen_201_1/outputs/busIy
			}
			item {
				input=tg_201_1/inputs/Pmech0
				output=gen_201_1/outputs/Pmech0
			}
			item {
				input=tg_201_1/inputs/mBasePower
				output=gen_201_1/outputs/mBasePower
			}
			item {
				output=tg_201_1/outputs/Pmech
				input=gen_201_1/inputs/Pmech
			}
			item {
				input=gen_201_2/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=gen_201_2/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_2/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=ex_201_2/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_2/inputs/XadIfd
				output=gen_201_2/outputs/XadIfd
			}
			item {
				input=ex_201_2/inputs/busIx
				output=gen_201_2/outputs/busIx
			}
			item {
				input=ex_201_2/inputs/busIy
				output=gen_201_2/outputs/busIy
			}
			item {
				input=ex_201_2/inputs/ExAux_eterm0
				output=gen_201_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_201_2/inputs/ExAux_etermAng0
				output=gen_201_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_201_2/inputs/ExAux_itAbs0
				output=gen_201_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_201_2/inputs/ExAux_itermAng0
				output=gen_201_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_201_2/inputs/Eterm0
				output=gen_201_2/outputs/Eterm0
			}
			item {
				input=ex_201_2/inputs/Efd0
				output=gen_201_2/outputs/Efd0
			}
			item {
				output=ex_201_2/outputs/Efd
				input=gen_201_2/inputs/Efd
			}
			item {
				input=tg_201_2/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=tg_201_2/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=tg_201_2/inputs/slip
				output=gen_201_2/outputs/slip
			}
			item {
				input=tg_201_2/inputs/busIx
				output=gen_201_2/outputs/busIx
			}
			item {
				input=tg_201_2/inputs/busIy
				output=gen_201_2/outputs/busIy
			}
			item {
				input=tg_201_2/inputs/Pmech0
				output=gen_201_2/outputs/Pmech0
			}
			item {
				input=tg_201_2/inputs/mBasePower
				output=gen_201_2/outputs/mBasePower
			}
			item {
				output=tg_201_2/outputs/Pmech
				input=gen_201_2/inputs/Pmech
			}
			item {
				input=gen_201_3/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=gen_201_3/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_3/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=ex_201_3/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_3/inputs/XadIfd
				output=gen_201_3/outputs/XadIfd
			}
			item {
				input=ex_201_3/inputs/busIx
				output=gen_201_3/outputs/busIx
			}
			item {
				input=ex_201_3/inputs/busIy
				output=gen_201_3/outputs/busIy
			}
			item {
				input=ex_201_3/inputs/ExAux_eterm0
				output=gen_201_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_201_3/inputs/ExAux_etermAng0
				output=gen_201_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_201_3/inputs/ExAux_itAbs0
				output=gen_201_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_201_3/inputs/ExAux_itermAng0
				output=gen_201_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_201_3/inputs/Eterm0
				output=gen_201_3/outputs/Eterm0
			}
			item {
				input=ex_201_3/inputs/Efd0
				output=gen_201_3/outputs/Efd0
			}
			item {
				output=ex_201_3/outputs/Efd
				input=gen_201_3/inputs/Efd
			}
			item {
				input=tg_201_3/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=tg_201_3/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=tg_201_3/inputs/slip
				output=gen_201_3/outputs/slip
			}
			item {
				input=tg_201_3/inputs/busIx
				output=gen_201_3/outputs/busIx
			}
			item {
				input=tg_201_3/inputs/busIy
				output=gen_201_3/outputs/busIy
			}
			item {
				input=tg_201_3/inputs/Pmech0
				output=gen_201_3/outputs/Pmech0
			}
			item {
				input=tg_201_3/inputs/mBasePower
				output=gen_201_3/outputs/mBasePower
			}
			item {
				output=tg_201_3/outputs/Pmech
				input=gen_201_3/inputs/Pmech
			}
			item {
				input=gen_201_4/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=gen_201_4/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_4/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=ex_201_4/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=ex_201_4/inputs/XadIfd
				output=gen_201_4/outputs/XadIfd
			}
			item {
				input=ex_201_4/inputs/busIx
				output=gen_201_4/outputs/busIx
			}
			item {
				input=ex_201_4/inputs/busIy
				output=gen_201_4/outputs/busIy
			}
			item {
				input=ex_201_4/inputs/ExAux_eterm0
				output=gen_201_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_201_4/inputs/ExAux_etermAng0
				output=gen_201_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_201_4/inputs/ExAux_itAbs0
				output=gen_201_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_201_4/inputs/ExAux_itermAng0
				output=gen_201_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_201_4/inputs/Eterm0
				output=gen_201_4/outputs/Eterm0
			}
			item {
				input=ex_201_4/inputs/Efd0
				output=gen_201_4/outputs/Efd0
			}
			item {
				output=ex_201_4/outputs/Efd
				input=gen_201_4/inputs/Efd
			}
			item {
				input=tg_201_4/inputs/busVx
				output=bus_201/outputs/busVx
			}
			item {
				input=tg_201_4/inputs/busVy
				output=bus_201/outputs/busVy
			}
			item {
				input=tg_201_4/inputs/slip
				output=gen_201_4/outputs/slip
			}
			item {
				input=tg_201_4/inputs/busIx
				output=gen_201_4/outputs/busIx
			}
			item {
				input=tg_201_4/inputs/busIy
				output=gen_201_4/outputs/busIy
			}
			item {
				input=tg_201_4/inputs/Pmech0
				output=gen_201_4/outputs/Pmech0
			}
			item {
				input=tg_201_4/inputs/mBasePower
				output=gen_201_4/outputs/mBasePower
			}
			item {
				output=tg_201_4/outputs/Pmech
				input=gen_201_4/inputs/Pmech
			}
			item {
				input=gen_202_1/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=gen_202_1/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_1/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=ex_202_1/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_1/inputs/XadIfd
				output=gen_202_1/outputs/XadIfd
			}
			item {
				input=ex_202_1/inputs/busIx
				output=gen_202_1/outputs/busIx
			}
			item {
				input=ex_202_1/inputs/busIy
				output=gen_202_1/outputs/busIy
			}
			item {
				input=ex_202_1/inputs/ExAux_eterm0
				output=gen_202_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_202_1/inputs/ExAux_etermAng0
				output=gen_202_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_202_1/inputs/ExAux_itAbs0
				output=gen_202_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_202_1/inputs/ExAux_itermAng0
				output=gen_202_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_202_1/inputs/Eterm0
				output=gen_202_1/outputs/Eterm0
			}
			item {
				input=ex_202_1/inputs/Efd0
				output=gen_202_1/outputs/Efd0
			}
			item {
				output=ex_202_1/outputs/Efd
				input=gen_202_1/inputs/Efd
			}
			item {
				input=tg_202_1/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=tg_202_1/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=tg_202_1/inputs/slip
				output=gen_202_1/outputs/slip
			}
			item {
				input=tg_202_1/inputs/busIx
				output=gen_202_1/outputs/busIx
			}
			item {
				input=tg_202_1/inputs/busIy
				output=gen_202_1/outputs/busIy
			}
			item {
				input=tg_202_1/inputs/Pmech0
				output=gen_202_1/outputs/Pmech0
			}
			item {
				input=tg_202_1/inputs/mBasePower
				output=gen_202_1/outputs/mBasePower
			}
			item {
				output=tg_202_1/outputs/Pmech
				input=gen_202_1/inputs/Pmech
			}
			item {
				input=gen_202_2/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=gen_202_2/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_2/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=ex_202_2/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_2/inputs/XadIfd
				output=gen_202_2/outputs/XadIfd
			}
			item {
				input=ex_202_2/inputs/busIx
				output=gen_202_2/outputs/busIx
			}
			item {
				input=ex_202_2/inputs/busIy
				output=gen_202_2/outputs/busIy
			}
			item {
				input=ex_202_2/inputs/ExAux_eterm0
				output=gen_202_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_202_2/inputs/ExAux_etermAng0
				output=gen_202_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_202_2/inputs/ExAux_itAbs0
				output=gen_202_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_202_2/inputs/ExAux_itermAng0
				output=gen_202_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_202_2/inputs/Eterm0
				output=gen_202_2/outputs/Eterm0
			}
			item {
				input=ex_202_2/inputs/Efd0
				output=gen_202_2/outputs/Efd0
			}
			item {
				output=ex_202_2/outputs/Efd
				input=gen_202_2/inputs/Efd
			}
			item {
				input=tg_202_2/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=tg_202_2/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=tg_202_2/inputs/slip
				output=gen_202_2/outputs/slip
			}
			item {
				input=tg_202_2/inputs/busIx
				output=gen_202_2/outputs/busIx
			}
			item {
				input=tg_202_2/inputs/busIy
				output=gen_202_2/outputs/busIy
			}
			item {
				input=tg_202_2/inputs/Pmech0
				output=gen_202_2/outputs/Pmech0
			}
			item {
				input=tg_202_2/inputs/mBasePower
				output=gen_202_2/outputs/mBasePower
			}
			item {
				output=tg_202_2/outputs/Pmech
				input=gen_202_2/inputs/Pmech
			}
			item {
				input=gen_202_3/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=gen_202_3/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_3/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=ex_202_3/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_3/inputs/XadIfd
				output=gen_202_3/outputs/XadIfd
			}
			item {
				input=ex_202_3/inputs/busIx
				output=gen_202_3/outputs/busIx
			}
			item {
				input=ex_202_3/inputs/busIy
				output=gen_202_3/outputs/busIy
			}
			item {
				input=ex_202_3/inputs/ExAux_eterm0
				output=gen_202_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_202_3/inputs/ExAux_etermAng0
				output=gen_202_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_202_3/inputs/ExAux_itAbs0
				output=gen_202_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_202_3/inputs/ExAux_itermAng0
				output=gen_202_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_202_3/inputs/Eterm0
				output=gen_202_3/outputs/Eterm0
			}
			item {
				input=ex_202_3/inputs/Efd0
				output=gen_202_3/outputs/Efd0
			}
			item {
				output=ex_202_3/outputs/Efd
				input=gen_202_3/inputs/Efd
			}
			item {
				input=tg_202_3/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=tg_202_3/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=tg_202_3/inputs/slip
				output=gen_202_3/outputs/slip
			}
			item {
				input=tg_202_3/inputs/busIx
				output=gen_202_3/outputs/busIx
			}
			item {
				input=tg_202_3/inputs/busIy
				output=gen_202_3/outputs/busIy
			}
			item {
				input=tg_202_3/inputs/Pmech0
				output=gen_202_3/outputs/Pmech0
			}
			item {
				input=tg_202_3/inputs/mBasePower
				output=gen_202_3/outputs/mBasePower
			}
			item {
				output=tg_202_3/outputs/Pmech
				input=gen_202_3/inputs/Pmech
			}
			item {
				input=gen_202_4/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=gen_202_4/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_4/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=ex_202_4/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=ex_202_4/inputs/XadIfd
				output=gen_202_4/outputs/XadIfd
			}
			item {
				input=ex_202_4/inputs/busIx
				output=gen_202_4/outputs/busIx
			}
			item {
				input=ex_202_4/inputs/busIy
				output=gen_202_4/outputs/busIy
			}
			item {
				input=ex_202_4/inputs/ExAux_eterm0
				output=gen_202_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_202_4/inputs/ExAux_etermAng0
				output=gen_202_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_202_4/inputs/ExAux_itAbs0
				output=gen_202_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_202_4/inputs/ExAux_itermAng0
				output=gen_202_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_202_4/inputs/Eterm0
				output=gen_202_4/outputs/Eterm0
			}
			item {
				input=ex_202_4/inputs/Efd0
				output=gen_202_4/outputs/Efd0
			}
			item {
				output=ex_202_4/outputs/Efd
				input=gen_202_4/inputs/Efd
			}
			item {
				input=tg_202_4/inputs/busVx
				output=bus_202/outputs/busVx
			}
			item {
				input=tg_202_4/inputs/busVy
				output=bus_202/outputs/busVy
			}
			item {
				input=tg_202_4/inputs/slip
				output=gen_202_4/outputs/slip
			}
			item {
				input=tg_202_4/inputs/busIx
				output=gen_202_4/outputs/busIx
			}
			item {
				input=tg_202_4/inputs/busIy
				output=gen_202_4/outputs/busIy
			}
			item {
				input=tg_202_4/inputs/Pmech0
				output=gen_202_4/outputs/Pmech0
			}
			item {
				input=tg_202_4/inputs/mBasePower
				output=gen_202_4/outputs/mBasePower
			}
			item {
				output=tg_202_4/outputs/Pmech
				input=gen_202_4/inputs/Pmech
			}
			item {
				input=gen_207_1/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=gen_207_1/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=ex_207_1/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=ex_207_1/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=ex_207_1/inputs/XadIfd
				output=gen_207_1/outputs/XadIfd
			}
			item {
				input=ex_207_1/inputs/busIx
				output=gen_207_1/outputs/busIx
			}
			item {
				input=ex_207_1/inputs/busIy
				output=gen_207_1/outputs/busIy
			}
			item {
				input=ex_207_1/inputs/ExAux_eterm0
				output=gen_207_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_207_1/inputs/ExAux_etermAng0
				output=gen_207_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_207_1/inputs/ExAux_itAbs0
				output=gen_207_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_207_1/inputs/ExAux_itermAng0
				output=gen_207_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_207_1/inputs/Eterm0
				output=gen_207_1/outputs/Eterm0
			}
			item {
				input=ex_207_1/inputs/Efd0
				output=gen_207_1/outputs/Efd0
			}
			item {
				output=ex_207_1/outputs/Efd
				input=gen_207_1/inputs/Efd
			}
			item {
				input=tg_207_1/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=tg_207_1/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=tg_207_1/inputs/slip
				output=gen_207_1/outputs/slip
			}
			item {
				input=tg_207_1/inputs/busIx
				output=gen_207_1/outputs/busIx
			}
			item {
				input=tg_207_1/inputs/busIy
				output=gen_207_1/outputs/busIy
			}
			item {
				input=tg_207_1/inputs/Pmech0
				output=gen_207_1/outputs/Pmech0
			}
			item {
				input=tg_207_1/inputs/mBasePower
				output=gen_207_1/outputs/mBasePower
			}
			item {
				output=tg_207_1/outputs/Pmech
				input=gen_207_1/inputs/Pmech
			}
			item {
				input=gen_207_2/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=gen_207_2/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=ex_207_2/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=ex_207_2/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=ex_207_2/inputs/XadIfd
				output=gen_207_2/outputs/XadIfd
			}
			item {
				input=ex_207_2/inputs/busIx
				output=gen_207_2/outputs/busIx
			}
			item {
				input=ex_207_2/inputs/busIy
				output=gen_207_2/outputs/busIy
			}
			item {
				input=ex_207_2/inputs/ExAux_eterm0
				output=gen_207_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_207_2/inputs/ExAux_etermAng0
				output=gen_207_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_207_2/inputs/ExAux_itAbs0
				output=gen_207_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_207_2/inputs/ExAux_itermAng0
				output=gen_207_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_207_2/inputs/Eterm0
				output=gen_207_2/outputs/Eterm0
			}
			item {
				input=ex_207_2/inputs/Efd0
				output=gen_207_2/outputs/Efd0
			}
			item {
				output=ex_207_2/outputs/Efd
				input=gen_207_2/inputs/Efd
			}
			item {
				input=tg_207_2/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=tg_207_2/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=tg_207_2/inputs/slip
				output=gen_207_2/outputs/slip
			}
			item {
				input=tg_207_2/inputs/busIx
				output=gen_207_2/outputs/busIx
			}
			item {
				input=tg_207_2/inputs/busIy
				output=gen_207_2/outputs/busIy
			}
			item {
				input=tg_207_2/inputs/Pmech0
				output=gen_207_2/outputs/Pmech0
			}
			item {
				input=tg_207_2/inputs/mBasePower
				output=gen_207_2/outputs/mBasePower
			}
			item {
				output=tg_207_2/outputs/Pmech
				input=gen_207_2/inputs/Pmech
			}
			item {
				input=gen_207_3/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=gen_207_3/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=ex_207_3/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=ex_207_3/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=ex_207_3/inputs/XadIfd
				output=gen_207_3/outputs/XadIfd
			}
			item {
				input=ex_207_3/inputs/busIx
				output=gen_207_3/outputs/busIx
			}
			item {
				input=ex_207_3/inputs/busIy
				output=gen_207_3/outputs/busIy
			}
			item {
				input=ex_207_3/inputs/ExAux_eterm0
				output=gen_207_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_207_3/inputs/ExAux_etermAng0
				output=gen_207_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_207_3/inputs/ExAux_itAbs0
				output=gen_207_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_207_3/inputs/ExAux_itermAng0
				output=gen_207_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_207_3/inputs/Eterm0
				output=gen_207_3/outputs/Eterm0
			}
			item {
				input=ex_207_3/inputs/Efd0
				output=gen_207_3/outputs/Efd0
			}
			item {
				output=ex_207_3/outputs/Efd
				input=gen_207_3/inputs/Efd
			}
			item {
				input=tg_207_3/inputs/busVx
				output=bus_207/outputs/busVx
			}
			item {
				input=tg_207_3/inputs/busVy
				output=bus_207/outputs/busVy
			}
			item {
				input=tg_207_3/inputs/slip
				output=gen_207_3/outputs/slip
			}
			item {
				input=tg_207_3/inputs/busIx
				output=gen_207_3/outputs/busIx
			}
			item {
				input=tg_207_3/inputs/busIy
				output=gen_207_3/outputs/busIy
			}
			item {
				input=tg_207_3/inputs/Pmech0
				output=gen_207_3/outputs/Pmech0
			}
			item {
				input=tg_207_3/inputs/mBasePower
				output=gen_207_3/outputs/mBasePower
			}
			item {
				output=tg_207_3/outputs/Pmech
				input=gen_207_3/inputs/Pmech
			}
			item {
				input=gen_213_1/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=gen_213_1/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=ex_213_1/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=ex_213_1/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=ex_213_1/inputs/XadIfd
				output=gen_213_1/outputs/XadIfd
			}
			item {
				input=ex_213_1/inputs/busIx
				output=gen_213_1/outputs/busIx
			}
			item {
				input=ex_213_1/inputs/busIy
				output=gen_213_1/outputs/busIy
			}
			item {
				input=ex_213_1/inputs/ExAux_eterm0
				output=gen_213_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_213_1/inputs/ExAux_etermAng0
				output=gen_213_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_213_1/inputs/ExAux_itAbs0
				output=gen_213_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_213_1/inputs/ExAux_itermAng0
				output=gen_213_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_213_1/inputs/Eterm0
				output=gen_213_1/outputs/Eterm0
			}
			item {
				input=ex_213_1/inputs/Efd0
				output=gen_213_1/outputs/Efd0
			}
			item {
				output=ex_213_1/outputs/Efd
				input=gen_213_1/inputs/Efd
			}
			item {
				input=tg_213_1/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=tg_213_1/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=tg_213_1/inputs/slip
				output=gen_213_1/outputs/slip
			}
			item {
				input=tg_213_1/inputs/busIx
				output=gen_213_1/outputs/busIx
			}
			item {
				input=tg_213_1/inputs/busIy
				output=gen_213_1/outputs/busIy
			}
			item {
				input=tg_213_1/inputs/Pmech0
				output=gen_213_1/outputs/Pmech0
			}
			item {
				input=tg_213_1/inputs/mBasePower
				output=gen_213_1/outputs/mBasePower
			}
			item {
				output=tg_213_1/outputs/Pmech
				input=gen_213_1/inputs/Pmech
			}
			item {
				input=gen_213_2/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=gen_213_2/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=ex_213_2/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=ex_213_2/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=ex_213_2/inputs/XadIfd
				output=gen_213_2/outputs/XadIfd
			}
			item {
				input=ex_213_2/inputs/busIx
				output=gen_213_2/outputs/busIx
			}
			item {
				input=ex_213_2/inputs/busIy
				output=gen_213_2/outputs/busIy
			}
			item {
				input=ex_213_2/inputs/ExAux_eterm0
				output=gen_213_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_213_2/inputs/ExAux_etermAng0
				output=gen_213_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_213_2/inputs/ExAux_itAbs0
				output=gen_213_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_213_2/inputs/ExAux_itermAng0
				output=gen_213_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_213_2/inputs/Eterm0
				output=gen_213_2/outputs/Eterm0
			}
			item {
				input=ex_213_2/inputs/Efd0
				output=gen_213_2/outputs/Efd0
			}
			item {
				output=ex_213_2/outputs/Efd
				input=gen_213_2/inputs/Efd
			}
			item {
				input=tg_213_2/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=tg_213_2/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=tg_213_2/inputs/slip
				output=gen_213_2/outputs/slip
			}
			item {
				input=tg_213_2/inputs/busIx
				output=gen_213_2/outputs/busIx
			}
			item {
				input=tg_213_2/inputs/busIy
				output=gen_213_2/outputs/busIy
			}
			item {
				input=tg_213_2/inputs/Pmech0
				output=gen_213_2/outputs/Pmech0
			}
			item {
				input=tg_213_2/inputs/mBasePower
				output=gen_213_2/outputs/mBasePower
			}
			item {
				output=tg_213_2/outputs/Pmech
				input=gen_213_2/inputs/Pmech
			}
			item {
				input=gen_213_3/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=gen_213_3/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=ex_213_3/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=ex_213_3/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=ex_213_3/inputs/XadIfd
				output=gen_213_3/outputs/XadIfd
			}
			item {
				input=ex_213_3/inputs/busIx
				output=gen_213_3/outputs/busIx
			}
			item {
				input=ex_213_3/inputs/busIy
				output=gen_213_3/outputs/busIy
			}
			item {
				input=ex_213_3/inputs/ExAux_eterm0
				output=gen_213_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_213_3/inputs/ExAux_etermAng0
				output=gen_213_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_213_3/inputs/ExAux_itAbs0
				output=gen_213_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_213_3/inputs/ExAux_itermAng0
				output=gen_213_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_213_3/inputs/Eterm0
				output=gen_213_3/outputs/Eterm0
			}
			item {
				input=ex_213_3/inputs/Efd0
				output=gen_213_3/outputs/Efd0
			}
			item {
				output=ex_213_3/outputs/Efd
				input=gen_213_3/inputs/Efd
			}
			item {
				input=tg_213_3/inputs/busVx
				output=bus_213/outputs/busVx
			}
			item {
				input=tg_213_3/inputs/busVy
				output=bus_213/outputs/busVy
			}
			item {
				input=tg_213_3/inputs/slip
				output=gen_213_3/outputs/slip
			}
			item {
				input=tg_213_3/inputs/busIx
				output=gen_213_3/outputs/busIx
			}
			item {
				input=tg_213_3/inputs/busIy
				output=gen_213_3/outputs/busIy
			}
			item {
				input=tg_213_3/inputs/Pmech0
				output=gen_213_3/outputs/Pmech0
			}
			item {
				input=tg_213_3/inputs/mBasePower
				output=gen_213_3/outputs/mBasePower
			}
			item {
				output=tg_213_3/outputs/Pmech
				input=gen_213_3/inputs/Pmech
			}
			item {
				input=gen_214_1/inputs/busVx
				output=bus_214/outputs/busVx
			}
			item {
				input=gen_214_1/inputs/busVy
				output=bus_214/outputs/busVy
			}
			item {
				input=ex_214_1/inputs/busVx
				output=bus_214/outputs/busVx
			}
			item {
				input=ex_214_1/inputs/busVy
				output=bus_214/outputs/busVy
			}
			item {
				input=ex_214_1/inputs/XadIfd
				output=gen_214_1/outputs/XadIfd
			}
			item {
				input=ex_214_1/inputs/busIx
				output=gen_214_1/outputs/busIx
			}
			item {
				input=ex_214_1/inputs/busIy
				output=gen_214_1/outputs/busIy
			}
			item {
				input=ex_214_1/inputs/ExAux_eterm0
				output=gen_214_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_214_1/inputs/ExAux_etermAng0
				output=gen_214_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_214_1/inputs/ExAux_itAbs0
				output=gen_214_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_214_1/inputs/ExAux_itermAng0
				output=gen_214_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_214_1/inputs/Eterm0
				output=gen_214_1/outputs/Eterm0
			}
			item {
				input=ex_214_1/inputs/Efd0
				output=gen_214_1/outputs/Efd0
			}
			item {
				output=ex_214_1/outputs/Efd
				input=gen_214_1/inputs/Efd
			}
			item {
				input=tg_214_1/inputs/busVx
				output=bus_214/outputs/busVx
			}
			item {
				input=tg_214_1/inputs/busVy
				output=bus_214/outputs/busVy
			}
			item {
				input=tg_214_1/inputs/slip
				output=gen_214_1/outputs/slip
			}
			item {
				input=tg_214_1/inputs/busIx
				output=gen_214_1/outputs/busIx
			}
			item {
				input=tg_214_1/inputs/busIy
				output=gen_214_1/outputs/busIy
			}
			item {
				input=tg_214_1/inputs/Pmech0
				output=gen_214_1/outputs/Pmech0
			}
			item {
				input=tg_214_1/inputs/mBasePower
				output=gen_214_1/outputs/mBasePower
			}
			item {
				output=tg_214_1/outputs/Pmech
				input=gen_214_1/inputs/Pmech
			}
			item {
				input=gen_215_1/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=gen_215_1/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_1/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=ex_215_1/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_1/inputs/XadIfd
				output=gen_215_1/outputs/XadIfd
			}
			item {
				input=ex_215_1/inputs/busIx
				output=gen_215_1/outputs/busIx
			}
			item {
				input=ex_215_1/inputs/busIy
				output=gen_215_1/outputs/busIy
			}
			item {
				input=ex_215_1/inputs/ExAux_eterm0
				output=gen_215_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_215_1/inputs/ExAux_etermAng0
				output=gen_215_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_215_1/inputs/ExAux_itAbs0
				output=gen_215_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_215_1/inputs/ExAux_itermAng0
				output=gen_215_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_215_1/inputs/Eterm0
				output=gen_215_1/outputs/Eterm0
			}
			item {
				input=ex_215_1/inputs/Efd0
				output=gen_215_1/outputs/Efd0
			}
			item {
				output=ex_215_1/outputs/Efd
				input=gen_215_1/inputs/Efd
			}
			item {
				input=tg_215_1/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=tg_215_1/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=tg_215_1/inputs/slip
				output=gen_215_1/outputs/slip
			}
			item {
				input=tg_215_1/inputs/busIx
				output=gen_215_1/outputs/busIx
			}
			item {
				input=tg_215_1/inputs/busIy
				output=gen_215_1/outputs/busIy
			}
			item {
				input=tg_215_1/inputs/Pmech0
				output=gen_215_1/outputs/Pmech0
			}
			item {
				input=tg_215_1/inputs/mBasePower
				output=gen_215_1/outputs/mBasePower
			}
			item {
				output=tg_215_1/outputs/Pmech
				input=gen_215_1/inputs/Pmech
			}
			item {
				input=gen_215_2/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=gen_215_2/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_2/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=ex_215_2/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_2/inputs/XadIfd
				output=gen_215_2/outputs/XadIfd
			}
			item {
				input=ex_215_2/inputs/busIx
				output=gen_215_2/outputs/busIx
			}
			item {
				input=ex_215_2/inputs/busIy
				output=gen_215_2/outputs/busIy
			}
			item {
				input=ex_215_2/inputs/ExAux_eterm0
				output=gen_215_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_215_2/inputs/ExAux_etermAng0
				output=gen_215_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_215_2/inputs/ExAux_itAbs0
				output=gen_215_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_215_2/inputs/ExAux_itermAng0
				output=gen_215_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_215_2/inputs/Eterm0
				output=gen_215_2/outputs/Eterm0
			}
			item {
				input=ex_215_2/inputs/Efd0
				output=gen_215_2/outputs/Efd0
			}
			item {
				output=ex_215_2/outputs/Efd
				input=gen_215_2/inputs/Efd
			}
			item {
				input=tg_215_2/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=tg_215_2/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=tg_215_2/inputs/slip
				output=gen_215_2/outputs/slip
			}
			item {
				input=tg_215_2/inputs/busIx
				output=gen_215_2/outputs/busIx
			}
			item {
				input=tg_215_2/inputs/busIy
				output=gen_215_2/outputs/busIy
			}
			item {
				input=tg_215_2/inputs/Pmech0
				output=gen_215_2/outputs/Pmech0
			}
			item {
				input=tg_215_2/inputs/mBasePower
				output=gen_215_2/outputs/mBasePower
			}
			item {
				output=tg_215_2/outputs/Pmech
				input=gen_215_2/inputs/Pmech
			}
			item {
				input=gen_215_3/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=gen_215_3/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_3/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=ex_215_3/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_3/inputs/XadIfd
				output=gen_215_3/outputs/XadIfd
			}
			item {
				input=ex_215_3/inputs/busIx
				output=gen_215_3/outputs/busIx
			}
			item {
				input=ex_215_3/inputs/busIy
				output=gen_215_3/outputs/busIy
			}
			item {
				input=ex_215_3/inputs/ExAux_eterm0
				output=gen_215_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_215_3/inputs/ExAux_etermAng0
				output=gen_215_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_215_3/inputs/ExAux_itAbs0
				output=gen_215_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_215_3/inputs/ExAux_itermAng0
				output=gen_215_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_215_3/inputs/Eterm0
				output=gen_215_3/outputs/Eterm0
			}
			item {
				input=ex_215_3/inputs/Efd0
				output=gen_215_3/outputs/Efd0
			}
			item {
				output=ex_215_3/outputs/Efd
				input=gen_215_3/inputs/Efd
			}
			item {
				input=tg_215_3/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=tg_215_3/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=tg_215_3/inputs/slip
				output=gen_215_3/outputs/slip
			}
			item {
				input=tg_215_3/inputs/busIx
				output=gen_215_3/outputs/busIx
			}
			item {
				input=tg_215_3/inputs/busIy
				output=gen_215_3/outputs/busIy
			}
			item {
				input=tg_215_3/inputs/Pmech0
				output=gen_215_3/outputs/Pmech0
			}
			item {
				input=tg_215_3/inputs/mBasePower
				output=gen_215_3/outputs/mBasePower
			}
			item {
				output=tg_215_3/outputs/Pmech
				input=gen_215_3/inputs/Pmech
			}
			item {
				input=gen_215_4/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=gen_215_4/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_4/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=ex_215_4/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_4/inputs/XadIfd
				output=gen_215_4/outputs/XadIfd
			}
			item {
				input=ex_215_4/inputs/busIx
				output=gen_215_4/outputs/busIx
			}
			item {
				input=ex_215_4/inputs/busIy
				output=gen_215_4/outputs/busIy
			}
			item {
				input=ex_215_4/inputs/ExAux_eterm0
				output=gen_215_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_215_4/inputs/ExAux_etermAng0
				output=gen_215_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_215_4/inputs/ExAux_itAbs0
				output=gen_215_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_215_4/inputs/ExAux_itermAng0
				output=gen_215_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_215_4/inputs/Eterm0
				output=gen_215_4/outputs/Eterm0
			}
			item {
				input=ex_215_4/inputs/Efd0
				output=gen_215_4/outputs/Efd0
			}
			item {
				output=ex_215_4/outputs/Efd
				input=gen_215_4/inputs/Efd
			}
			item {
				input=tg_215_4/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=tg_215_4/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=tg_215_4/inputs/slip
				output=gen_215_4/outputs/slip
			}
			item {
				input=tg_215_4/inputs/busIx
				output=gen_215_4/outputs/busIx
			}
			item {
				input=tg_215_4/inputs/busIy
				output=gen_215_4/outputs/busIy
			}
			item {
				input=tg_215_4/inputs/Pmech0
				output=gen_215_4/outputs/Pmech0
			}
			item {
				input=tg_215_4/inputs/mBasePower
				output=gen_215_4/outputs/mBasePower
			}
			item {
				output=tg_215_4/outputs/Pmech
				input=gen_215_4/inputs/Pmech
			}
			item {
				input=gen_215_5/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=gen_215_5/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_5/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=ex_215_5/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_5/inputs/XadIfd
				output=gen_215_5/outputs/XadIfd
			}
			item {
				input=ex_215_5/inputs/busIx
				output=gen_215_5/outputs/busIx
			}
			item {
				input=ex_215_5/inputs/busIy
				output=gen_215_5/outputs/busIy
			}
			item {
				input=ex_215_5/inputs/ExAux_eterm0
				output=gen_215_5/outputs/ExAux_eterm0
			}
			item {
				input=ex_215_5/inputs/ExAux_etermAng0
				output=gen_215_5/outputs/ExAux_etermAng0
			}
			item {
				input=ex_215_5/inputs/ExAux_itAbs0
				output=gen_215_5/outputs/ExAux_itAbs0
			}
			item {
				input=ex_215_5/inputs/ExAux_itermAng0
				output=gen_215_5/outputs/ExAux_itermAng0
			}
			item {
				input=ex_215_5/inputs/Eterm0
				output=gen_215_5/outputs/Eterm0
			}
			item {
				input=ex_215_5/inputs/Efd0
				output=gen_215_5/outputs/Efd0
			}
			item {
				output=ex_215_5/outputs/Efd
				input=gen_215_5/inputs/Efd
			}
			item {
				input=tg_215_5/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=tg_215_5/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=tg_215_5/inputs/slip
				output=gen_215_5/outputs/slip
			}
			item {
				input=tg_215_5/inputs/busIx
				output=gen_215_5/outputs/busIx
			}
			item {
				input=tg_215_5/inputs/busIy
				output=gen_215_5/outputs/busIy
			}
			item {
				input=tg_215_5/inputs/Pmech0
				output=gen_215_5/outputs/Pmech0
			}
			item {
				input=tg_215_5/inputs/mBasePower
				output=gen_215_5/outputs/mBasePower
			}
			item {
				output=tg_215_5/outputs/Pmech
				input=gen_215_5/inputs/Pmech
			}
			item {
				input=gen_215_6/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=gen_215_6/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_6/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=ex_215_6/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=ex_215_6/inputs/XadIfd
				output=gen_215_6/outputs/XadIfd
			}
			item {
				input=ex_215_6/inputs/busIx
				output=gen_215_6/outputs/busIx
			}
			item {
				input=ex_215_6/inputs/busIy
				output=gen_215_6/outputs/busIy
			}
			item {
				input=ex_215_6/inputs/ExAux_eterm0
				output=gen_215_6/outputs/ExAux_eterm0
			}
			item {
				input=ex_215_6/inputs/ExAux_etermAng0
				output=gen_215_6/outputs/ExAux_etermAng0
			}
			item {
				input=ex_215_6/inputs/ExAux_itAbs0
				output=gen_215_6/outputs/ExAux_itAbs0
			}
			item {
				input=ex_215_6/inputs/ExAux_itermAng0
				output=gen_215_6/outputs/ExAux_itermAng0
			}
			item {
				input=ex_215_6/inputs/Eterm0
				output=gen_215_6/outputs/Eterm0
			}
			item {
				input=ex_215_6/inputs/Efd0
				output=gen_215_6/outputs/Efd0
			}
			item {
				output=ex_215_6/outputs/Efd
				input=gen_215_6/inputs/Efd
			}
			item {
				input=tg_215_6/inputs/busVx
				output=bus_215/outputs/busVx
			}
			item {
				input=tg_215_6/inputs/busVy
				output=bus_215/outputs/busVy
			}
			item {
				input=tg_215_6/inputs/slip
				output=gen_215_6/outputs/slip
			}
			item {
				input=tg_215_6/inputs/busIx
				output=gen_215_6/outputs/busIx
			}
			item {
				input=tg_215_6/inputs/busIy
				output=gen_215_6/outputs/busIy
			}
			item {
				input=tg_215_6/inputs/Pmech0
				output=gen_215_6/outputs/Pmech0
			}
			item {
				input=tg_215_6/inputs/mBasePower
				output=gen_215_6/outputs/mBasePower
			}
			item {
				output=tg_215_6/outputs/Pmech
				input=gen_215_6/inputs/Pmech
			}
			item {
				input=gen_216_1/inputs/busVx
				output=bus_216/outputs/busVx
			}
			item {
				input=gen_216_1/inputs/busVy
				output=bus_216/outputs/busVy
			}
			item {
				input=ex_216_1/inputs/busVx
				output=bus_216/outputs/busVx
			}
			item {
				input=ex_216_1/inputs/busVy
				output=bus_216/outputs/busVy
			}
			item {
				input=ex_216_1/inputs/XadIfd
				output=gen_216_1/outputs/XadIfd
			}
			item {
				input=ex_216_1/inputs/busIx
				output=gen_216_1/outputs/busIx
			}
			item {
				input=ex_216_1/inputs/busIy
				output=gen_216_1/outputs/busIy
			}
			item {
				input=ex_216_1/inputs/ExAux_eterm0
				output=gen_216_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_216_1/inputs/ExAux_etermAng0
				output=gen_216_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_216_1/inputs/ExAux_itAbs0
				output=gen_216_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_216_1/inputs/ExAux_itermAng0
				output=gen_216_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_216_1/inputs/Eterm0
				output=gen_216_1/outputs/Eterm0
			}
			item {
				input=ex_216_1/inputs/Efd0
				output=gen_216_1/outputs/Efd0
			}
			item {
				output=ex_216_1/outputs/Efd
				input=gen_216_1/inputs/Efd
			}
			item {
				input=tg_216_1/inputs/busVx
				output=bus_216/outputs/busVx
			}
			item {
				input=tg_216_1/inputs/busVy
				output=bus_216/outputs/busVy
			}
			item {
				input=tg_216_1/inputs/slip
				output=gen_216_1/outputs/slip
			}
			item {
				input=tg_216_1/inputs/busIx
				output=gen_216_1/outputs/busIx
			}
			item {
				input=tg_216_1/inputs/busIy
				output=gen_216_1/outputs/busIy
			}
			item {
				input=tg_216_1/inputs/Pmech0
				output=gen_216_1/outputs/Pmech0
			}
			item {
				input=tg_216_1/inputs/mBasePower
				output=gen_216_1/outputs/mBasePower
			}
			item {
				output=tg_216_1/outputs/Pmech
				input=gen_216_1/inputs/Pmech
			}
			item {
				input=gen_218_1/inputs/busVx
				output=bus_218/outputs/busVx
			}
			item {
				input=gen_218_1/inputs/busVy
				output=bus_218/outputs/busVy
			}
			item {
				input=ex_218_1/inputs/busVx
				output=bus_218/outputs/busVx
			}
			item {
				input=ex_218_1/inputs/busVy
				output=bus_218/outputs/busVy
			}
			item {
				input=ex_218_1/inputs/XadIfd
				output=gen_218_1/outputs/XadIfd
			}
			item {
				input=ex_218_1/inputs/busIx
				output=gen_218_1/outputs/busIx
			}
			item {
				input=ex_218_1/inputs/busIy
				output=gen_218_1/outputs/busIy
			}
			item {
				input=ex_218_1/inputs/ExAux_eterm0
				output=gen_218_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_218_1/inputs/ExAux_etermAng0
				output=gen_218_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_218_1/inputs/ExAux_itAbs0
				output=gen_218_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_218_1/inputs/ExAux_itermAng0
				output=gen_218_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_218_1/inputs/Eterm0
				output=gen_218_1/outputs/Eterm0
			}
			item {
				input=ex_218_1/inputs/Efd0
				output=gen_218_1/outputs/Efd0
			}
			item {
				output=ex_218_1/outputs/Efd
				input=gen_218_1/inputs/Efd
			}
			item {
				input=tg_218_1/inputs/busVx
				output=bus_218/outputs/busVx
			}
			item {
				input=tg_218_1/inputs/busVy
				output=bus_218/outputs/busVy
			}
			item {
				input=tg_218_1/inputs/slip
				output=gen_218_1/outputs/slip
			}
			item {
				input=tg_218_1/inputs/busIx
				output=gen_218_1/outputs/busIx
			}
			item {
				input=tg_218_1/inputs/busIy
				output=gen_218_1/outputs/busIy
			}
			item {
				input=tg_218_1/inputs/Pmech0
				output=gen_218_1/outputs/Pmech0
			}
			item {
				input=tg_218_1/inputs/mBasePower
				output=gen_218_1/outputs/mBasePower
			}
			item {
				output=tg_218_1/outputs/Pmech
				input=gen_218_1/inputs/Pmech
			}
			item {
				input=gen_221_1/inputs/busVx
				output=bus_221/outputs/busVx
			}
			item {
				input=gen_221_1/inputs/busVy
				output=bus_221/outputs/busVy
			}
			item {
				input=ex_221_1/inputs/busVx
				output=bus_221/outputs/busVx
			}
			item {
				input=ex_221_1/inputs/busVy
				output=bus_221/outputs/busVy
			}
			item {
				input=ex_221_1/inputs/XadIfd
				output=gen_221_1/outputs/XadIfd
			}
			item {
				input=ex_221_1/inputs/busIx
				output=gen_221_1/outputs/busIx
			}
			item {
				input=ex_221_1/inputs/busIy
				output=gen_221_1/outputs/busIy
			}
			item {
				input=ex_221_1/inputs/ExAux_eterm0
				output=gen_221_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_221_1/inputs/ExAux_etermAng0
				output=gen_221_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_221_1/inputs/ExAux_itAbs0
				output=gen_221_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_221_1/inputs/ExAux_itermAng0
				output=gen_221_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_221_1/inputs/Eterm0
				output=gen_221_1/outputs/Eterm0
			}
			item {
				input=ex_221_1/inputs/Efd0
				output=gen_221_1/outputs/Efd0
			}
			item {
				output=ex_221_1/outputs/Efd
				input=gen_221_1/inputs/Efd
			}
			item {
				input=tg_221_1/inputs/busVx
				output=bus_221/outputs/busVx
			}
			item {
				input=tg_221_1/inputs/busVy
				output=bus_221/outputs/busVy
			}
			item {
				input=tg_221_1/inputs/slip
				output=gen_221_1/outputs/slip
			}
			item {
				input=tg_221_1/inputs/busIx
				output=gen_221_1/outputs/busIx
			}
			item {
				input=tg_221_1/inputs/busIy
				output=gen_221_1/outputs/busIy
			}
			item {
				input=tg_221_1/inputs/Pmech0
				output=gen_221_1/outputs/Pmech0
			}
			item {
				input=tg_221_1/inputs/mBasePower
				output=gen_221_1/outputs/mBasePower
			}
			item {
				output=tg_221_1/outputs/Pmech
				input=gen_221_1/inputs/Pmech
			}
			item {
				input=gen_222_1/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=gen_222_1/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_1/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=ex_222_1/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_1/inputs/XadIfd
				output=gen_222_1/outputs/XadIfd
			}
			item {
				input=ex_222_1/inputs/busIx
				output=gen_222_1/outputs/busIx
			}
			item {
				input=ex_222_1/inputs/busIy
				output=gen_222_1/outputs/busIy
			}
			item {
				input=ex_222_1/inputs/ExAux_eterm0
				output=gen_222_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_222_1/inputs/ExAux_etermAng0
				output=gen_222_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_222_1/inputs/ExAux_itAbs0
				output=gen_222_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_222_1/inputs/ExAux_itermAng0
				output=gen_222_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_222_1/inputs/Eterm0
				output=gen_222_1/outputs/Eterm0
			}
			item {
				input=ex_222_1/inputs/Efd0
				output=gen_222_1/outputs/Efd0
			}
			item {
				output=ex_222_1/outputs/Efd
				input=gen_222_1/inputs/Efd
			}
			item {
				input=tg_222_1/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=tg_222_1/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=tg_222_1/inputs/slip
				output=gen_222_1/outputs/slip
			}
			item {
				input=tg_222_1/inputs/busIx
				output=gen_222_1/outputs/busIx
			}
			item {
				input=tg_222_1/inputs/busIy
				output=gen_222_1/outputs/busIy
			}
			item {
				input=tg_222_1/inputs/Pmech0
				output=gen_222_1/outputs/Pmech0
			}
			item {
				input=tg_222_1/inputs/mBasePower
				output=gen_222_1/outputs/mBasePower
			}
			item {
				output=tg_222_1/outputs/Pmech
				input=gen_222_1/inputs/Pmech
			}
			item {
				input=gen_222_2/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=gen_222_2/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_2/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=ex_222_2/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_2/inputs/XadIfd
				output=gen_222_2/outputs/XadIfd
			}
			item {
				input=ex_222_2/inputs/busIx
				output=gen_222_2/outputs/busIx
			}
			item {
				input=ex_222_2/inputs/busIy
				output=gen_222_2/outputs/busIy
			}
			item {
				input=ex_222_2/inputs/ExAux_eterm0
				output=gen_222_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_222_2/inputs/ExAux_etermAng0
				output=gen_222_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_222_2/inputs/ExAux_itAbs0
				output=gen_222_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_222_2/inputs/ExAux_itermAng0
				output=gen_222_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_222_2/inputs/Eterm0
				output=gen_222_2/outputs/Eterm0
			}
			item {
				input=ex_222_2/inputs/Efd0
				output=gen_222_2/outputs/Efd0
			}
			item {
				output=ex_222_2/outputs/Efd
				input=gen_222_2/inputs/Efd
			}
			item {
				input=tg_222_2/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=tg_222_2/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=tg_222_2/inputs/slip
				output=gen_222_2/outputs/slip
			}
			item {
				input=tg_222_2/inputs/busIx
				output=gen_222_2/outputs/busIx
			}
			item {
				input=tg_222_2/inputs/busIy
				output=gen_222_2/outputs/busIy
			}
			item {
				input=tg_222_2/inputs/Pmech0
				output=gen_222_2/outputs/Pmech0
			}
			item {
				input=tg_222_2/inputs/mBasePower
				output=gen_222_2/outputs/mBasePower
			}
			item {
				output=tg_222_2/outputs/Pmech
				input=gen_222_2/inputs/Pmech
			}
			item {
				input=gen_222_3/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=gen_222_3/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_3/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=ex_222_3/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_3/inputs/XadIfd
				output=gen_222_3/outputs/XadIfd
			}
			item {
				input=ex_222_3/inputs/busIx
				output=gen_222_3/outputs/busIx
			}
			item {
				input=ex_222_3/inputs/busIy
				output=gen_222_3/outputs/busIy
			}
			item {
				input=ex_222_3/inputs/ExAux_eterm0
				output=gen_222_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_222_3/inputs/ExAux_etermAng0
				output=gen_222_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_222_3/inputs/ExAux_itAbs0
				output=gen_222_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_222_3/inputs/ExAux_itermAng0
				output=gen_222_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_222_3/inputs/Eterm0
				output=gen_222_3/outputs/Eterm0
			}
			item {
				input=ex_222_3/inputs/Efd0
				output=gen_222_3/outputs/Efd0
			}
			item {
				output=ex_222_3/outputs/Efd
				input=gen_222_3/inputs/Efd
			}
			item {
				input=tg_222_3/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=tg_222_3/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=tg_222_3/inputs/slip
				output=gen_222_3/outputs/slip
			}
			item {
				input=tg_222_3/inputs/busIx
				output=gen_222_3/outputs/busIx
			}
			item {
				input=tg_222_3/inputs/busIy
				output=gen_222_3/outputs/busIy
			}
			item {
				input=tg_222_3/inputs/Pmech0
				output=gen_222_3/outputs/Pmech0
			}
			item {
				input=tg_222_3/inputs/mBasePower
				output=gen_222_3/outputs/mBasePower
			}
			item {
				output=tg_222_3/outputs/Pmech
				input=gen_222_3/inputs/Pmech
			}
			item {
				input=gen_222_4/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=gen_222_4/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_4/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=ex_222_4/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_4/inputs/XadIfd
				output=gen_222_4/outputs/XadIfd
			}
			item {
				input=ex_222_4/inputs/busIx
				output=gen_222_4/outputs/busIx
			}
			item {
				input=ex_222_4/inputs/busIy
				output=gen_222_4/outputs/busIy
			}
			item {
				input=ex_222_4/inputs/ExAux_eterm0
				output=gen_222_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_222_4/inputs/ExAux_etermAng0
				output=gen_222_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_222_4/inputs/ExAux_itAbs0
				output=gen_222_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_222_4/inputs/ExAux_itermAng0
				output=gen_222_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_222_4/inputs/Eterm0
				output=gen_222_4/outputs/Eterm0
			}
			item {
				input=ex_222_4/inputs/Efd0
				output=gen_222_4/outputs/Efd0
			}
			item {
				output=ex_222_4/outputs/Efd
				input=gen_222_4/inputs/Efd
			}
			item {
				input=tg_222_4/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=tg_222_4/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=tg_222_4/inputs/slip
				output=gen_222_4/outputs/slip
			}
			item {
				input=tg_222_4/inputs/busIx
				output=gen_222_4/outputs/busIx
			}
			item {
				input=tg_222_4/inputs/busIy
				output=gen_222_4/outputs/busIy
			}
			item {
				input=tg_222_4/inputs/Pmech0
				output=gen_222_4/outputs/Pmech0
			}
			item {
				input=tg_222_4/inputs/mBasePower
				output=gen_222_4/outputs/mBasePower
			}
			item {
				output=tg_222_4/outputs/Pmech
				input=gen_222_4/inputs/Pmech
			}
			item {
				input=gen_222_5/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=gen_222_5/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_5/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=ex_222_5/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_5/inputs/XadIfd
				output=gen_222_5/outputs/XadIfd
			}
			item {
				input=ex_222_5/inputs/busIx
				output=gen_222_5/outputs/busIx
			}
			item {
				input=ex_222_5/inputs/busIy
				output=gen_222_5/outputs/busIy
			}
			item {
				input=ex_222_5/inputs/ExAux_eterm0
				output=gen_222_5/outputs/ExAux_eterm0
			}
			item {
				input=ex_222_5/inputs/ExAux_etermAng0
				output=gen_222_5/outputs/ExAux_etermAng0
			}
			item {
				input=ex_222_5/inputs/ExAux_itAbs0
				output=gen_222_5/outputs/ExAux_itAbs0
			}
			item {
				input=ex_222_5/inputs/ExAux_itermAng0
				output=gen_222_5/outputs/ExAux_itermAng0
			}
			item {
				input=ex_222_5/inputs/Eterm0
				output=gen_222_5/outputs/Eterm0
			}
			item {
				input=ex_222_5/inputs/Efd0
				output=gen_222_5/outputs/Efd0
			}
			item {
				output=ex_222_5/outputs/Efd
				input=gen_222_5/inputs/Efd
			}
			item {
				input=tg_222_5/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=tg_222_5/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=tg_222_5/inputs/slip
				output=gen_222_5/outputs/slip
			}
			item {
				input=tg_222_5/inputs/busIx
				output=gen_222_5/outputs/busIx
			}
			item {
				input=tg_222_5/inputs/busIy
				output=gen_222_5/outputs/busIy
			}
			item {
				input=tg_222_5/inputs/Pmech0
				output=gen_222_5/outputs/Pmech0
			}
			item {
				input=tg_222_5/inputs/mBasePower
				output=gen_222_5/outputs/mBasePower
			}
			item {
				output=tg_222_5/outputs/Pmech
				input=gen_222_5/inputs/Pmech
			}
			item {
				input=gen_222_6/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=gen_222_6/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_6/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=ex_222_6/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=ex_222_6/inputs/XadIfd
				output=gen_222_6/outputs/XadIfd
			}
			item {
				input=ex_222_6/inputs/busIx
				output=gen_222_6/outputs/busIx
			}
			item {
				input=ex_222_6/inputs/busIy
				output=gen_222_6/outputs/busIy
			}
			item {
				input=ex_222_6/inputs/ExAux_eterm0
				output=gen_222_6/outputs/ExAux_eterm0
			}
			item {
				input=ex_222_6/inputs/ExAux_etermAng0
				output=gen_222_6/outputs/ExAux_etermAng0
			}
			item {
				input=ex_222_6/inputs/ExAux_itAbs0
				output=gen_222_6/outputs/ExAux_itAbs0
			}
			item {
				input=ex_222_6/inputs/ExAux_itermAng0
				output=gen_222_6/outputs/ExAux_itermAng0
			}
			item {
				input=ex_222_6/inputs/Eterm0
				output=gen_222_6/outputs/Eterm0
			}
			item {
				input=ex_222_6/inputs/Efd0
				output=gen_222_6/outputs/Efd0
			}
			item {
				output=ex_222_6/outputs/Efd
				input=gen_222_6/inputs/Efd
			}
			item {
				input=tg_222_6/inputs/busVx
				output=bus_222/outputs/busVx
			}
			item {
				input=tg_222_6/inputs/busVy
				output=bus_222/outputs/busVy
			}
			item {
				input=tg_222_6/inputs/slip
				output=gen_222_6/outputs/slip
			}
			item {
				input=tg_222_6/inputs/busIx
				output=gen_222_6/outputs/busIx
			}
			item {
				input=tg_222_6/inputs/busIy
				output=gen_222_6/outputs/busIy
			}
			item {
				input=tg_222_6/inputs/Pmech0
				output=gen_222_6/outputs/Pmech0
			}
			item {
				input=tg_222_6/inputs/mBasePower
				output=gen_222_6/outputs/mBasePower
			}
			item {
				output=tg_222_6/outputs/Pmech
				input=gen_222_6/inputs/Pmech
			}
			item {
				input=gen_223_1/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=gen_223_1/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=ex_223_1/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=ex_223_1/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=ex_223_1/inputs/XadIfd
				output=gen_223_1/outputs/XadIfd
			}
			item {
				input=ex_223_1/inputs/busIx
				output=gen_223_1/outputs/busIx
			}
			item {
				input=ex_223_1/inputs/busIy
				output=gen_223_1/outputs/busIy
			}
			item {
				input=ex_223_1/inputs/ExAux_eterm0
				output=gen_223_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_223_1/inputs/ExAux_etermAng0
				output=gen_223_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_223_1/inputs/ExAux_itAbs0
				output=gen_223_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_223_1/inputs/ExAux_itermAng0
				output=gen_223_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_223_1/inputs/Eterm0
				output=gen_223_1/outputs/Eterm0
			}
			item {
				input=ex_223_1/inputs/Efd0
				output=gen_223_1/outputs/Efd0
			}
			item {
				output=ex_223_1/outputs/Efd
				input=gen_223_1/inputs/Efd
			}
			item {
				input=tg_223_1/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=tg_223_1/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=tg_223_1/inputs/slip
				output=gen_223_1/outputs/slip
			}
			item {
				input=tg_223_1/inputs/busIx
				output=gen_223_1/outputs/busIx
			}
			item {
				input=tg_223_1/inputs/busIy
				output=gen_223_1/outputs/busIy
			}
			item {
				input=tg_223_1/inputs/Pmech0
				output=gen_223_1/outputs/Pmech0
			}
			item {
				input=tg_223_1/inputs/mBasePower
				output=gen_223_1/outputs/mBasePower
			}
			item {
				output=tg_223_1/outputs/Pmech
				input=gen_223_1/inputs/Pmech
			}
			item {
				input=gen_223_2/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=gen_223_2/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=ex_223_2/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=ex_223_2/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=ex_223_2/inputs/XadIfd
				output=gen_223_2/outputs/XadIfd
			}
			item {
				input=ex_223_2/inputs/busIx
				output=gen_223_2/outputs/busIx
			}
			item {
				input=ex_223_2/inputs/busIy
				output=gen_223_2/outputs/busIy
			}
			item {
				input=ex_223_2/inputs/ExAux_eterm0
				output=gen_223_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_223_2/inputs/ExAux_etermAng0
				output=gen_223_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_223_2/inputs/ExAux_itAbs0
				output=gen_223_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_223_2/inputs/ExAux_itermAng0
				output=gen_223_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_223_2/inputs/Eterm0
				output=gen_223_2/outputs/Eterm0
			}
			item {
				input=ex_223_2/inputs/Efd0
				output=gen_223_2/outputs/Efd0
			}
			item {
				output=ex_223_2/outputs/Efd
				input=gen_223_2/inputs/Efd
			}
			item {
				input=tg_223_2/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=tg_223_2/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=tg_223_2/inputs/slip
				output=gen_223_2/outputs/slip
			}
			item {
				input=tg_223_2/inputs/busIx
				output=gen_223_2/outputs/busIx
			}
			item {
				input=tg_223_2/inputs/busIy
				output=gen_223_2/outputs/busIy
			}
			item {
				input=tg_223_2/inputs/Pmech0
				output=gen_223_2/outputs/Pmech0
			}
			item {
				input=tg_223_2/inputs/mBasePower
				output=gen_223_2/outputs/mBasePower
			}
			item {
				output=tg_223_2/outputs/Pmech
				input=gen_223_2/inputs/Pmech
			}
			item {
				input=gen_223_3/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=gen_223_3/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=ex_223_3/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=ex_223_3/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=ex_223_3/inputs/XadIfd
				output=gen_223_3/outputs/XadIfd
			}
			item {
				input=ex_223_3/inputs/busIx
				output=gen_223_3/outputs/busIx
			}
			item {
				input=ex_223_3/inputs/busIy
				output=gen_223_3/outputs/busIy
			}
			item {
				input=ex_223_3/inputs/ExAux_eterm0
				output=gen_223_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_223_3/inputs/ExAux_etermAng0
				output=gen_223_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_223_3/inputs/ExAux_itAbs0
				output=gen_223_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_223_3/inputs/ExAux_itermAng0
				output=gen_223_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_223_3/inputs/Eterm0
				output=gen_223_3/outputs/Eterm0
			}
			item {
				input=ex_223_3/inputs/Efd0
				output=gen_223_3/outputs/Efd0
			}
			item {
				output=ex_223_3/outputs/Efd
				input=gen_223_3/inputs/Efd
			}
			item {
				input=tg_223_3/inputs/busVx
				output=bus_223/outputs/busVx
			}
			item {
				input=tg_223_3/inputs/busVy
				output=bus_223/outputs/busVy
			}
			item {
				input=tg_223_3/inputs/slip
				output=gen_223_3/outputs/slip
			}
			item {
				input=tg_223_3/inputs/busIx
				output=gen_223_3/outputs/busIx
			}
			item {
				input=tg_223_3/inputs/busIy
				output=gen_223_3/outputs/busIy
			}
			item {
				input=tg_223_3/inputs/Pmech0
				output=gen_223_3/outputs/Pmech0
			}
			item {
				input=tg_223_3/inputs/mBasePower
				output=gen_223_3/outputs/mBasePower
			}
			item {
				output=tg_223_3/outputs/Pmech
				input=gen_223_3/inputs/Pmech
			}
			item {
				input=gen_301_1/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=gen_301_1/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_1/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=ex_301_1/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_1/inputs/XadIfd
				output=gen_301_1/outputs/XadIfd
			}
			item {
				input=ex_301_1/inputs/busIx
				output=gen_301_1/outputs/busIx
			}
			item {
				input=ex_301_1/inputs/busIy
				output=gen_301_1/outputs/busIy
			}
			item {
				input=ex_301_1/inputs/ExAux_eterm0
				output=gen_301_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_301_1/inputs/ExAux_etermAng0
				output=gen_301_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_301_1/inputs/ExAux_itAbs0
				output=gen_301_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_301_1/inputs/ExAux_itermAng0
				output=gen_301_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_301_1/inputs/Eterm0
				output=gen_301_1/outputs/Eterm0
			}
			item {
				input=ex_301_1/inputs/Efd0
				output=gen_301_1/outputs/Efd0
			}
			item {
				output=ex_301_1/outputs/Efd
				input=gen_301_1/inputs/Efd
			}
			item {
				input=tg_301_1/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=tg_301_1/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=tg_301_1/inputs/slip
				output=gen_301_1/outputs/slip
			}
			item {
				input=tg_301_1/inputs/busIx
				output=gen_301_1/outputs/busIx
			}
			item {
				input=tg_301_1/inputs/busIy
				output=gen_301_1/outputs/busIy
			}
			item {
				input=tg_301_1/inputs/Pmech0
				output=gen_301_1/outputs/Pmech0
			}
			item {
				input=tg_301_1/inputs/mBasePower
				output=gen_301_1/outputs/mBasePower
			}
			item {
				output=tg_301_1/outputs/Pmech
				input=gen_301_1/inputs/Pmech
			}
			item {
				input=gen_301_2/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=gen_301_2/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_2/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=ex_301_2/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_2/inputs/XadIfd
				output=gen_301_2/outputs/XadIfd
			}
			item {
				input=ex_301_2/inputs/busIx
				output=gen_301_2/outputs/busIx
			}
			item {
				input=ex_301_2/inputs/busIy
				output=gen_301_2/outputs/busIy
			}
			item {
				input=ex_301_2/inputs/ExAux_eterm0
				output=gen_301_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_301_2/inputs/ExAux_etermAng0
				output=gen_301_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_301_2/inputs/ExAux_itAbs0
				output=gen_301_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_301_2/inputs/ExAux_itermAng0
				output=gen_301_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_301_2/inputs/Eterm0
				output=gen_301_2/outputs/Eterm0
			}
			item {
				input=ex_301_2/inputs/Efd0
				output=gen_301_2/outputs/Efd0
			}
			item {
				output=ex_301_2/outputs/Efd
				input=gen_301_2/inputs/Efd
			}
			item {
				input=tg_301_2/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=tg_301_2/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=tg_301_2/inputs/slip
				output=gen_301_2/outputs/slip
			}
			item {
				input=tg_301_2/inputs/busIx
				output=gen_301_2/outputs/busIx
			}
			item {
				input=tg_301_2/inputs/busIy
				output=gen_301_2/outputs/busIy
			}
			item {
				input=tg_301_2/inputs/Pmech0
				output=gen_301_2/outputs/Pmech0
			}
			item {
				input=tg_301_2/inputs/mBasePower
				output=gen_301_2/outputs/mBasePower
			}
			item {
				output=tg_301_2/outputs/Pmech
				input=gen_301_2/inputs/Pmech
			}
			item {
				input=gen_301_3/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=gen_301_3/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_3/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=ex_301_3/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_3/inputs/XadIfd
				output=gen_301_3/outputs/XadIfd
			}
			item {
				input=ex_301_3/inputs/busIx
				output=gen_301_3/outputs/busIx
			}
			item {
				input=ex_301_3/inputs/busIy
				output=gen_301_3/outputs/busIy
			}
			item {
				input=ex_301_3/inputs/ExAux_eterm0
				output=gen_301_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_301_3/inputs/ExAux_etermAng0
				output=gen_301_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_301_3/inputs/ExAux_itAbs0
				output=gen_301_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_301_3/inputs/ExAux_itermAng0
				output=gen_301_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_301_3/inputs/Eterm0
				output=gen_301_3/outputs/Eterm0
			}
			item {
				input=ex_301_3/inputs/Efd0
				output=gen_301_3/outputs/Efd0
			}
			item {
				output=ex_301_3/outputs/Efd
				input=gen_301_3/inputs/Efd
			}
			item {
				input=tg_301_3/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=tg_301_3/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=tg_301_3/inputs/slip
				output=gen_301_3/outputs/slip
			}
			item {
				input=tg_301_3/inputs/busIx
				output=gen_301_3/outputs/busIx
			}
			item {
				input=tg_301_3/inputs/busIy
				output=gen_301_3/outputs/busIy
			}
			item {
				input=tg_301_3/inputs/Pmech0
				output=gen_301_3/outputs/Pmech0
			}
			item {
				input=tg_301_3/inputs/mBasePower
				output=gen_301_3/outputs/mBasePower
			}
			item {
				output=tg_301_3/outputs/Pmech
				input=gen_301_3/inputs/Pmech
			}
			item {
				input=gen_301_4/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=gen_301_4/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_4/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=ex_301_4/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=ex_301_4/inputs/XadIfd
				output=gen_301_4/outputs/XadIfd
			}
			item {
				input=ex_301_4/inputs/busIx
				output=gen_301_4/outputs/busIx
			}
			item {
				input=ex_301_4/inputs/busIy
				output=gen_301_4/outputs/busIy
			}
			item {
				input=ex_301_4/inputs/ExAux_eterm0
				output=gen_301_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_301_4/inputs/ExAux_etermAng0
				output=gen_301_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_301_4/inputs/ExAux_itAbs0
				output=gen_301_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_301_4/inputs/ExAux_itermAng0
				output=gen_301_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_301_4/inputs/Eterm0
				output=gen_301_4/outputs/Eterm0
			}
			item {
				input=ex_301_4/inputs/Efd0
				output=gen_301_4/outputs/Efd0
			}
			item {
				output=ex_301_4/outputs/Efd
				input=gen_301_4/inputs/Efd
			}
			item {
				input=tg_301_4/inputs/busVx
				output=bus_301/outputs/busVx
			}
			item {
				input=tg_301_4/inputs/busVy
				output=bus_301/outputs/busVy
			}
			item {
				input=tg_301_4/inputs/slip
				output=gen_301_4/outputs/slip
			}
			item {
				input=tg_301_4/inputs/busIx
				output=gen_301_4/outputs/busIx
			}
			item {
				input=tg_301_4/inputs/busIy
				output=gen_301_4/outputs/busIy
			}
			item {
				input=tg_301_4/inputs/Pmech0
				output=gen_301_4/outputs/Pmech0
			}
			item {
				input=tg_301_4/inputs/mBasePower
				output=gen_301_4/outputs/mBasePower
			}
			item {
				output=tg_301_4/outputs/Pmech
				input=gen_301_4/inputs/Pmech
			}
			item {
				input=gen_302_1/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=gen_302_1/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_1/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=ex_302_1/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_1/inputs/XadIfd
				output=gen_302_1/outputs/XadIfd
			}
			item {
				input=ex_302_1/inputs/busIx
				output=gen_302_1/outputs/busIx
			}
			item {
				input=ex_302_1/inputs/busIy
				output=gen_302_1/outputs/busIy
			}
			item {
				input=ex_302_1/inputs/ExAux_eterm0
				output=gen_302_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_302_1/inputs/ExAux_etermAng0
				output=gen_302_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_302_1/inputs/ExAux_itAbs0
				output=gen_302_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_302_1/inputs/ExAux_itermAng0
				output=gen_302_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_302_1/inputs/Eterm0
				output=gen_302_1/outputs/Eterm0
			}
			item {
				input=ex_302_1/inputs/Efd0
				output=gen_302_1/outputs/Efd0
			}
			item {
				output=ex_302_1/outputs/Efd
				input=gen_302_1/inputs/Efd
			}
			item {
				input=tg_302_1/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=tg_302_1/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=tg_302_1/inputs/slip
				output=gen_302_1/outputs/slip
			}
			item {
				input=tg_302_1/inputs/busIx
				output=gen_302_1/outputs/busIx
			}
			item {
				input=tg_302_1/inputs/busIy
				output=gen_302_1/outputs/busIy
			}
			item {
				input=tg_302_1/inputs/Pmech0
				output=gen_302_1/outputs/Pmech0
			}
			item {
				input=tg_302_1/inputs/mBasePower
				output=gen_302_1/outputs/mBasePower
			}
			item {
				output=tg_302_1/outputs/Pmech
				input=gen_302_1/inputs/Pmech
			}
			item {
				input=gen_302_2/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=gen_302_2/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_2/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=ex_302_2/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_2/inputs/XadIfd
				output=gen_302_2/outputs/XadIfd
			}
			item {
				input=ex_302_2/inputs/busIx
				output=gen_302_2/outputs/busIx
			}
			item {
				input=ex_302_2/inputs/busIy
				output=gen_302_2/outputs/busIy
			}
			item {
				input=ex_302_2/inputs/ExAux_eterm0
				output=gen_302_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_302_2/inputs/ExAux_etermAng0
				output=gen_302_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_302_2/inputs/ExAux_itAbs0
				output=gen_302_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_302_2/inputs/ExAux_itermAng0
				output=gen_302_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_302_2/inputs/Eterm0
				output=gen_302_2/outputs/Eterm0
			}
			item {
				input=ex_302_2/inputs/Efd0
				output=gen_302_2/outputs/Efd0
			}
			item {
				output=ex_302_2/outputs/Efd
				input=gen_302_2/inputs/Efd
			}
			item {
				input=tg_302_2/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=tg_302_2/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=tg_302_2/inputs/slip
				output=gen_302_2/outputs/slip
			}
			item {
				input=tg_302_2/inputs/busIx
				output=gen_302_2/outputs/busIx
			}
			item {
				input=tg_302_2/inputs/busIy
				output=gen_302_2/outputs/busIy
			}
			item {
				input=tg_302_2/inputs/Pmech0
				output=gen_302_2/outputs/Pmech0
			}
			item {
				input=tg_302_2/inputs/mBasePower
				output=gen_302_2/outputs/mBasePower
			}
			item {
				output=tg_302_2/outputs/Pmech
				input=gen_302_2/inputs/Pmech
			}
			item {
				input=gen_302_3/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=gen_302_3/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_3/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=ex_302_3/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_3/inputs/XadIfd
				output=gen_302_3/outputs/XadIfd
			}
			item {
				input=ex_302_3/inputs/busIx
				output=gen_302_3/outputs/busIx
			}
			item {
				input=ex_302_3/inputs/busIy
				output=gen_302_3/outputs/busIy
			}
			item {
				input=ex_302_3/inputs/ExAux_eterm0
				output=gen_302_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_302_3/inputs/ExAux_etermAng0
				output=gen_302_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_302_3/inputs/ExAux_itAbs0
				output=gen_302_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_302_3/inputs/ExAux_itermAng0
				output=gen_302_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_302_3/inputs/Eterm0
				output=gen_302_3/outputs/Eterm0
			}
			item {
				input=ex_302_3/inputs/Efd0
				output=gen_302_3/outputs/Efd0
			}
			item {
				output=ex_302_3/outputs/Efd
				input=gen_302_3/inputs/Efd
			}
			item {
				input=tg_302_3/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=tg_302_3/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=tg_302_3/inputs/slip
				output=gen_302_3/outputs/slip
			}
			item {
				input=tg_302_3/inputs/busIx
				output=gen_302_3/outputs/busIx
			}
			item {
				input=tg_302_3/inputs/busIy
				output=gen_302_3/outputs/busIy
			}
			item {
				input=tg_302_3/inputs/Pmech0
				output=gen_302_3/outputs/Pmech0
			}
			item {
				input=tg_302_3/inputs/mBasePower
				output=gen_302_3/outputs/mBasePower
			}
			item {
				output=tg_302_3/outputs/Pmech
				input=gen_302_3/inputs/Pmech
			}
			item {
				input=gen_302_4/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=gen_302_4/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_4/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=ex_302_4/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=ex_302_4/inputs/XadIfd
				output=gen_302_4/outputs/XadIfd
			}
			item {
				input=ex_302_4/inputs/busIx
				output=gen_302_4/outputs/busIx
			}
			item {
				input=ex_302_4/inputs/busIy
				output=gen_302_4/outputs/busIy
			}
			item {
				input=ex_302_4/inputs/ExAux_eterm0
				output=gen_302_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_302_4/inputs/ExAux_etermAng0
				output=gen_302_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_302_4/inputs/ExAux_itAbs0
				output=gen_302_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_302_4/inputs/ExAux_itermAng0
				output=gen_302_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_302_4/inputs/Eterm0
				output=gen_302_4/outputs/Eterm0
			}
			item {
				input=ex_302_4/inputs/Efd0
				output=gen_302_4/outputs/Efd0
			}
			item {
				output=ex_302_4/outputs/Efd
				input=gen_302_4/inputs/Efd
			}
			item {
				input=tg_302_4/inputs/busVx
				output=bus_302/outputs/busVx
			}
			item {
				input=tg_302_4/inputs/busVy
				output=bus_302/outputs/busVy
			}
			item {
				input=tg_302_4/inputs/slip
				output=gen_302_4/outputs/slip
			}
			item {
				input=tg_302_4/inputs/busIx
				output=gen_302_4/outputs/busIx
			}
			item {
				input=tg_302_4/inputs/busIy
				output=gen_302_4/outputs/busIy
			}
			item {
				input=tg_302_4/inputs/Pmech0
				output=gen_302_4/outputs/Pmech0
			}
			item {
				input=tg_302_4/inputs/mBasePower
				output=gen_302_4/outputs/mBasePower
			}
			item {
				output=tg_302_4/outputs/Pmech
				input=gen_302_4/inputs/Pmech
			}
			item {
				input=gen_307_1/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=gen_307_1/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=ex_307_1/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=ex_307_1/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=ex_307_1/inputs/XadIfd
				output=gen_307_1/outputs/XadIfd
			}
			item {
				input=ex_307_1/inputs/busIx
				output=gen_307_1/outputs/busIx
			}
			item {
				input=ex_307_1/inputs/busIy
				output=gen_307_1/outputs/busIy
			}
			item {
				input=ex_307_1/inputs/ExAux_eterm0
				output=gen_307_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_307_1/inputs/ExAux_etermAng0
				output=gen_307_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_307_1/inputs/ExAux_itAbs0
				output=gen_307_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_307_1/inputs/ExAux_itermAng0
				output=gen_307_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_307_1/inputs/Eterm0
				output=gen_307_1/outputs/Eterm0
			}
			item {
				input=ex_307_1/inputs/Efd0
				output=gen_307_1/outputs/Efd0
			}
			item {
				output=ex_307_1/outputs/Efd
				input=gen_307_1/inputs/Efd
			}
			item {
				input=tg_307_1/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=tg_307_1/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=tg_307_1/inputs/slip
				output=gen_307_1/outputs/slip
			}
			item {
				input=tg_307_1/inputs/busIx
				output=gen_307_1/outputs/busIx
			}
			item {
				input=tg_307_1/inputs/busIy
				output=gen_307_1/outputs/busIy
			}
			item {
				input=tg_307_1/inputs/Pmech0
				output=gen_307_1/outputs/Pmech0
			}
			item {
				input=tg_307_1/inputs/mBasePower
				output=gen_307_1/outputs/mBasePower
			}
			item {
				output=tg_307_1/outputs/Pmech
				input=gen_307_1/inputs/Pmech
			}
			item {
				input=gen_307_2/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=gen_307_2/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=ex_307_2/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=ex_307_2/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=ex_307_2/inputs/XadIfd
				output=gen_307_2/outputs/XadIfd
			}
			item {
				input=ex_307_2/inputs/busIx
				output=gen_307_2/outputs/busIx
			}
			item {
				input=ex_307_2/inputs/busIy
				output=gen_307_2/outputs/busIy
			}
			item {
				input=ex_307_2/inputs/ExAux_eterm0
				output=gen_307_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_307_2/inputs/ExAux_etermAng0
				output=gen_307_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_307_2/inputs/ExAux_itAbs0
				output=gen_307_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_307_2/inputs/ExAux_itermAng0
				output=gen_307_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_307_2/inputs/Eterm0
				output=gen_307_2/outputs/Eterm0
			}
			item {
				input=ex_307_2/inputs/Efd0
				output=gen_307_2/outputs/Efd0
			}
			item {
				output=ex_307_2/outputs/Efd
				input=gen_307_2/inputs/Efd
			}
			item {
				input=tg_307_2/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=tg_307_2/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=tg_307_2/inputs/slip
				output=gen_307_2/outputs/slip
			}
			item {
				input=tg_307_2/inputs/busIx
				output=gen_307_2/outputs/busIx
			}
			item {
				input=tg_307_2/inputs/busIy
				output=gen_307_2/outputs/busIy
			}
			item {
				input=tg_307_2/inputs/Pmech0
				output=gen_307_2/outputs/Pmech0
			}
			item {
				input=tg_307_2/inputs/mBasePower
				output=gen_307_2/outputs/mBasePower
			}
			item {
				output=tg_307_2/outputs/Pmech
				input=gen_307_2/inputs/Pmech
			}
			item {
				input=gen_307_3/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=gen_307_3/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=ex_307_3/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=ex_307_3/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=ex_307_3/inputs/XadIfd
				output=gen_307_3/outputs/XadIfd
			}
			item {
				input=ex_307_3/inputs/busIx
				output=gen_307_3/outputs/busIx
			}
			item {
				input=ex_307_3/inputs/busIy
				output=gen_307_3/outputs/busIy
			}
			item {
				input=ex_307_3/inputs/ExAux_eterm0
				output=gen_307_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_307_3/inputs/ExAux_etermAng0
				output=gen_307_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_307_3/inputs/ExAux_itAbs0
				output=gen_307_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_307_3/inputs/ExAux_itermAng0
				output=gen_307_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_307_3/inputs/Eterm0
				output=gen_307_3/outputs/Eterm0
			}
			item {
				input=ex_307_3/inputs/Efd0
				output=gen_307_3/outputs/Efd0
			}
			item {
				output=ex_307_3/outputs/Efd
				input=gen_307_3/inputs/Efd
			}
			item {
				input=tg_307_3/inputs/busVx
				output=bus_307/outputs/busVx
			}
			item {
				input=tg_307_3/inputs/busVy
				output=bus_307/outputs/busVy
			}
			item {
				input=tg_307_3/inputs/slip
				output=gen_307_3/outputs/slip
			}
			item {
				input=tg_307_3/inputs/busIx
				output=gen_307_3/outputs/busIx
			}
			item {
				input=tg_307_3/inputs/busIy
				output=gen_307_3/outputs/busIy
			}
			item {
				input=tg_307_3/inputs/Pmech0
				output=gen_307_3/outputs/Pmech0
			}
			item {
				input=tg_307_3/inputs/mBasePower
				output=gen_307_3/outputs/mBasePower
			}
			item {
				output=tg_307_3/outputs/Pmech
				input=gen_307_3/inputs/Pmech
			}
			item {
				input=gen_313_1/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=gen_313_1/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=ex_313_1/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=ex_313_1/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=ex_313_1/inputs/XadIfd
				output=gen_313_1/outputs/XadIfd
			}
			item {
				input=ex_313_1/inputs/busIx
				output=gen_313_1/outputs/busIx
			}
			item {
				input=ex_313_1/inputs/busIy
				output=gen_313_1/outputs/busIy
			}
			item {
				input=ex_313_1/inputs/ExAux_eterm0
				output=gen_313_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_313_1/inputs/ExAux_etermAng0
				output=gen_313_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_313_1/inputs/ExAux_itAbs0
				output=gen_313_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_313_1/inputs/ExAux_itermAng0
				output=gen_313_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_313_1/inputs/Eterm0
				output=gen_313_1/outputs/Eterm0
			}
			item {
				input=ex_313_1/inputs/Efd0
				output=gen_313_1/outputs/Efd0
			}
			item {
				output=ex_313_1/outputs/Efd
				input=gen_313_1/inputs/Efd
			}
			item {
				input=tg_313_1/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=tg_313_1/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=tg_313_1/inputs/slip
				output=gen_313_1/outputs/slip
			}
			item {
				input=tg_313_1/inputs/busIx
				output=gen_313_1/outputs/busIx
			}
			item {
				input=tg_313_1/inputs/busIy
				output=gen_313_1/outputs/busIy
			}
			item {
				input=tg_313_1/inputs/Pmech0
				output=gen_313_1/outputs/Pmech0
			}
			item {
				input=tg_313_1/inputs/mBasePower
				output=gen_313_1/outputs/mBasePower
			}
			item {
				output=tg_313_1/outputs/Pmech
				input=gen_313_1/inputs/Pmech
			}
			item {
				input=gen_313_2/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=gen_313_2/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=ex_313_2/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=ex_313_2/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=ex_313_2/inputs/XadIfd
				output=gen_313_2/outputs/XadIfd
			}
			item {
				input=ex_313_2/inputs/busIx
				output=gen_313_2/outputs/busIx
			}
			item {
				input=ex_313_2/inputs/busIy
				output=gen_313_2/outputs/busIy
			}
			item {
				input=ex_313_2/inputs/ExAux_eterm0
				output=gen_313_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_313_2/inputs/ExAux_etermAng0
				output=gen_313_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_313_2/inputs/ExAux_itAbs0
				output=gen_313_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_313_2/inputs/ExAux_itermAng0
				output=gen_313_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_313_2/inputs/Eterm0
				output=gen_313_2/outputs/Eterm0
			}
			item {
				input=ex_313_2/inputs/Efd0
				output=gen_313_2/outputs/Efd0
			}
			item {
				output=ex_313_2/outputs/Efd
				input=gen_313_2/inputs/Efd
			}
			item {
				input=tg_313_2/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=tg_313_2/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=tg_313_2/inputs/slip
				output=gen_313_2/outputs/slip
			}
			item {
				input=tg_313_2/inputs/busIx
				output=gen_313_2/outputs/busIx
			}
			item {
				input=tg_313_2/inputs/busIy
				output=gen_313_2/outputs/busIy
			}
			item {
				input=tg_313_2/inputs/Pmech0
				output=gen_313_2/outputs/Pmech0
			}
			item {
				input=tg_313_2/inputs/mBasePower
				output=gen_313_2/outputs/mBasePower
			}
			item {
				output=tg_313_2/outputs/Pmech
				input=gen_313_2/inputs/Pmech
			}
			item {
				input=gen_313_3/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=gen_313_3/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=ex_313_3/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=ex_313_3/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=ex_313_3/inputs/XadIfd
				output=gen_313_3/outputs/XadIfd
			}
			item {
				input=ex_313_3/inputs/busIx
				output=gen_313_3/outputs/busIx
			}
			item {
				input=ex_313_3/inputs/busIy
				output=gen_313_3/outputs/busIy
			}
			item {
				input=ex_313_3/inputs/ExAux_eterm0
				output=gen_313_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_313_3/inputs/ExAux_etermAng0
				output=gen_313_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_313_3/inputs/ExAux_itAbs0
				output=gen_313_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_313_3/inputs/ExAux_itermAng0
				output=gen_313_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_313_3/inputs/Eterm0
				output=gen_313_3/outputs/Eterm0
			}
			item {
				input=ex_313_3/inputs/Efd0
				output=gen_313_3/outputs/Efd0
			}
			item {
				output=ex_313_3/outputs/Efd
				input=gen_313_3/inputs/Efd
			}
			item {
				input=tg_313_3/inputs/busVx
				output=bus_313/outputs/busVx
			}
			item {
				input=tg_313_3/inputs/busVy
				output=bus_313/outputs/busVy
			}
			item {
				input=tg_313_3/inputs/slip
				output=gen_313_3/outputs/slip
			}
			item {
				input=tg_313_3/inputs/busIx
				output=gen_313_3/outputs/busIx
			}
			item {
				input=tg_313_3/inputs/busIy
				output=gen_313_3/outputs/busIy
			}
			item {
				input=tg_313_3/inputs/Pmech0
				output=gen_313_3/outputs/Pmech0
			}
			item {
				input=tg_313_3/inputs/mBasePower
				output=gen_313_3/outputs/mBasePower
			}
			item {
				output=tg_313_3/outputs/Pmech
				input=gen_313_3/inputs/Pmech
			}
			item {
				input=gen_314_1/inputs/busVx
				output=bus_314/outputs/busVx
			}
			item {
				input=gen_314_1/inputs/busVy
				output=bus_314/outputs/busVy
			}
			item {
				input=ex_314_1/inputs/busVx
				output=bus_314/outputs/busVx
			}
			item {
				input=ex_314_1/inputs/busVy
				output=bus_314/outputs/busVy
			}
			item {
				input=ex_314_1/inputs/XadIfd
				output=gen_314_1/outputs/XadIfd
			}
			item {
				input=ex_314_1/inputs/busIx
				output=gen_314_1/outputs/busIx
			}
			item {
				input=ex_314_1/inputs/busIy
				output=gen_314_1/outputs/busIy
			}
			item {
				input=ex_314_1/inputs/ExAux_eterm0
				output=gen_314_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_314_1/inputs/ExAux_etermAng0
				output=gen_314_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_314_1/inputs/ExAux_itAbs0
				output=gen_314_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_314_1/inputs/ExAux_itermAng0
				output=gen_314_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_314_1/inputs/Eterm0
				output=gen_314_1/outputs/Eterm0
			}
			item {
				input=ex_314_1/inputs/Efd0
				output=gen_314_1/outputs/Efd0
			}
			item {
				output=ex_314_1/outputs/Efd
				input=gen_314_1/inputs/Efd
			}
			item {
				input=tg_314_1/inputs/busVx
				output=bus_314/outputs/busVx
			}
			item {
				input=tg_314_1/inputs/busVy
				output=bus_314/outputs/busVy
			}
			item {
				input=tg_314_1/inputs/slip
				output=gen_314_1/outputs/slip
			}
			item {
				input=tg_314_1/inputs/busIx
				output=gen_314_1/outputs/busIx
			}
			item {
				input=tg_314_1/inputs/busIy
				output=gen_314_1/outputs/busIy
			}
			item {
				input=tg_314_1/inputs/Pmech0
				output=gen_314_1/outputs/Pmech0
			}
			item {
				input=tg_314_1/inputs/mBasePower
				output=gen_314_1/outputs/mBasePower
			}
			item {
				output=tg_314_1/outputs/Pmech
				input=gen_314_1/inputs/Pmech
			}
			item {
				input=gen_315_1/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=gen_315_1/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_1/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=ex_315_1/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_1/inputs/XadIfd
				output=gen_315_1/outputs/XadIfd
			}
			item {
				input=ex_315_1/inputs/busIx
				output=gen_315_1/outputs/busIx
			}
			item {
				input=ex_315_1/inputs/busIy
				output=gen_315_1/outputs/busIy
			}
			item {
				input=ex_315_1/inputs/ExAux_eterm0
				output=gen_315_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_315_1/inputs/ExAux_etermAng0
				output=gen_315_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_315_1/inputs/ExAux_itAbs0
				output=gen_315_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_315_1/inputs/ExAux_itermAng0
				output=gen_315_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_315_1/inputs/Eterm0
				output=gen_315_1/outputs/Eterm0
			}
			item {
				input=ex_315_1/inputs/Efd0
				output=gen_315_1/outputs/Efd0
			}
			item {
				output=ex_315_1/outputs/Efd
				input=gen_315_1/inputs/Efd
			}
			item {
				input=tg_315_1/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=tg_315_1/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=tg_315_1/inputs/slip
				output=gen_315_1/outputs/slip
			}
			item {
				input=tg_315_1/inputs/busIx
				output=gen_315_1/outputs/busIx
			}
			item {
				input=tg_315_1/inputs/busIy
				output=gen_315_1/outputs/busIy
			}
			item {
				input=tg_315_1/inputs/Pmech0
				output=gen_315_1/outputs/Pmech0
			}
			item {
				input=tg_315_1/inputs/mBasePower
				output=gen_315_1/outputs/mBasePower
			}
			item {
				output=tg_315_1/outputs/Pmech
				input=gen_315_1/inputs/Pmech
			}
			item {
				input=gen_315_2/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=gen_315_2/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_2/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=ex_315_2/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_2/inputs/XadIfd
				output=gen_315_2/outputs/XadIfd
			}
			item {
				input=ex_315_2/inputs/busIx
				output=gen_315_2/outputs/busIx
			}
			item {
				input=ex_315_2/inputs/busIy
				output=gen_315_2/outputs/busIy
			}
			item {
				input=ex_315_2/inputs/ExAux_eterm0
				output=gen_315_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_315_2/inputs/ExAux_etermAng0
				output=gen_315_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_315_2/inputs/ExAux_itAbs0
				output=gen_315_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_315_2/inputs/ExAux_itermAng0
				output=gen_315_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_315_2/inputs/Eterm0
				output=gen_315_2/outputs/Eterm0
			}
			item {
				input=ex_315_2/inputs/Efd0
				output=gen_315_2/outputs/Efd0
			}
			item {
				output=ex_315_2/outputs/Efd
				input=gen_315_2/inputs/Efd
			}
			item {
				input=tg_315_2/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=tg_315_2/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=tg_315_2/inputs/slip
				output=gen_315_2/outputs/slip
			}
			item {
				input=tg_315_2/inputs/busIx
				output=gen_315_2/outputs/busIx
			}
			item {
				input=tg_315_2/inputs/busIy
				output=gen_315_2/outputs/busIy
			}
			item {
				input=tg_315_2/inputs/Pmech0
				output=gen_315_2/outputs/Pmech0
			}
			item {
				input=tg_315_2/inputs/mBasePower
				output=gen_315_2/outputs/mBasePower
			}
			item {
				output=tg_315_2/outputs/Pmech
				input=gen_315_2/inputs/Pmech
			}
			item {
				input=gen_315_3/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=gen_315_3/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_3/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=ex_315_3/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_3/inputs/XadIfd
				output=gen_315_3/outputs/XadIfd
			}
			item {
				input=ex_315_3/inputs/busIx
				output=gen_315_3/outputs/busIx
			}
			item {
				input=ex_315_3/inputs/busIy
				output=gen_315_3/outputs/busIy
			}
			item {
				input=ex_315_3/inputs/ExAux_eterm0
				output=gen_315_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_315_3/inputs/ExAux_etermAng0
				output=gen_315_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_315_3/inputs/ExAux_itAbs0
				output=gen_315_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_315_3/inputs/ExAux_itermAng0
				output=gen_315_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_315_3/inputs/Eterm0
				output=gen_315_3/outputs/Eterm0
			}
			item {
				input=ex_315_3/inputs/Efd0
				output=gen_315_3/outputs/Efd0
			}
			item {
				output=ex_315_3/outputs/Efd
				input=gen_315_3/inputs/Efd
			}
			item {
				input=tg_315_3/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=tg_315_3/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=tg_315_3/inputs/slip
				output=gen_315_3/outputs/slip
			}
			item {
				input=tg_315_3/inputs/busIx
				output=gen_315_3/outputs/busIx
			}
			item {
				input=tg_315_3/inputs/busIy
				output=gen_315_3/outputs/busIy
			}
			item {
				input=tg_315_3/inputs/Pmech0
				output=gen_315_3/outputs/Pmech0
			}
			item {
				input=tg_315_3/inputs/mBasePower
				output=gen_315_3/outputs/mBasePower
			}
			item {
				output=tg_315_3/outputs/Pmech
				input=gen_315_3/inputs/Pmech
			}
			item {
				input=gen_315_4/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=gen_315_4/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_4/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=ex_315_4/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_4/inputs/XadIfd
				output=gen_315_4/outputs/XadIfd
			}
			item {
				input=ex_315_4/inputs/busIx
				output=gen_315_4/outputs/busIx
			}
			item {
				input=ex_315_4/inputs/busIy
				output=gen_315_4/outputs/busIy
			}
			item {
				input=ex_315_4/inputs/ExAux_eterm0
				output=gen_315_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_315_4/inputs/ExAux_etermAng0
				output=gen_315_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_315_4/inputs/ExAux_itAbs0
				output=gen_315_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_315_4/inputs/ExAux_itermAng0
				output=gen_315_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_315_4/inputs/Eterm0
				output=gen_315_4/outputs/Eterm0
			}
			item {
				input=ex_315_4/inputs/Efd0
				output=gen_315_4/outputs/Efd0
			}
			item {
				output=ex_315_4/outputs/Efd
				input=gen_315_4/inputs/Efd
			}
			item {
				input=tg_315_4/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=tg_315_4/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=tg_315_4/inputs/slip
				output=gen_315_4/outputs/slip
			}
			item {
				input=tg_315_4/inputs/busIx
				output=gen_315_4/outputs/busIx
			}
			item {
				input=tg_315_4/inputs/busIy
				output=gen_315_4/outputs/busIy
			}
			item {
				input=tg_315_4/inputs/Pmech0
				output=gen_315_4/outputs/Pmech0
			}
			item {
				input=tg_315_4/inputs/mBasePower
				output=gen_315_4/outputs/mBasePower
			}
			item {
				output=tg_315_4/outputs/Pmech
				input=gen_315_4/inputs/Pmech
			}
			item {
				input=gen_315_5/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=gen_315_5/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_5/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=ex_315_5/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_5/inputs/XadIfd
				output=gen_315_5/outputs/XadIfd
			}
			item {
				input=ex_315_5/inputs/busIx
				output=gen_315_5/outputs/busIx
			}
			item {
				input=ex_315_5/inputs/busIy
				output=gen_315_5/outputs/busIy
			}
			item {
				input=ex_315_5/inputs/ExAux_eterm0
				output=gen_315_5/outputs/ExAux_eterm0
			}
			item {
				input=ex_315_5/inputs/ExAux_etermAng0
				output=gen_315_5/outputs/ExAux_etermAng0
			}
			item {
				input=ex_315_5/inputs/ExAux_itAbs0
				output=gen_315_5/outputs/ExAux_itAbs0
			}
			item {
				input=ex_315_5/inputs/ExAux_itermAng0
				output=gen_315_5/outputs/ExAux_itermAng0
			}
			item {
				input=ex_315_5/inputs/Eterm0
				output=gen_315_5/outputs/Eterm0
			}
			item {
				input=ex_315_5/inputs/Efd0
				output=gen_315_5/outputs/Efd0
			}
			item {
				output=ex_315_5/outputs/Efd
				input=gen_315_5/inputs/Efd
			}
			item {
				input=tg_315_5/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=tg_315_5/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=tg_315_5/inputs/slip
				output=gen_315_5/outputs/slip
			}
			item {
				input=tg_315_5/inputs/busIx
				output=gen_315_5/outputs/busIx
			}
			item {
				input=tg_315_5/inputs/busIy
				output=gen_315_5/outputs/busIy
			}
			item {
				input=tg_315_5/inputs/Pmech0
				output=gen_315_5/outputs/Pmech0
			}
			item {
				input=tg_315_5/inputs/mBasePower
				output=gen_315_5/outputs/mBasePower
			}
			item {
				output=tg_315_5/outputs/Pmech
				input=gen_315_5/inputs/Pmech
			}
			item {
				input=gen_315_6/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=gen_315_6/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_6/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=ex_315_6/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=ex_315_6/inputs/XadIfd
				output=gen_315_6/outputs/XadIfd
			}
			item {
				input=ex_315_6/inputs/busIx
				output=gen_315_6/outputs/busIx
			}
			item {
				input=ex_315_6/inputs/busIy
				output=gen_315_6/outputs/busIy
			}
			item {
				input=ex_315_6/inputs/ExAux_eterm0
				output=gen_315_6/outputs/ExAux_eterm0
			}
			item {
				input=ex_315_6/inputs/ExAux_etermAng0
				output=gen_315_6/outputs/ExAux_etermAng0
			}
			item {
				input=ex_315_6/inputs/ExAux_itAbs0
				output=gen_315_6/outputs/ExAux_itAbs0
			}
			item {
				input=ex_315_6/inputs/ExAux_itermAng0
				output=gen_315_6/outputs/ExAux_itermAng0
			}
			item {
				input=ex_315_6/inputs/Eterm0
				output=gen_315_6/outputs/Eterm0
			}
			item {
				input=ex_315_6/inputs/Efd0
				output=gen_315_6/outputs/Efd0
			}
			item {
				output=ex_315_6/outputs/Efd
				input=gen_315_6/inputs/Efd
			}
			item {
				input=tg_315_6/inputs/busVx
				output=bus_315/outputs/busVx
			}
			item {
				input=tg_315_6/inputs/busVy
				output=bus_315/outputs/busVy
			}
			item {
				input=tg_315_6/inputs/slip
				output=gen_315_6/outputs/slip
			}
			item {
				input=tg_315_6/inputs/busIx
				output=gen_315_6/outputs/busIx
			}
			item {
				input=tg_315_6/inputs/busIy
				output=gen_315_6/outputs/busIy
			}
			item {
				input=tg_315_6/inputs/Pmech0
				output=gen_315_6/outputs/Pmech0
			}
			item {
				input=tg_315_6/inputs/mBasePower
				output=gen_315_6/outputs/mBasePower
			}
			item {
				output=tg_315_6/outputs/Pmech
				input=gen_315_6/inputs/Pmech
			}
			item {
				input=gen_316_1/inputs/busVx
				output=bus_316/outputs/busVx
			}
			item {
				input=gen_316_1/inputs/busVy
				output=bus_316/outputs/busVy
			}
			item {
				input=ex_316_1/inputs/busVx
				output=bus_316/outputs/busVx
			}
			item {
				input=ex_316_1/inputs/busVy
				output=bus_316/outputs/busVy
			}
			item {
				input=ex_316_1/inputs/XadIfd
				output=gen_316_1/outputs/XadIfd
			}
			item {
				input=ex_316_1/inputs/busIx
				output=gen_316_1/outputs/busIx
			}
			item {
				input=ex_316_1/inputs/busIy
				output=gen_316_1/outputs/busIy
			}
			item {
				input=ex_316_1/inputs/ExAux_eterm0
				output=gen_316_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_316_1/inputs/ExAux_etermAng0
				output=gen_316_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_316_1/inputs/ExAux_itAbs0
				output=gen_316_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_316_1/inputs/ExAux_itermAng0
				output=gen_316_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_316_1/inputs/Eterm0
				output=gen_316_1/outputs/Eterm0
			}
			item {
				input=ex_316_1/inputs/Efd0
				output=gen_316_1/outputs/Efd0
			}
			item {
				output=ex_316_1/outputs/Efd
				input=gen_316_1/inputs/Efd
			}
			item {
				input=tg_316_1/inputs/busVx
				output=bus_316/outputs/busVx
			}
			item {
				input=tg_316_1/inputs/busVy
				output=bus_316/outputs/busVy
			}
			item {
				input=tg_316_1/inputs/slip
				output=gen_316_1/outputs/slip
			}
			item {
				input=tg_316_1/inputs/busIx
				output=gen_316_1/outputs/busIx
			}
			item {
				input=tg_316_1/inputs/busIy
				output=gen_316_1/outputs/busIy
			}
			item {
				input=tg_316_1/inputs/Pmech0
				output=gen_316_1/outputs/Pmech0
			}
			item {
				input=tg_316_1/inputs/mBasePower
				output=gen_316_1/outputs/mBasePower
			}
			item {
				output=tg_316_1/outputs/Pmech
				input=gen_316_1/inputs/Pmech
			}
			item {
				input=gen_318_1/inputs/busVx
				output=bus_318/outputs/busVx
			}
			item {
				input=gen_318_1/inputs/busVy
				output=bus_318/outputs/busVy
			}
			item {
				input=ex_318_1/inputs/busVx
				output=bus_318/outputs/busVx
			}
			item {
				input=ex_318_1/inputs/busVy
				output=bus_318/outputs/busVy
			}
			item {
				input=ex_318_1/inputs/XadIfd
				output=gen_318_1/outputs/XadIfd
			}
			item {
				input=ex_318_1/inputs/busIx
				output=gen_318_1/outputs/busIx
			}
			item {
				input=ex_318_1/inputs/busIy
				output=gen_318_1/outputs/busIy
			}
			item {
				input=ex_318_1/inputs/ExAux_eterm0
				output=gen_318_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_318_1/inputs/ExAux_etermAng0
				output=gen_318_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_318_1/inputs/ExAux_itAbs0
				output=gen_318_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_318_1/inputs/ExAux_itermAng0
				output=gen_318_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_318_1/inputs/Eterm0
				output=gen_318_1/outputs/Eterm0
			}
			item {
				input=ex_318_1/inputs/Efd0
				output=gen_318_1/outputs/Efd0
			}
			item {
				output=ex_318_1/outputs/Efd
				input=gen_318_1/inputs/Efd
			}
			item {
				input=tg_318_1/inputs/busVx
				output=bus_318/outputs/busVx
			}
			item {
				input=tg_318_1/inputs/busVy
				output=bus_318/outputs/busVy
			}
			item {
				input=tg_318_1/inputs/slip
				output=gen_318_1/outputs/slip
			}
			item {
				input=tg_318_1/inputs/busIx
				output=gen_318_1/outputs/busIx
			}
			item {
				input=tg_318_1/inputs/busIy
				output=gen_318_1/outputs/busIy
			}
			item {
				input=tg_318_1/inputs/Pmech0
				output=gen_318_1/outputs/Pmech0
			}
			item {
				input=tg_318_1/inputs/mBasePower
				output=gen_318_1/outputs/mBasePower
			}
			item {
				output=tg_318_1/outputs/Pmech
				input=gen_318_1/inputs/Pmech
			}
			item {
				input=gen_321_1/inputs/busVx
				output=bus_321/outputs/busVx
			}
			item {
				input=gen_321_1/inputs/busVy
				output=bus_321/outputs/busVy
			}
			item {
				input=ex_321_1/inputs/busVx
				output=bus_321/outputs/busVx
			}
			item {
				input=ex_321_1/inputs/busVy
				output=bus_321/outputs/busVy
			}
			item {
				input=ex_321_1/inputs/XadIfd
				output=gen_321_1/outputs/XadIfd
			}
			item {
				input=ex_321_1/inputs/busIx
				output=gen_321_1/outputs/busIx
			}
			item {
				input=ex_321_1/inputs/busIy
				output=gen_321_1/outputs/busIy
			}
			item {
				input=ex_321_1/inputs/ExAux_eterm0
				output=gen_321_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_321_1/inputs/ExAux_etermAng0
				output=gen_321_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_321_1/inputs/ExAux_itAbs0
				output=gen_321_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_321_1/inputs/ExAux_itermAng0
				output=gen_321_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_321_1/inputs/Eterm0
				output=gen_321_1/outputs/Eterm0
			}
			item {
				input=ex_321_1/inputs/Efd0
				output=gen_321_1/outputs/Efd0
			}
			item {
				output=ex_321_1/outputs/Efd
				input=gen_321_1/inputs/Efd
			}
			item {
				input=tg_321_1/inputs/busVx
				output=bus_321/outputs/busVx
			}
			item {
				input=tg_321_1/inputs/busVy
				output=bus_321/outputs/busVy
			}
			item {
				input=tg_321_1/inputs/slip
				output=gen_321_1/outputs/slip
			}
			item {
				input=tg_321_1/inputs/busIx
				output=gen_321_1/outputs/busIx
			}
			item {
				input=tg_321_1/inputs/busIy
				output=gen_321_1/outputs/busIy
			}
			item {
				input=tg_321_1/inputs/Pmech0
				output=gen_321_1/outputs/Pmech0
			}
			item {
				input=tg_321_1/inputs/mBasePower
				output=gen_321_1/outputs/mBasePower
			}
			item {
				output=tg_321_1/outputs/Pmech
				input=gen_321_1/inputs/Pmech
			}
			item {
				input=gen_322_1/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=gen_322_1/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_1/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=ex_322_1/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_1/inputs/XadIfd
				output=gen_322_1/outputs/XadIfd
			}
			item {
				input=ex_322_1/inputs/busIx
				output=gen_322_1/outputs/busIx
			}
			item {
				input=ex_322_1/inputs/busIy
				output=gen_322_1/outputs/busIy
			}
			item {
				input=ex_322_1/inputs/ExAux_eterm0
				output=gen_322_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_322_1/inputs/ExAux_etermAng0
				output=gen_322_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_322_1/inputs/ExAux_itAbs0
				output=gen_322_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_322_1/inputs/ExAux_itermAng0
				output=gen_322_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_322_1/inputs/Eterm0
				output=gen_322_1/outputs/Eterm0
			}
			item {
				input=ex_322_1/inputs/Efd0
				output=gen_322_1/outputs/Efd0
			}
			item {
				output=ex_322_1/outputs/Efd
				input=gen_322_1/inputs/Efd
			}
			item {
				input=tg_322_1/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=tg_322_1/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=tg_322_1/inputs/slip
				output=gen_322_1/outputs/slip
			}
			item {
				input=tg_322_1/inputs/busIx
				output=gen_322_1/outputs/busIx
			}
			item {
				input=tg_322_1/inputs/busIy
				output=gen_322_1/outputs/busIy
			}
			item {
				input=tg_322_1/inputs/Pmech0
				output=gen_322_1/outputs/Pmech0
			}
			item {
				input=tg_322_1/inputs/mBasePower
				output=gen_322_1/outputs/mBasePower
			}
			item {
				output=tg_322_1/outputs/Pmech
				input=gen_322_1/inputs/Pmech
			}
			item {
				input=gen_322_2/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=gen_322_2/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_2/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=ex_322_2/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_2/inputs/XadIfd
				output=gen_322_2/outputs/XadIfd
			}
			item {
				input=ex_322_2/inputs/busIx
				output=gen_322_2/outputs/busIx
			}
			item {
				input=ex_322_2/inputs/busIy
				output=gen_322_2/outputs/busIy
			}
			item {
				input=ex_322_2/inputs/ExAux_eterm0
				output=gen_322_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_322_2/inputs/ExAux_etermAng0
				output=gen_322_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_322_2/inputs/ExAux_itAbs0
				output=gen_322_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_322_2/inputs/ExAux_itermAng0
				output=gen_322_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_322_2/inputs/Eterm0
				output=gen_322_2/outputs/Eterm0
			}
			item {
				input=ex_322_2/inputs/Efd0
				output=gen_322_2/outputs/Efd0
			}
			item {
				output=ex_322_2/outputs/Efd
				input=gen_322_2/inputs/Efd
			}
			item {
				input=tg_322_2/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=tg_322_2/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=tg_322_2/inputs/slip
				output=gen_322_2/outputs/slip
			}
			item {
				input=tg_322_2/inputs/busIx
				output=gen_322_2/outputs/busIx
			}
			item {
				input=tg_322_2/inputs/busIy
				output=gen_322_2/outputs/busIy
			}
			item {
				input=tg_322_2/inputs/Pmech0
				output=gen_322_2/outputs/Pmech0
			}
			item {
				input=tg_322_2/inputs/mBasePower
				output=gen_322_2/outputs/mBasePower
			}
			item {
				output=tg_322_2/outputs/Pmech
				input=gen_322_2/inputs/Pmech
			}
			item {
				input=gen_322_3/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=gen_322_3/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_3/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=ex_322_3/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_3/inputs/XadIfd
				output=gen_322_3/outputs/XadIfd
			}
			item {
				input=ex_322_3/inputs/busIx
				output=gen_322_3/outputs/busIx
			}
			item {
				input=ex_322_3/inputs/busIy
				output=gen_322_3/outputs/busIy
			}
			item {
				input=ex_322_3/inputs/ExAux_eterm0
				output=gen_322_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_322_3/inputs/ExAux_etermAng0
				output=gen_322_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_322_3/inputs/ExAux_itAbs0
				output=gen_322_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_322_3/inputs/ExAux_itermAng0
				output=gen_322_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_322_3/inputs/Eterm0
				output=gen_322_3/outputs/Eterm0
			}
			item {
				input=ex_322_3/inputs/Efd0
				output=gen_322_3/outputs/Efd0
			}
			item {
				output=ex_322_3/outputs/Efd
				input=gen_322_3/inputs/Efd
			}
			item {
				input=tg_322_3/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=tg_322_3/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=tg_322_3/inputs/slip
				output=gen_322_3/outputs/slip
			}
			item {
				input=tg_322_3/inputs/busIx
				output=gen_322_3/outputs/busIx
			}
			item {
				input=tg_322_3/inputs/busIy
				output=gen_322_3/outputs/busIy
			}
			item {
				input=tg_322_3/inputs/Pmech0
				output=gen_322_3/outputs/Pmech0
			}
			item {
				input=tg_322_3/inputs/mBasePower
				output=gen_322_3/outputs/mBasePower
			}
			item {
				output=tg_322_3/outputs/Pmech
				input=gen_322_3/inputs/Pmech
			}
			item {
				input=gen_322_4/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=gen_322_4/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_4/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=ex_322_4/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_4/inputs/XadIfd
				output=gen_322_4/outputs/XadIfd
			}
			item {
				input=ex_322_4/inputs/busIx
				output=gen_322_4/outputs/busIx
			}
			item {
				input=ex_322_4/inputs/busIy
				output=gen_322_4/outputs/busIy
			}
			item {
				input=ex_322_4/inputs/ExAux_eterm0
				output=gen_322_4/outputs/ExAux_eterm0
			}
			item {
				input=ex_322_4/inputs/ExAux_etermAng0
				output=gen_322_4/outputs/ExAux_etermAng0
			}
			item {
				input=ex_322_4/inputs/ExAux_itAbs0
				output=gen_322_4/outputs/ExAux_itAbs0
			}
			item {
				input=ex_322_4/inputs/ExAux_itermAng0
				output=gen_322_4/outputs/ExAux_itermAng0
			}
			item {
				input=ex_322_4/inputs/Eterm0
				output=gen_322_4/outputs/Eterm0
			}
			item {
				input=ex_322_4/inputs/Efd0
				output=gen_322_4/outputs/Efd0
			}
			item {
				output=ex_322_4/outputs/Efd
				input=gen_322_4/inputs/Efd
			}
			item {
				input=tg_322_4/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=tg_322_4/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=tg_322_4/inputs/slip
				output=gen_322_4/outputs/slip
			}
			item {
				input=tg_322_4/inputs/busIx
				output=gen_322_4/outputs/busIx
			}
			item {
				input=tg_322_4/inputs/busIy
				output=gen_322_4/outputs/busIy
			}
			item {
				input=tg_322_4/inputs/Pmech0
				output=gen_322_4/outputs/Pmech0
			}
			item {
				input=tg_322_4/inputs/mBasePower
				output=gen_322_4/outputs/mBasePower
			}
			item {
				output=tg_322_4/outputs/Pmech
				input=gen_322_4/inputs/Pmech
			}
			item {
				input=gen_322_5/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=gen_322_5/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_5/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=ex_322_5/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_5/inputs/XadIfd
				output=gen_322_5/outputs/XadIfd
			}
			item {
				input=ex_322_5/inputs/busIx
				output=gen_322_5/outputs/busIx
			}
			item {
				input=ex_322_5/inputs/busIy
				output=gen_322_5/outputs/busIy
			}
			item {
				input=ex_322_5/inputs/ExAux_eterm0
				output=gen_322_5/outputs/ExAux_eterm0
			}
			item {
				input=ex_322_5/inputs/ExAux_etermAng0
				output=gen_322_5/outputs/ExAux_etermAng0
			}
			item {
				input=ex_322_5/inputs/ExAux_itAbs0
				output=gen_322_5/outputs/ExAux_itAbs0
			}
			item {
				input=ex_322_5/inputs/ExAux_itermAng0
				output=gen_322_5/outputs/ExAux_itermAng0
			}
			item {
				input=ex_322_5/inputs/Eterm0
				output=gen_322_5/outputs/Eterm0
			}
			item {
				input=ex_322_5/inputs/Efd0
				output=gen_322_5/outputs/Efd0
			}
			item {
				output=ex_322_5/outputs/Efd
				input=gen_322_5/inputs/Efd
			}
			item {
				input=tg_322_5/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=tg_322_5/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=tg_322_5/inputs/slip
				output=gen_322_5/outputs/slip
			}
			item {
				input=tg_322_5/inputs/busIx
				output=gen_322_5/outputs/busIx
			}
			item {
				input=tg_322_5/inputs/busIy
				output=gen_322_5/outputs/busIy
			}
			item {
				input=tg_322_5/inputs/Pmech0
				output=gen_322_5/outputs/Pmech0
			}
			item {
				input=tg_322_5/inputs/mBasePower
				output=gen_322_5/outputs/mBasePower
			}
			item {
				output=tg_322_5/outputs/Pmech
				input=gen_322_5/inputs/Pmech
			}
			item {
				input=gen_322_6/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=gen_322_6/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_6/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=ex_322_6/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=ex_322_6/inputs/XadIfd
				output=gen_322_6/outputs/XadIfd
			}
			item {
				input=ex_322_6/inputs/busIx
				output=gen_322_6/outputs/busIx
			}
			item {
				input=ex_322_6/inputs/busIy
				output=gen_322_6/outputs/busIy
			}
			item {
				input=ex_322_6/inputs/ExAux_eterm0
				output=gen_322_6/outputs/ExAux_eterm0
			}
			item {
				input=ex_322_6/inputs/ExAux_etermAng0
				output=gen_322_6/outputs/ExAux_etermAng0
			}
			item {
				input=ex_322_6/inputs/ExAux_itAbs0
				output=gen_322_6/outputs/ExAux_itAbs0
			}
			item {
				input=ex_322_6/inputs/ExAux_itermAng0
				output=gen_322_6/outputs/ExAux_itermAng0
			}
			item {
				input=ex_322_6/inputs/Eterm0
				output=gen_322_6/outputs/Eterm0
			}
			item {
				input=ex_322_6/inputs/Efd0
				output=gen_322_6/outputs/Efd0
			}
			item {
				output=ex_322_6/outputs/Efd
				input=gen_322_6/inputs/Efd
			}
			item {
				input=tg_322_6/inputs/busVx
				output=bus_322/outputs/busVx
			}
			item {
				input=tg_322_6/inputs/busVy
				output=bus_322/outputs/busVy
			}
			item {
				input=tg_322_6/inputs/slip
				output=gen_322_6/outputs/slip
			}
			item {
				input=tg_322_6/inputs/busIx
				output=gen_322_6/outputs/busIx
			}
			item {
				input=tg_322_6/inputs/busIy
				output=gen_322_6/outputs/busIy
			}
			item {
				input=tg_322_6/inputs/Pmech0
				output=gen_322_6/outputs/Pmech0
			}
			item {
				input=tg_322_6/inputs/mBasePower
				output=gen_322_6/outputs/mBasePower
			}
			item {
				output=tg_322_6/outputs/Pmech
				input=gen_322_6/inputs/Pmech
			}
			item {
				input=gen_323_1/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=gen_323_1/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=ex_323_1/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=ex_323_1/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=ex_323_1/inputs/XadIfd
				output=gen_323_1/outputs/XadIfd
			}
			item {
				input=ex_323_1/inputs/busIx
				output=gen_323_1/outputs/busIx
			}
			item {
				input=ex_323_1/inputs/busIy
				output=gen_323_1/outputs/busIy
			}
			item {
				input=ex_323_1/inputs/ExAux_eterm0
				output=gen_323_1/outputs/ExAux_eterm0
			}
			item {
				input=ex_323_1/inputs/ExAux_etermAng0
				output=gen_323_1/outputs/ExAux_etermAng0
			}
			item {
				input=ex_323_1/inputs/ExAux_itAbs0
				output=gen_323_1/outputs/ExAux_itAbs0
			}
			item {
				input=ex_323_1/inputs/ExAux_itermAng0
				output=gen_323_1/outputs/ExAux_itermAng0
			}
			item {
				input=ex_323_1/inputs/Eterm0
				output=gen_323_1/outputs/Eterm0
			}
			item {
				input=ex_323_1/inputs/Efd0
				output=gen_323_1/outputs/Efd0
			}
			item {
				output=ex_323_1/outputs/Efd
				input=gen_323_1/inputs/Efd
			}
			item {
				input=tg_323_1/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=tg_323_1/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=tg_323_1/inputs/slip
				output=gen_323_1/outputs/slip
			}
			item {
				input=tg_323_1/inputs/busIx
				output=gen_323_1/outputs/busIx
			}
			item {
				input=tg_323_1/inputs/busIy
				output=gen_323_1/outputs/busIy
			}
			item {
				input=tg_323_1/inputs/Pmech0
				output=gen_323_1/outputs/Pmech0
			}
			item {
				input=tg_323_1/inputs/mBasePower
				output=gen_323_1/outputs/mBasePower
			}
			item {
				output=tg_323_1/outputs/Pmech
				input=gen_323_1/inputs/Pmech
			}
			item {
				input=gen_323_2/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=gen_323_2/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=ex_323_2/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=ex_323_2/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=ex_323_2/inputs/XadIfd
				output=gen_323_2/outputs/XadIfd
			}
			item {
				input=ex_323_2/inputs/busIx
				output=gen_323_2/outputs/busIx
			}
			item {
				input=ex_323_2/inputs/busIy
				output=gen_323_2/outputs/busIy
			}
			item {
				input=ex_323_2/inputs/ExAux_eterm0
				output=gen_323_2/outputs/ExAux_eterm0
			}
			item {
				input=ex_323_2/inputs/ExAux_etermAng0
				output=gen_323_2/outputs/ExAux_etermAng0
			}
			item {
				input=ex_323_2/inputs/ExAux_itAbs0
				output=gen_323_2/outputs/ExAux_itAbs0
			}
			item {
				input=ex_323_2/inputs/ExAux_itermAng0
				output=gen_323_2/outputs/ExAux_itermAng0
			}
			item {
				input=ex_323_2/inputs/Eterm0
				output=gen_323_2/outputs/Eterm0
			}
			item {
				input=ex_323_2/inputs/Efd0
				output=gen_323_2/outputs/Efd0
			}
			item {
				output=ex_323_2/outputs/Efd
				input=gen_323_2/inputs/Efd
			}
			item {
				input=tg_323_2/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=tg_323_2/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=tg_323_2/inputs/slip
				output=gen_323_2/outputs/slip
			}
			item {
				input=tg_323_2/inputs/busIx
				output=gen_323_2/outputs/busIx
			}
			item {
				input=tg_323_2/inputs/busIy
				output=gen_323_2/outputs/busIy
			}
			item {
				input=tg_323_2/inputs/Pmech0
				output=gen_323_2/outputs/Pmech0
			}
			item {
				input=tg_323_2/inputs/mBasePower
				output=gen_323_2/outputs/mBasePower
			}
			item {
				output=tg_323_2/outputs/Pmech
				input=gen_323_2/inputs/Pmech
			}
			item {
				input=gen_323_3/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=gen_323_3/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=ex_323_3/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=ex_323_3/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=ex_323_3/inputs/XadIfd
				output=gen_323_3/outputs/XadIfd
			}
			item {
				input=ex_323_3/inputs/busIx
				output=gen_323_3/outputs/busIx
			}
			item {
				input=ex_323_3/inputs/busIy
				output=gen_323_3/outputs/busIy
			}
			item {
				input=ex_323_3/inputs/ExAux_eterm0
				output=gen_323_3/outputs/ExAux_eterm0
			}
			item {
				input=ex_323_3/inputs/ExAux_etermAng0
				output=gen_323_3/outputs/ExAux_etermAng0
			}
			item {
				input=ex_323_3/inputs/ExAux_itAbs0
				output=gen_323_3/outputs/ExAux_itAbs0
			}
			item {
				input=ex_323_3/inputs/ExAux_itermAng0
				output=gen_323_3/outputs/ExAux_itermAng0
			}
			item {
				input=ex_323_3/inputs/Eterm0
				output=gen_323_3/outputs/Eterm0
			}
			item {
				input=ex_323_3/inputs/Efd0
				output=gen_323_3/outputs/Efd0
			}
			item {
				output=ex_323_3/outputs/Efd
				input=gen_323_3/inputs/Efd
			}
			item {
				input=tg_323_3/inputs/busVx
				output=bus_323/outputs/busVx
			}
			item {
				input=tg_323_3/inputs/busVy
				output=bus_323/outputs/busVy
			}
			item {
				input=tg_323_3/inputs/slip
				output=gen_323_3/outputs/slip
			}
			item {
				input=tg_323_3/inputs/busIx
				output=gen_323_3/outputs/busIx
			}
			item {
				input=tg_323_3/inputs/busIy
				output=gen_323_3/outputs/busIy
			}
			item {
				input=tg_323_3/inputs/Pmech0
				output=gen_323_3/outputs/Pmech0
			}
			item {
				input=tg_323_3/inputs/mBasePower
				output=gen_323_3/outputs/mBasePower
			}
			item {
				output=tg_323_3/outputs/Pmech
				input=gen_323_3/inputs/Pmech
			}
		}
	}
}
Bus {
	name=bus_101
	type=PV
	voltage {
		base=138000
		magnitude=1.035
		angle=-7.1756
	}
}
Bus {
	name=bus_102
	type=PV
	voltage {
		base=138000
		magnitude=1.035
		angle=-7.2851
	}
}
Bus {
	name=bus_103
	type=PQ
	voltage {
		base=138000
		magnitude=0.97277
		angle=-5.0111
	}
}
Bus {
	name=bus_104
	type=PQ
	voltage {
		base=138000
		magnitude=0.99006
		angle=-9.6613
	}
}
Bus {
	name=bus_105
	type=PQ
	voltage {
		base=138000
		magnitude=1.02671
		angle=-9.9424
	}
}
Bus {
	name=bus_106
	type=PQ
	voltage {
		base=138000
		magnitude=1.0771
		angle=-12.9218
	}
}
Bus {
	name=bus_107
	type=PV
	voltage {
		base=138000
		magnitude=1.025
		angle=-7.2709
	}
}
Bus {
	name=bus_108
	type=PQ
	voltage {
		base=138000
		magnitude=0.99323
		angle=-11.0315
	}
}
Bus {
	name=bus_109
	type=PQ
	voltage {
		base=138000
		magnitude=0.98753
		angle=-7.3791
	}
}
Bus {
	name=bus_110
	type=PQ
	voltage {
		base=138000
		magnitude=1.04505
		angle=-9.5841
	}
}
Bus {
	name=bus_111
	type=PQ
	voltage {
		base=230000
		magnitude=0.99997
		angle=-2.8293
	}
}
Bus {
	name=bus_112
	type=PQ
	voltage {
		base=230000
		magnitude=1.01282
		angle=-1.4709
	}
}
Bus {
	name=bus_113
	type=SLACK
	voltage {
		base=230000
		magnitude=1.02
		angle=0
	}
}
Bus {
	name=bus_114
	type=PV
	voltage {
		base=230000
		magnitude=0.98
		angle=0.5792
	}
}
Bus {
	name=bus_115
	type=PV
	voltage {
		base=230000
		magnitude=1.014
		angle=12.5981
	}
}
Bus {
	name=bus_116
	type=PV
	voltage {
		base=230000
		magnitude=1.017
		angle=11.693
	}
}
Bus {
	name=bus_117
	type=PQ
	voltage {
		base=230000
		magnitude=1.03828
		angle=16.0087
	}
}
Bus {
	name=bus_118
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=17.2363
	}
}
Bus {
	name=bus_119
	type=PQ
	voltage {
		base=230000
		magnitude=1.02301
		angle=10.0317
	}
}
Bus {
	name=bus_120
	type=PQ
	voltage {
		base=230000
		magnitude=1.03824
		angle=10.5375
	}
}
Bus {
	name=bus_121
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=17.9834
	}
}
Bus {
	name=bus_122
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=23.7205
	}
}
Bus {
	name=bus_123
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=11.5343
	}
}
Bus {
	name=bus_124
	type=PQ
	voltage {
		base=230000
		magnitude=0.981
		angle=6.0942
	}
}
Bus {
	name=bus_201
	type=PV
	voltage {
		base=138000
		magnitude=1.035
		angle=-7.2915
	}
}
Bus {
	name=bus_202
	type=PV
	voltage {
		base=138000
		magnitude=1.035
		angle=-7.3644
	}
}
Bus {
	name=bus_203
	type=PQ
	voltage {
		base=138000
		magnitude=0.98917
		angle=-6.5926
	}
}
Bus {
	name=bus_204
	type=PQ
	voltage {
		base=138000
		magnitude=0.99252
		angle=-9.6517
	}
}
Bus {
	name=bus_205
	type=PQ
	voltage {
		base=138000
		magnitude=1.02703
		angle=-9.8384
	}
}
Bus {
	name=bus_206
	type=PQ
	voltage {
		base=138000
		magnitude=1.07762
		angle=-12.6881
	}
}
Bus {
	name=bus_207
	type=PV
	voltage {
		base=138000
		magnitude=1.025
		angle=-7.1448
	}
}
Bus {
	name=bus_208
	type=PQ
	voltage {
		base=138000
		magnitude=0.99433
		angle=-10.8671
	}
}
Bus {
	name=bus_209
	type=PQ
	voltage {
		base=138000
		magnitude=0.9919
		angle=-7.3141
	}
}
Bus {
	name=bus_210
	type=PQ
	voltage {
		base=138000
		magnitude=1.04555
		angle=-9.256
	}
}
Bus {
	name=bus_211
	type=PQ
	voltage {
		base=230000
		magnitude=1.00064
		angle=-2.6085
	}
}
Bus {
	name=bus_212
	type=PQ
	voltage {
		base=230000
		magnitude=1.01261
		angle=-0.6222
	}
}
Bus {
	name=bus_213
	type=PV
	voltage {
		base=230000
		magnitude=1.02
		angle=1.6398
	}
}
Bus {
	name=bus_214
	type=PV
	voltage {
		base=230000
		magnitude=0.98
		angle=-0.4458
	}
}
Bus {
	name=bus_215
	type=PV
	voltage {
		base=230000
		magnitude=1.014
		angle=8.5161
	}
}
Bus {
	name=bus_216
	type=PV
	voltage {
		base=230000
		magnitude=1.017
		angle=8.8918
	}
}
Bus {
	name=bus_217
	type=PQ
	voltage {
		base=230000
		magnitude=1.04037
		angle=12.6229
	}
}
Bus {
	name=bus_218
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=13.773
	}
}
Bus {
	name=bus_219
	type=PQ
	voltage {
		base=230000
		magnitude=1.02271
		angle=8.7848
	}
}
Bus {
	name=bus_220
	type=PQ
	voltage {
		base=230000
		magnitude=1.03767
		angle=10.6152
	}
}
Bus {
	name=bus_221
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=14.4362
	}
}
Bus {
	name=bus_222
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=20.2363
	}
}
Bus {
	name=bus_223
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=12.3229
	}
}
Bus {
	name=bus_224
	type=PQ
	voltage {
		base=230000
		magnitude=0.99117
		angle=2.8523
	}
}
Bus {
	name=bus_301
	type=PV
	voltage {
		base=138000
		magnitude=1.035
		angle=-1.8735
	}
}
Bus {
	name=bus_302
	type=PV
	voltage {
		base=138000
		magnitude=1.035
		angle=-1.9631
	}
}
Bus {
	name=bus_303
	type=PQ
	voltage {
		base=138000
		magnitude=0.97443
		angle=-0.4042
	}
}
Bus {
	name=bus_304
	type=PQ
	voltage {
		base=138000
		magnitude=0.99055
		angle=-4.2868
	}
}
Bus {
	name=bus_305
	type=PQ
	voltage {
		base=138000
		magnitude=1.02686
		angle=-4.5152
	}
}
Bus {
	name=bus_306
	type=PQ
	voltage {
		base=138000
		magnitude=1.07733
		angle=-7.4212
	}
}
Bus {
	name=bus_307
	type=PV
	voltage {
		base=138000
		magnitude=1.025
		angle=-1.8927
	}
}
Bus {
	name=bus_308
	type=PQ
	voltage {
		base=138000
		magnitude=0.99349
		angle=-5.6056
	}
}
Bus {
	name=bus_309
	type=PQ
	voltage {
		base=138000
		magnitude=0.9884
		angle=-1.9637
	}
}
Bus {
	name=bus_310
	type=PQ
	voltage {
		base=138000
		magnitude=1.04526
		angle=-4.0292
	}
}
Bus {
	name=bus_311
	type=PQ
	voltage {
		base=230000
		magnitude=0.99999
		angle=2.7296
	}
}
Bus {
	name=bus_312
	type=PQ
	voltage {
		base=230000
		magnitude=1.01296
		angle=4.3353
	}
}
Bus {
	name=bus_313
	type=PV
	voltage {
		base=230000
		magnitude=1.02
		angle=6.5807
	}
}
Bus {
	name=bus_314
	type=PV
	voltage {
		base=230000
		magnitude=0.98
		angle=5.2886
	}
}
Bus {
	name=bus_315
	type=PV
	voltage {
		base=230000
		magnitude=1.014
		angle=15.8459
	}
}
Bus {
	name=bus_316
	type=PV
	voltage {
		base=230000
		magnitude=1.017
		angle=15.1924
	}
}
Bus {
	name=bus_317
	type=PQ
	voltage {
		base=230000
		magnitude=1.03883
		angle=18.6489
	}
}
Bus {
	name=bus_318
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=19.4263
	}
}
Bus {
	name=bus_319
	type=PQ
	voltage {
		base=230000
		magnitude=1.02301
		angle=14.173
	}
}
Bus {
	name=bus_320
	type=PQ
	voltage {
		base=230000
		magnitude=1.03809
		angle=15.2252
	}
}
Bus {
	name=bus_321
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=20.6498
	}
}
Bus {
	name=bus_322
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=26.3767
	}
}
Bus {
	name=bus_323
	type=PV
	voltage {
		base=230000
		magnitude=1.05
		angle=16.5153
	}
}
Bus {
	name=bus_324
	type=PQ
	voltage {
		base=230000
		magnitude=0.98386
		angle=9.8353
	}
}
Bus {
	name=bus_325
	type=PQ
	voltage {
		base=230000
		magnitude=1.0506
		angle=16.6377
	}
}
ConstantPowerLoad {
	name=load_P_101_1
	bus=bus_101
	power {
		re=108
		im=22
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_102_1
	bus=bus_102
	power {
		re=97
		im=20
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_103_1
	bus=bus_103
	power {
		re=180
		im=37
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_104_1
	bus=bus_104
	power {
		re=74
		im=15
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_105_1
	bus=bus_105
	power {
		re=71
		im=14
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_106_1
	bus=bus_106
	power {
		re=136
		im=28
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_107_1
	bus=bus_107
	power {
		re=125
		im=25
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_108_1
	bus=bus_108
	power {
		re=171
		im=35
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_109_1
	bus=bus_109
	power {
		re=175
		im=36
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_110_1
	bus=bus_110
	power {
		re=195
		im=40
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_113_1
	bus=bus_113
	power {
		re=265
		im=54
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_114_1
	bus=bus_114
	power {
		re=194
		im=39
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_115_1
	bus=bus_115
	power {
		re=317
		im=64
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_116_1
	bus=bus_116
	power {
		re=100
		im=20
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_118_1
	bus=bus_118
	power {
		re=333
		im=68
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_119_1
	bus=bus_119
	power {
		re=181
		im=37
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_120_1
	bus=bus_120
	power {
		re=128
		im=26
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_201_1
	bus=bus_201
	power {
		re=108
		im=22
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_202_1
	bus=bus_202
	power {
		re=97
		im=20
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_203_1
	bus=bus_203
	power {
		re=180
		im=37
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_204_1
	bus=bus_204
	power {
		re=74
		im=15
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_205_1
	bus=bus_205
	power {
		re=71
		im=14
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_206_1
	bus=bus_206
	power {
		re=136
		im=28
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_207_1
	bus=bus_207
	power {
		re=125
		im=25
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_208_1
	bus=bus_208
	power {
		re=171
		im=35
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_209_1
	bus=bus_209
	power {
		re=175
		im=36
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_210_1
	bus=bus_210
	power {
		re=195
		im=40
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_213_1
	bus=bus_213
	power {
		re=265
		im=54
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_214_1
	bus=bus_214
	power {
		re=194
		im=39
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_215_1
	bus=bus_215
	power {
		re=317
		im=64
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_216_1
	bus=bus_216
	power {
		re=100
		im=20
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_218_1
	bus=bus_218
	power {
		re=333
		im=68
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_219_1
	bus=bus_219
	power {
		re=181
		im=37
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_220_1
	bus=bus_220
	power {
		re=128
		im=26
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_301_1
	bus=bus_301
	power {
		re=108
		im=22
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_302_1
	bus=bus_302
	power {
		re=97
		im=20
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_303_1
	bus=bus_303
	power {
		re=180
		im=37
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_304_1
	bus=bus_304
	power {
		re=74
		im=15
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_305_1
	bus=bus_305
	power {
		re=71
		im=14
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_306_1
	bus=bus_306
	power {
		re=136
		im=28
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_307_1
	bus=bus_307
	power {
		re=125
		im=25
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_308_1
	bus=bus_308
	power {
		re=171
		im=35
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_309_1
	bus=bus_309
	power {
		re=175
		im=36
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_310_1
	bus=bus_310
	power {
		re=195
		im=40
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_313_1
	bus=bus_313
	power {
		re=265
		im=54
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_314_1
	bus=bus_314
	power {
		re=194
		im=39
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_315_1
	bus=bus_315
	power {
		re=317
		im=64
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_316_1
	bus=bus_316
	power {
		re=100
		im=20
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_318_1
	bus=bus_318
	power {
		re=333
		im=68
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_319_1
	bus=bus_319
	power {
		re=181
		im=37
	}
	status=1
}
ConstantPowerLoad {
	name=load_P_320_1
	bus=bus_320
	power {
		re=128
		im=26
	}
	status=1
}
FixedShunt {
	name=fSH_106_1
	bus=bus_106
	power {
		re=0
		im=1
	}
	status=1
}
FixedShunt {
	name=fSH_206_1
	bus=bus_206
	power {
		re=0
		im=1
	}
	status=1
}
FixedShunt {
	name=fSH_306_1
	bus=bus_306
	power {
		re=0
		im=1
	}
	status=1
}
PiLine {
	name=line_101_to_102_1
	bus0=bus_101
	bus1=bus_102
	impedance {
		re=0.003
		im=0.014
	}
	charge=0.461
	status=1
}
PiLine {
	name=line_101_to_103_1
	bus0=bus_101
	bus1=bus_103
	impedance {
		re=0.055
		im=0.211
	}
	charge=0.057
	status=1
}
PiLine {
	name=line_101_to_105_1
	bus0=bus_101
	bus1=bus_105
	impedance {
		re=0.022
		im=0.085
	}
	charge=0.023
	status=1
}
PiLine {
	name=line_102_to_104_1
	bus0=bus_102
	bus1=bus_104
	impedance {
		re=0.033
		im=0.127
	}
	charge=0.034
	status=1
}
PiLine {
	name=line_102_to_106_1
	bus0=bus_102
	bus1=bus_106
	impedance {
		re=0.05
		im=0.192
	}
	charge=0.052
	status=1
}
PiLine {
	name=line_103_to_109_1
	bus0=bus_103
	bus1=bus_109
	impedance {
		re=0.031
		im=0.119
	}
	charge=0.032
	status=1
}
PiLine {
	name=line_104_to_109_1
	bus0=bus_104
	bus1=bus_109
	impedance {
		re=0.027
		im=0.104
	}
	charge=0.028
	status=1
}
PiLine {
	name=line_105_to_110_1
	bus0=bus_105
	bus1=bus_110
	impedance {
		re=0.023
		im=0.088
	}
	charge=0.024
	status=1
}
PiLine {
	name=line_106_to_110_1
	bus0=bus_106
	bus1=bus_110
	impedance {
		re=0.014
		im=0.061
	}
	charge=2.459
	status=1
}
PiLine {
	name=line_107_to_108_1
	bus0=bus_107
	bus1=bus_108
	impedance {
		re=0.016
		im=0.061
	}
	charge=0.017
	status=1
}
PiLine {
	name=line_107_to_203_1
	bus0=bus_107
	bus1=bus_203
	impedance {
		re=0.042
		im=0.161
	}
	charge=0.044
	status=1
}
PiLine {
	name=line_108_to_109_1
	bus0=bus_108
	bus1=bus_109
	impedance {
		re=0.043
		im=0.165
	}
	charge=0.045
	status=1
}
PiLine {
	name=line_108_to_110_1
	bus0=bus_108
	bus1=bus_110
	impedance {
		re=0.043
		im=0.165
	}
	charge=0.045
	status=1
}
PiLine {
	name=line_111_to_113_1
	bus0=bus_111
	bus1=bus_113
	impedance {
		re=0.006
		im=0.048
	}
	charge=0.1
	status=1
}
PiLine {
	name=line_111_to_114_1
	bus0=bus_111
	bus1=bus_114
	impedance {
		re=0.005
		im=0.042
	}
	charge=0.088
	status=1
}
PiLine {
	name=line_112_to_113_1
	bus0=bus_112
	bus1=bus_113
	impedance {
		re=0.006
		im=0.048
	}
	charge=0.1
	status=1
}
PiLine {
	name=line_112_to_123_1
	bus0=bus_112
	bus1=bus_123
	impedance {
		re=0.012
		im=0.097
	}
	charge=0.203
	status=1
}
PiLine {
	name=line_113_to_123_1
	bus0=bus_113
	bus1=bus_123
	impedance {
		re=0.011
		im=0.087
	}
	charge=0.182
	status=1
}
PiLine {
	name=line_113_to_215_1
	bus0=bus_113
	bus1=bus_215
	impedance {
		re=0.01
		im=0.075
	}
	charge=0.158
	status=1
}
PiLine {
	name=line_114_to_116_1
	bus0=bus_114
	bus1=bus_116
	impedance {
		re=0.005
		im=0.059
	}
	charge=0.082
	status=1
}
PiLine {
	name=line_115_to_116_1
	bus0=bus_115
	bus1=bus_116
	impedance {
		re=0.002
		im=0.017
	}
	charge=0.036
	status=1
}
PiLine {
	name=line_115_to_121_1
	bus0=bus_115
	bus1=bus_121
	impedance {
		re=0.006
		im=0.049
	}
	charge=0.103
	status=1
}
PiLine {
	name=line_115_to_121_2
	bus0=bus_115
	bus1=bus_121
	impedance {
		re=0.006
		im=0.049
	}
	charge=0.103
	status=1
}
PiLine {
	name=line_115_to_124_1
	bus0=bus_115
	bus1=bus_124
	impedance {
		re=0.007
		im=0.052
	}
	charge=0.109
	status=1
}
PiLine {
	name=line_116_to_117_1
	bus0=bus_116
	bus1=bus_117
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_116_to_119_1
	bus0=bus_116
	bus1=bus_119
	impedance {
		re=0.003
		im=0.023
	}
	charge=0.049
	status=1
}
PiLine {
	name=line_117_to_118_1
	bus0=bus_117
	bus1=bus_118
	impedance {
		re=0.002
		im=0.014
	}
	charge=0.03
	status=1
}
PiLine {
	name=line_117_to_122_1
	bus0=bus_117
	bus1=bus_122
	impedance {
		re=0.014
		im=0.105
	}
	charge=0.221
	status=1
}
PiLine {
	name=line_118_to_121_1
	bus0=bus_118
	bus1=bus_121
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_118_to_121_2
	bus0=bus_118
	bus1=bus_121
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_119_to_120_1
	bus0=bus_119
	bus1=bus_120
	impedance {
		re=0.005
		im=0.04
	}
	charge=0.083
	status=1
}
PiLine {
	name=line_119_to_120_2
	bus0=bus_119
	bus1=bus_120
	impedance {
		re=0.005
		im=0.04
	}
	charge=0.083
	status=1
}
PiLine {
	name=line_120_to_123_1
	bus0=bus_120
	bus1=bus_123
	impedance {
		re=0.003
		im=0.022
	}
	charge=0.046
	status=1
}
PiLine {
	name=line_120_to_123_2
	bus0=bus_120
	bus1=bus_123
	impedance {
		re=0.003
		im=0.022
	}
	charge=0.046
	status=1
}
PiLine {
	name=line_121_to_122_1
	bus0=bus_121
	bus1=bus_122
	impedance {
		re=0.009
		im=0.068
	}
	charge=0.142
	status=1
}
PiLine {
	name=line_121_to_325_1
	bus0=bus_121
	bus1=bus_325
	impedance {
		re=0.012
		im=0.097
	}
	charge=0.203
	status=1
}
PiLine {
	name=line_123_to_217_1
	bus0=bus_123
	bus1=bus_217
	impedance {
		re=0.01
		im=0.074
	}
	charge=0.155
	status=1
}
PiLine {
	name=line_201_to_202_1
	bus0=bus_201
	bus1=bus_202
	impedance {
		re=0.003
		im=0.014
	}
	charge=0.461
	status=1
}
PiLine {
	name=line_201_to_203_1
	bus0=bus_201
	bus1=bus_203
	impedance {
		re=0.055
		im=0.211
	}
	charge=0.057
	status=1
}
PiLine {
	name=line_201_to_205_1
	bus0=bus_201
	bus1=bus_205
	impedance {
		re=0.022
		im=0.085
	}
	charge=0.023
	status=1
}
PiLine {
	name=line_202_to_204_1
	bus0=bus_202
	bus1=bus_204
	impedance {
		re=0.033
		im=0.127
	}
	charge=0.034
	status=1
}
PiLine {
	name=line_202_to_206_1
	bus0=bus_202
	bus1=bus_206
	impedance {
		re=0.05
		im=0.192
	}
	charge=0.052
	status=1
}
PiLine {
	name=line_203_to_209_1
	bus0=bus_203
	bus1=bus_209
	impedance {
		re=0.031
		im=0.119
	}
	charge=0.032
	status=1
}
PiLine {
	name=line_204_to_209_1
	bus0=bus_204
	bus1=bus_209
	impedance {
		re=0.027
		im=0.104
	}
	charge=0.028
	status=1
}
PiLine {
	name=line_205_to_210_1
	bus0=bus_205
	bus1=bus_210
	impedance {
		re=0.023
		im=0.088
	}
	charge=0.024
	status=1
}
PiLine {
	name=line_206_to_210_1
	bus0=bus_206
	bus1=bus_210
	impedance {
		re=0.014
		im=0.061
	}
	charge=2.459
	status=1
}
PiLine {
	name=line_207_to_208_1
	bus0=bus_207
	bus1=bus_208
	impedance {
		re=0.016
		im=0.061
	}
	charge=0.017
	status=1
}
PiLine {
	name=line_208_to_209_1
	bus0=bus_208
	bus1=bus_209
	impedance {
		re=0.043
		im=0.165
	}
	charge=0.045
	status=1
}
PiLine {
	name=line_208_to_210_1
	bus0=bus_208
	bus1=bus_210
	impedance {
		re=0.043
		im=0.165
	}
	charge=0.045
	status=1
}
PiLine {
	name=line_211_to_213_1
	bus0=bus_211
	bus1=bus_213
	impedance {
		re=0.006
		im=0.048
	}
	charge=0.1
	status=1
}
PiLine {
	name=line_211_to_214_1
	bus0=bus_211
	bus1=bus_214
	impedance {
		re=0.005
		im=0.042
	}
	charge=0.088
	status=1
}
PiLine {
	name=line_212_to_213_1
	bus0=bus_212
	bus1=bus_213
	impedance {
		re=0.006
		im=0.048
	}
	charge=0.1
	status=1
}
PiLine {
	name=line_212_to_223_1
	bus0=bus_212
	bus1=bus_223
	impedance {
		re=0.012
		im=0.097
	}
	charge=0.203
	status=1
}
PiLine {
	name=line_213_to_223_1
	bus0=bus_213
	bus1=bus_223
	impedance {
		re=0.011
		im=0.087
	}
	charge=0.182
	status=1
}
PiLine {
	name=line_214_to_216_1
	bus0=bus_214
	bus1=bus_216
	impedance {
		re=0.005
		im=0.059
	}
	charge=0.082
	status=1
}
PiLine {
	name=line_215_to_216_1
	bus0=bus_215
	bus1=bus_216
	impedance {
		re=0.002
		im=0.017
	}
	charge=0.036
	status=1
}
PiLine {
	name=line_215_to_221_1
	bus0=bus_215
	bus1=bus_221
	impedance {
		re=0.006
		im=0.049
	}
	charge=0.103
	status=1
}
PiLine {
	name=line_215_to_221_2
	bus0=bus_215
	bus1=bus_221
	impedance {
		re=0.006
		im=0.049
	}
	charge=0.103
	status=1
}
PiLine {
	name=line_215_to_224_1
	bus0=bus_215
	bus1=bus_224
	impedance {
		re=0.007
		im=0.052
	}
	charge=0.109
	status=1
}
PiLine {
	name=line_216_to_217_1
	bus0=bus_216
	bus1=bus_217
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_216_to_219_1
	bus0=bus_216
	bus1=bus_219
	impedance {
		re=0.003
		im=0.023
	}
	charge=0.049
	status=1
}
PiLine {
	name=line_217_to_218_1
	bus0=bus_217
	bus1=bus_218
	impedance {
		re=0.002
		im=0.014
	}
	charge=0.03
	status=1
}
PiLine {
	name=line_217_to_222_1
	bus0=bus_217
	bus1=bus_222
	impedance {
		re=0.014
		im=0.105
	}
	charge=0.221
	status=1
}
PiLine {
	name=line_218_to_221_1
	bus0=bus_218
	bus1=bus_221
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_218_to_221_2
	bus0=bus_218
	bus1=bus_221
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_219_to_220_1
	bus0=bus_219
	bus1=bus_220
	impedance {
		re=0.005
		im=0.04
	}
	charge=0.083
	status=1
}
PiLine {
	name=line_219_to_220_2
	bus0=bus_219
	bus1=bus_220
	impedance {
		re=0.005
		im=0.04
	}
	charge=0.083
	status=1
}
PiLine {
	name=line_220_to_223_1
	bus0=bus_220
	bus1=bus_223
	impedance {
		re=0.003
		im=0.022
	}
	charge=0.046
	status=1
}
PiLine {
	name=line_220_to_223_2
	bus0=bus_220
	bus1=bus_223
	impedance {
		re=0.003
		im=0.022
	}
	charge=0.046
	status=1
}
PiLine {
	name=line_221_to_222_1
	bus0=bus_221
	bus1=bus_222
	impedance {
		re=0.009
		im=0.068
	}
	charge=0.142
	status=1
}
PiLine {
	name=line_223_to_318_1
	bus0=bus_223
	bus1=bus_318
	impedance {
		re=0.013
		im=0.104
	}
	charge=0.218
	status=1
}
PiLine {
	name=line_301_to_302_1
	bus0=bus_301
	bus1=bus_302
	impedance {
		re=0.003
		im=0.014
	}
	charge=0.461
	status=1
}
PiLine {
	name=line_301_to_303_1
	bus0=bus_301
	bus1=bus_303
	impedance {
		re=0.055
		im=0.211
	}
	charge=0.057
	status=1
}
PiLine {
	name=line_301_to_305_1
	bus0=bus_301
	bus1=bus_305
	impedance {
		re=0.022
		im=0.085
	}
	charge=0.023
	status=1
}
PiLine {
	name=line_302_to_304_1
	bus0=bus_302
	bus1=bus_304
	impedance {
		re=0.033
		im=0.127
	}
	charge=0.034
	status=1
}
PiLine {
	name=line_302_to_306_1
	bus0=bus_302
	bus1=bus_306
	impedance {
		re=0.05
		im=0.192
	}
	charge=0.052
	status=1
}
PiLine {
	name=line_303_to_309_1
	bus0=bus_303
	bus1=bus_309
	impedance {
		re=0.031
		im=0.119
	}
	charge=0.032
	status=1
}
PiLine {
	name=line_304_to_309_1
	bus0=bus_304
	bus1=bus_309
	impedance {
		re=0.027
		im=0.104
	}
	charge=0.028
	status=1
}
PiLine {
	name=line_305_to_310_1
	bus0=bus_305
	bus1=bus_310
	impedance {
		re=0.023
		im=0.088
	}
	charge=0.024
	status=1
}
PiLine {
	name=line_306_to_310_1
	bus0=bus_306
	bus1=bus_310
	impedance {
		re=0.014
		im=0.061
	}
	charge=2.459
	status=1
}
PiLine {
	name=line_307_to_308_1
	bus0=bus_307
	bus1=bus_308
	impedance {
		re=0.016
		im=0.061
	}
	charge=0.017
	status=1
}
PiLine {
	name=line_308_to_309_1
	bus0=bus_308
	bus1=bus_309
	impedance {
		re=0.043
		im=0.165
	}
	charge=0.045
	status=1
}
PiLine {
	name=line_308_to_310_1
	bus0=bus_308
	bus1=bus_310
	impedance {
		re=0.043
		im=0.165
	}
	charge=0.045
	status=1
}
PiLine {
	name=line_311_to_313_1
	bus0=bus_311
	bus1=bus_313
	impedance {
		re=0.006
		im=0.048
	}
	charge=0.1
	status=1
}
PiLine {
	name=line_311_to_314_1
	bus0=bus_311
	bus1=bus_314
	impedance {
		re=0.005
		im=0.042
	}
	charge=0.088
	status=1
}
PiLine {
	name=line_312_to_313_1
	bus0=bus_312
	bus1=bus_313
	impedance {
		re=0.006
		im=0.048
	}
	charge=0.1
	status=1
}
PiLine {
	name=line_312_to_323_1
	bus0=bus_312
	bus1=bus_323
	impedance {
		re=0.012
		im=0.097
	}
	charge=0.203
	status=1
}
PiLine {
	name=line_313_to_323_1
	bus0=bus_313
	bus1=bus_323
	impedance {
		re=0.011
		im=0.087
	}
	charge=0.182
	status=1
}
PiLine {
	name=line_314_to_316_1
	bus0=bus_314
	bus1=bus_316
	impedance {
		re=0.005
		im=0.059
	}
	charge=0.082
	status=1
}
PiLine {
	name=line_315_to_316_1
	bus0=bus_315
	bus1=bus_316
	impedance {
		re=0.002
		im=0.017
	}
	charge=0.036
	status=1
}
PiLine {
	name=line_315_to_321_1
	bus0=bus_315
	bus1=bus_321
	impedance {
		re=0.006
		im=0.049
	}
	charge=0.103
	status=1
}
PiLine {
	name=line_315_to_321_2
	bus0=bus_315
	bus1=bus_321
	impedance {
		re=0.006
		im=0.049
	}
	charge=0.103
	status=1
}
PiLine {
	name=line_315_to_324_1
	bus0=bus_315
	bus1=bus_324
	impedance {
		re=0.007
		im=0.052
	}
	charge=0.109
	status=1
}
PiLine {
	name=line_316_to_317_1
	bus0=bus_316
	bus1=bus_317
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_316_to_319_1
	bus0=bus_316
	bus1=bus_319
	impedance {
		re=0.003
		im=0.023
	}
	charge=0.049
	status=1
}
PiLine {
	name=line_317_to_318_1
	bus0=bus_317
	bus1=bus_318
	impedance {
		re=0.002
		im=0.014
	}
	charge=0.03
	status=1
}
PiLine {
	name=line_317_to_322_1
	bus0=bus_317
	bus1=bus_322
	impedance {
		re=0.014
		im=0.105
	}
	charge=0.221
	status=1
}
PiLine {
	name=line_318_to_321_1
	bus0=bus_318
	bus1=bus_321
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_318_to_321_2
	bus0=bus_318
	bus1=bus_321
	impedance {
		re=0.003
		im=0.026
	}
	charge=0.055
	status=1
}
PiLine {
	name=line_319_to_320_1
	bus0=bus_319
	bus1=bus_320
	impedance {
		re=0.005
		im=0.04
	}
	charge=0.083
	status=1
}
PiLine {
	name=line_319_to_320_2
	bus0=bus_319
	bus1=bus_320
	impedance {
		re=0.005
		im=0.04
	}
	charge=0.083
	status=1
}
PiLine {
	name=line_320_to_323_1
	bus0=bus_320
	bus1=bus_323
	impedance {
		re=0.003
		im=0.022
	}
	charge=0.046
	status=1
}
PiLine {
	name=line_320_to_323_2
	bus0=bus_320
	bus1=bus_323
	impedance {
		re=0.003
		im=0.022
	}
	charge=0.046
	status=1
}
PiLine {
	name=line_321_to_322_1
	bus0=bus_321
	bus1=bus_322
	impedance {
		re=0.009
		im=0.068
	}
	charge=0.142
	status=1
}
OLTCTransformer {
	status=1
	name=xf_103_to_124_1
	bus0=bus_103
	bus1=bus_124
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_109_to_111_1
	bus0=bus_109
	bus1=bus_111
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_109_to_112_1
	bus0=bus_109
	bus1=bus_112
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_110_to_111_1
	bus0=bus_110
	bus1=bus_111
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_110_to_112_1
	bus0=bus_110
	bus1=bus_112
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_203_to_224_1
	bus0=bus_203
	bus1=bus_224
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_209_to_211_1
	bus0=bus_209
	bus1=bus_211
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_209_to_212_1
	bus0=bus_209
	bus1=bus_212
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_210_to_211_1
	bus0=bus_210
	bus1=bus_211
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_210_to_212_1
	bus0=bus_210
	bus1=bus_212
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_303_to_324_1
	bus0=bus_303
	bus1=bus_324
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_309_to_311_1
	bus0=bus_309
	bus1=bus_311
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_309_to_312_1
	bus0=bus_309
	bus1=bus_312
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_310_to_311_1
	bus0=bus_310
	bus1=bus_311
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_310_to_312_1
	bus0=bus_310
	bus1=bus_312
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0.002
		im=0.084
	}
	phaseW1=0
}
OLTCTransformer {
	status=1
	name=xf_323_to_325_1
	bus0=bus_323
	bus1=bus_325
	rW1=1
	rW2=1
	magnetization {
		re=0
		im=0
	}
	impedance {
		re=0
		im=0.009
	}
	phaseW1=0
}
SynchronousGenQuadSat {
	name=gen_101_1
	bus=bus_101
	status=1
	power=10 1.135
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_101_2
	bus=bus_101
	status=1
	power=10 1.135
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_101_3
	bus=bus_101
	status=1
	power=76 8.629
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_101_4
	bus=bus_101
	status=1
	power=76 8.629
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_102_1
	bus=bus_102
	status=1
	power=10 0
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_102_2
	bus=bus_102
	status=1
	power=10 0
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_102_3
	bus=bus_102
	status=1
	power=76 -6.005
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_102_4
	bus=bus_102
	status=1
	power=76 -6.005
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_107_1
	bus=bus_107
	status=1
	power=80 23.818
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_107_2
	bus=bus_107
	status=1
	power=80 23.818
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_107_3
	bus=bus_107
	status=1
	power=80 23.818
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_113_1
	bus=bus_113
	status=1
	power=-3.653 45.522
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_113_2
	bus=bus_113
	status=1
	power=-3.653 45.522
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_113_3
	bus=bus_113
	status=1
	power=-3.653 45.522
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_114_1
	bus=bus_114
	status=1
	power=0 -29.489
	reactivePowerLimits=-50 200
	base=100
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_115_1
	bus=bus_115
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_115_2
	bus=bus_115
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_115_3
	bus=bus_115
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_115_4
	bus=bus_115
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_115_5
	bus=bus_115
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_115_6
	bus=bus_115
	status=1
	power=155 -14.108
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_116_1
	bus=bus_116
	status=1
	power=155 28.378
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_118_1
	bus=bus_118
	status=1
	power=400 138.094
	reactivePowerLimits=-50 200
	base=471
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_121_1
	bus=bus_121
	status=1
	power=400 98.864
	reactivePowerLimits=-50 200
	base=471
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_122_1
	bus=bus_122
	status=1
	power=50 -5.104
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_122_2
	bus=bus_122
	status=1
	power=50 -5.104
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_122_3
	bus=bus_122
	status=1
	power=50 -5.104
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_122_4
	bus=bus_122
	status=1
	power=50 -5.104
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_122_5
	bus=bus_122
	status=1
	power=50 -5.104
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_122_6
	bus=bus_122
	status=1
	power=50 -5.104
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_123_1
	bus=bus_123
	status=1
	power=155 32.377
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_123_2
	bus=bus_123
	status=1
	power=155 32.377
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_123_3
	bus=bus_123
	status=1
	power=350 73.109
	reactivePowerLimits=-25 150
	base=412
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_201_1
	bus=bus_201
	status=1
	power=10 0.601
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_201_2
	bus=bus_201
	status=1
	power=10 0.601
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_201_3
	bus=bus_201
	status=1
	power=76 4.565
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_201_4
	bus=bus_201
	status=1
	power=76 4.565
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_202_1
	bus=bus_202
	status=1
	power=10 0
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_202_2
	bus=bus_202
	status=1
	power=10 0
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_202_3
	bus=bus_202
	status=1
	power=76 -7.219
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_202_4
	bus=bus_202
	status=1
	power=76 -7.219
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_207_1
	bus=bus_207
	status=1
	power=80 16.333
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_207_2
	bus=bus_207
	status=1
	power=80 16.333
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_207_3
	bus=bus_207
	status=1
	power=80 16.333
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_213_1
	bus=bus_213
	status=1
	power=95.1 27.481
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_213_2
	bus=bus_213
	status=1
	power=95.1 27.481
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_213_3
	bus=bus_213
	status=1
	power=95.1 27.481
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_214_1
	bus=bus_214
	status=1
	power=0 -41.084
	reactivePowerLimits=-50 200
	base=100
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_215_1
	bus=bus_215
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_215_2
	bus=bus_215
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_215_3
	bus=bus_215
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_215_4
	bus=bus_215
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_215_5
	bus=bus_215
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_215_6
	bus=bus_215
	status=1
	power=155 -36.967
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_216_1
	bus=bus_216
	status=1
	power=155 6.77
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_218_1
	bus=bus_218
	status=1
	power=400 122.397
	reactivePowerLimits=-50 200
	base=471
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_221_1
	bus=bus_221
	status=1
	power=400 114.373
	reactivePowerLimits=-50 200
	base=471
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_222_1
	bus=bus_222
	status=1
	power=50 -5.459
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_222_2
	bus=bus_222
	status=1
	power=50 -5.459
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_222_3
	bus=bus_222
	status=1
	power=50 -5.459
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_222_4
	bus=bus_222
	status=1
	power=50 -5.459
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_222_5
	bus=bus_222
	status=1
	power=50 -5.459
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_222_6
	bus=bus_222
	status=1
	power=50 -5.459
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_223_1
	bus=bus_223
	status=1
	power=155 30.952
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_223_2
	bus=bus_223
	status=1
	power=155 30.952
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_223_3
	bus=bus_223
	status=1
	power=350 69.893
	reactivePowerLimits=-25 150
	base=412
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_301_1
	bus=bus_301
	status=1
	power=10 1.052
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_301_2
	bus=bus_301
	status=1
	power=10 1.052
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_301_3
	bus=bus_301
	status=1
	power=76 7.996
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_301_4
	bus=bus_301
	status=1
	power=76 7.996
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_302_1
	bus=bus_302
	status=1
	power=10 0
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_302_2
	bus=bus_302
	status=1
	power=10 0
	reactivePowerLimits=0 10
	base=24
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_302_3
	bus=bus_302
	status=1
	power=76 -6.314
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_302_4
	bus=bus_302
	status=1
	power=76 -6.314
	reactivePowerLimits=-25 30
	base=89
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_307_1
	bus=bus_307
	status=1
	power=80 16.796
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_307_2
	bus=bus_307
	status=1
	power=80 16.796
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_307_3
	bus=bus_307
	status=1
	power=80 16.796
	reactivePowerLimits=0 60
	base=118
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_313_1
	bus=bus_313
	status=1
	power=95.104 26.377
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_313_2
	bus=bus_313
	status=1
	power=95.104 26.377
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_313_3
	bus=bus_313
	status=1
	power=95.104 26.377
	reactivePowerLimits=0 80
	base=232
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_314_1
	bus=bus_314
	status=1
	power=0 -36.657
	reactivePowerLimits=-50 200
	base=100
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_315_1
	bus=bus_315
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_315_2
	bus=bus_315
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_315_3
	bus=bus_315
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_315_4
	bus=bus_315
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_315_5
	bus=bus_315
	status=1
	power=12 0
	reactivePowerLimits=0 6
	base=12
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_315_6
	bus=bus_315
	status=1
	power=155 -25.65
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_316_1
	bus=bus_316
	status=1
	power=155 13.674
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_318_1
	bus=bus_318
	status=1
	power=400 130.644
	reactivePowerLimits=-50 200
	base=471
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_321_1
	bus=bus_321
	status=1
	power=400 108.179
	reactivePowerLimits=-50 200
	base=471
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_322_1
	bus=bus_322
	status=1
	power=50 -5.193
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_322_2
	bus=bus_322
	status=1
	power=50 -5.193
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_322_3
	bus=bus_322
	status=1
	power=50 -5.193
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_322_4
	bus=bus_322
	status=1
	power=50 -5.193
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_322_5
	bus=bus_322
	status=1
	power=50 -5.193
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_322_6
	bus=bus_322
	status=1
	power=50 -5.193
	reactivePowerLimits=-10 16
	base=53
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_323_1
	bus=bus_323
	status=1
	power=155 26.77
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_323_2
	bus=bus_323
	status=1
	power=155 26.77
	reactivePowerLimits=-50 80
	base=182
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
SynchronousGenQuadSat {
	name=gen_323_3
	bus=bus_323
	status=1
	power=350 60.449
	reactivePowerLimits=-25 150
	base=412
	resistance=0
	reactance=1.8 1.75 0.6 1.7 0.25
	inertia=49
	damping=0
	leakage=0.15
	openCircuit=6.5 0.65 0.06 0.2
	satFactors=0.09 0.38
}
ExciterIEEEST1 {
	name=ex_101_1
	machine=gen_101_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_101_2
	machine=gen_101_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_101_3
	machine=gen_101_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_101_4
	machine=gen_101_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_102_1
	machine=gen_102_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_102_2
	machine=gen_102_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_102_3
	machine=gen_102_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_102_4
	machine=gen_102_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_107_1
	machine=gen_107_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_107_2
	machine=gen_107_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_107_3
	machine=gen_107_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_113_1
	machine=gen_113_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_113_2
	machine=gen_113_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_113_3
	machine=gen_113_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_114_1
	machine=gen_114_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_115_1
	machine=gen_115_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_115_2
	machine=gen_115_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_115_3
	machine=gen_115_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_115_4
	machine=gen_115_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_115_5
	machine=gen_115_5
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_115_6
	machine=gen_115_6
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_116_1
	machine=gen_116_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_118_1
	machine=gen_118_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_121_1
	machine=gen_121_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_122_1
	machine=gen_122_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_122_2
	machine=gen_122_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_122_3
	machine=gen_122_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_122_4
	machine=gen_122_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_122_5
	machine=gen_122_5
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_122_6
	machine=gen_122_6
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_123_1
	machine=gen_123_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_123_2
	machine=gen_123_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_123_3
	machine=gen_123_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_201_1
	machine=gen_201_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_201_2
	machine=gen_201_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_201_3
	machine=gen_201_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_201_4
	machine=gen_201_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_202_1
	machine=gen_202_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_202_2
	machine=gen_202_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_202_3
	machine=gen_202_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_202_4
	machine=gen_202_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_207_1
	machine=gen_207_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_207_2
	machine=gen_207_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_207_3
	machine=gen_207_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_213_1
	machine=gen_213_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_213_2
	machine=gen_213_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_213_3
	machine=gen_213_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_214_1
	machine=gen_214_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_215_1
	machine=gen_215_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_215_2
	machine=gen_215_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_215_3
	machine=gen_215_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_215_4
	machine=gen_215_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_215_5
	machine=gen_215_5
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_215_6
	machine=gen_215_6
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_216_1
	machine=gen_216_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_218_1
	machine=gen_218_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_221_1
	machine=gen_221_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_222_1
	machine=gen_222_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_222_2
	machine=gen_222_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_222_3
	machine=gen_222_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_222_4
	machine=gen_222_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_222_5
	machine=gen_222_5
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_222_6
	machine=gen_222_6
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_223_1
	machine=gen_223_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_223_2
	machine=gen_223_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_223_3
	machine=gen_223_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_301_1
	machine=gen_301_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_301_2
	machine=gen_301_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_301_3
	machine=gen_301_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_301_4
	machine=gen_301_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_302_1
	machine=gen_302_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_302_2
	machine=gen_302_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_302_3
	machine=gen_302_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_302_4
	machine=gen_302_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_307_1
	machine=gen_307_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_307_2
	machine=gen_307_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_307_3
	machine=gen_307_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_313_1
	machine=gen_313_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_313_2
	machine=gen_313_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_313_3
	machine=gen_313_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_314_1
	machine=gen_314_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_315_1
	machine=gen_315_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_315_2
	machine=gen_315_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_315_3
	machine=gen_315_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_315_4
	machine=gen_315_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_315_5
	machine=gen_315_5
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_315_6
	machine=gen_315_6
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_316_1
	machine=gen_316_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_318_1
	machine=gen_318_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_321_1
	machine=gen_321_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_322_1
	machine=gen_322_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_322_2
	machine=gen_322_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_322_3
	machine=gen_322_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_322_4
	machine=gen_322_4
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_322_5
	machine=gen_322_5
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_322_6
	machine=gen_322_6
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_323_1
	machine=gen_323_1
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_323_2
	machine=gen_323_2
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
ExciterIEEEST1 {
	name=ex_323_3
	machine=gen_323_3
	tr=0.02
	vimax=0.2
	vimin=0
	tc=1
	tb=1
	ka=80
	ta=0.05
	vrmax=8
	vrmin=-3
	kc=0.2
	kf=0.1
	tf=1
}
TurbineGovernorTGOV1 {
	name=tg_101_2
	machine=gen_101_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_101_3
	machine=gen_101_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_101_4
	machine=gen_101_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_102_1
	machine=gen_102_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_102_2
	machine=gen_102_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_102_3
	machine=gen_102_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_102_4
	machine=gen_102_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_107_1
	machine=gen_107_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_107_2
	machine=gen_107_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_107_3
	machine=gen_107_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_113_1
	machine=gen_113_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_113_2
	machine=gen_113_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_113_3
	machine=gen_113_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_114_1
	machine=gen_114_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_115_1
	machine=gen_115_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_115_2
	machine=gen_115_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_115_3
	machine=gen_115_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_115_4
	machine=gen_115_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_115_5
	machine=gen_115_5
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_115_6
	machine=gen_115_6
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_116_1
	machine=gen_116_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_118_1
	machine=gen_118_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_121_1
	machine=gen_121_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_122_1
	machine=gen_122_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_122_2
	machine=gen_122_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_122_3
	machine=gen_122_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_122_4
	machine=gen_122_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_122_5
	machine=gen_122_5
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_122_6
	machine=gen_122_6
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_123_1
	machine=gen_123_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_123_2
	machine=gen_123_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_123_3
	machine=gen_123_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_201_1
	machine=gen_201_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_201_2
	machine=gen_201_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_201_3
	machine=gen_201_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_201_4
	machine=gen_201_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_202_1
	machine=gen_202_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_202_2
	machine=gen_202_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_202_3
	machine=gen_202_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_202_4
	machine=gen_202_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_207_1
	machine=gen_207_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_207_2
	machine=gen_207_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_207_3
	machine=gen_207_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_213_1
	machine=gen_213_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_213_2
	machine=gen_213_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_213_3
	machine=gen_213_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_214_1
	machine=gen_214_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_215_1
	machine=gen_215_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_215_2
	machine=gen_215_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_215_3
	machine=gen_215_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_215_4
	machine=gen_215_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_215_5
	machine=gen_215_5
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_215_6
	machine=gen_215_6
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_216_1
	machine=gen_216_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_218_1
	machine=gen_218_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_221_1
	machine=gen_221_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_222_1
	machine=gen_222_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_222_2
	machine=gen_222_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_222_3
	machine=gen_222_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_222_4
	machine=gen_222_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_222_5
	machine=gen_222_5
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_222_6
	machine=gen_222_6
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_223_1
	machine=gen_223_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_223_2
	machine=gen_223_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_223_3
	machine=gen_223_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_301_1
	machine=gen_301_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_301_2
	machine=gen_301_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_301_3
	machine=gen_301_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_301_4
	machine=gen_301_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_302_1
	machine=gen_302_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_302_2
	machine=gen_302_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_302_3
	machine=gen_302_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_302_4
	machine=gen_302_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_307_1
	machine=gen_307_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_307_2
	machine=gen_307_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_307_3
	machine=gen_307_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_313_1
	machine=gen_313_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_313_2
	machine=gen_313_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_313_3
	machine=gen_313_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_314_1
	machine=gen_314_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_315_1
	machine=gen_315_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_315_2
	machine=gen_315_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_315_3
	machine=gen_315_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_315_4
	machine=gen_315_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_315_5
	machine=gen_315_5
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_315_6
	machine=gen_315_6
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_316_1
	machine=gen_316_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_318_1
	machine=gen_318_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_321_1
	machine=gen_321_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_322_1
	machine=gen_322_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_322_2
	machine=gen_322_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_322_3
	machine=gen_322_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_322_4
	machine=gen_322_4
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_322_5
	machine=gen_322_5
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_322_6
	machine=gen_322_6
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_323_1
	machine=gen_323_1
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_323_2
	machine=gen_323_2
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
TurbineGovernorTGOV1 {
	name=tg_323_3
	machine=gen_323_3
	droop=0.001
	T1=0.1
	limits=0 5
	T2=1
	T3=5
	damping=0.1
}
