static const uint8_t fs_debugdraw_fill_texture_glsl[253] = {
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x73, 0x5f,
	0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xdd, 0x00,
	0x00, 0x00, 0x76, // Color..........v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20,
	0x76, 0x65, 0x63, // arying highp vec
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76,
	0x61, 0x72, 0x79, // 4 v_color0;.vary
	0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63,
	0x32, 0x20, 0x76, // ing highp vec2 v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75,
	0x6e, 0x69, 0x66, // _texcoord0;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44,
	0x20, 0x73, 0x5f, // orm sampler2D s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x76, 0x6f, 0x69,
	0x64, 0x20, 0x6d, // texColor;.void m
	0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f,
	0x77, 0x70, 0x20, // ain ().{.  lowp
	0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31,
	0x3b, 0x0a, 0x20, // vec4 tmpvar_1;.
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74,
	0x65, 0x78, 0x74, //  tmpvar_1 = text
	0x75, 0x72, 0x65, 0x32, 0x44, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43,
	0x6f, 0x6c, 0x6f, // ure2D (s_texColo
	0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64,
	0x30, 0x29, 0x3b, // r, v_texcoord0);
	0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c,
	0x6f, 0x72, 0x20, // .  gl_FragColor
	0x3d, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a,
	0x20, 0x76, 0x5f,															  // = (tmpvar_1 * v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // color0);.}...
};
static const uint8_t fs_debugdraw_fill_texture_spv[3375] = {
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1,
	0x00, 0x00, 0x20, 0x0d, 0x00, 0x00, 0x03, 0x02, // FSH....... .....
	0x23, 0x07, 0x00, 0x00, 0x01, 0x00, 0x01, 0x00,
	0x08, 0x00, 0x6f, 0x62, 0x00, 0x00, 0x00, 0x00, // #.........ob....
	0x00, 0x00, 0x11, 0x00, 0x02, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, // ................
	0x00, 0x00, 0x47, 0x4c, 0x53, 0x4c, 0x2e, 0x73,
	0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, // ..GLSL.std.450..
	0x00, 0x00, 0x0e, 0x00, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, // ................
	0x08, 0x00, 0x04, 0x00, 0x00, 0x00, 0x1f, 0x16,
	0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, // ..........main..
	0x00, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x74, 0x14,
	0x00, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x10, 0x00, // ..w...t.........
	0x03, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, // ................
	0x00, 0x00, 0xf4, 0x01, 0x00, 0x00, 0x05, 0x00,
	0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, // ..............ma
	0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00,
	0x0e, 0x00, 0x99, 0x0f, 0x00, 0x00, 0x62, 0x67, // in............bg
	0x66, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72,
	0x65, 0x32, 0x44, 0x28, 0x73, 0x74, 0x72, 0x75, // fxTexture2D(stru
	0x63, 0x74, 0x2d, 0x42, 0x67, 0x66, 0x78, 0x53,
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, // ct-BgfxSampler2D
	0x2d, 0x70, 0x31, 0x2d, 0x74, 0x32, 0x31, 0x31,
	0x3b, 0x76, 0x66, 0x32, 0x3b, 0x00, 0x05, 0x00, // -p1-t211;vf2;...
	0x05, 0x00, 0xe2, 0x2e, 0x00, 0x00, 0x6d, 0x5f,
	0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, // ......m_sampler.
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x2f, 0x42,
	0x00, 0x00, 0x6d, 0x5f, 0x74, 0x65, 0x78, 0x74, // ....../B..m_text
	0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00,
	0x04, 0x00, 0xe7, 0x15, 0x00, 0x00, 0x5f, 0x63, // ure..........._c
	0x6f, 0x6f, 0x72, 0x64, 0x00, 0x00, 0x05, 0x00,
	0x06, 0x00, 0x35, 0x13, 0x00, 0x00, 0x76, 0x65, // oord......5...ve
	0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, 0x74,
	0x28, 0x66, 0x31, 0x3b, 0x00, 0x00, 0x05, 0x00, // c4_splat(f1;....
	0x03, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x5f, 0x78,
	0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x16, 0x0e, // ......_x........
	0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, 0x28,
	0x76, 0x66, 0x34, 0x3b, 0x76, 0x66, 0x32, 0x3b, // ..@main(vf4;vf2;
	0x76, 0x66, 0x34, 0x3b, 0x00, 0x00, 0x05, 0x00,
	0x05, 0x00, 0x6e, 0x62, 0x00, 0x00, 0x76, 0x5f, // vf4;......nb..v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x8f, 0x41, // color0.........A
	0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63,
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, // ..v_texcoord0...
	0x06, 0x00, 0x8c, 0x4a, 0x00, 0x00, 0x67, 0x6c,
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, // ...J..gl_FragDat
	0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00,
	0x06, 0x00, 0x61, 0x09, 0x00, 0x00, 0x42, 0x67, // a_0_......a...Bg
	0x66, 0x78, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65,
	0x72, 0x32, 0x44, 0x00, 0x00, 0x00, 0x06, 0x00, // fxSampler2D.....
	0x06, 0x00, 0x61, 0x09, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x6d, 0x5f, 0x73, 0x61, 0x6d, 0x70, // ..a.......m_samp
	0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x06, 0x00, 0x61, 0x09, 0x00, 0x00, 0x01, 0x00, // ler.......a.....
	0x00, 0x00, 0x6d, 0x5f, 0x74, 0x65, 0x78, 0x74,
	0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, // ..m_texture.....
	0x05, 0x00, 0x08, 0x10, 0x00, 0x00, 0x66, 0x6c,
	0x61, 0x74, 0x74, 0x65, 0x6e, 0x54, 0x65, 0x6d, // ......flattenTem
	0x70, 0x00, 0x05, 0x00, 0x07, 0x00, 0xb2, 0x0c,
	0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // p.........s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70,
	0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, // olorSampler.....
	0x07, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x73, 0x5f,
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // ......s_texColor
	0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x67, 0x12, // Texture.......g.
	0x00, 0x00, 0x6d, 0x5f, 0x73, 0x61, 0x6d, 0x70,
	0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x05, 0x00, // ..m_sampler.....
	0x05, 0x00, 0xa3, 0x14, 0x00, 0x00, 0x6d, 0x5f,
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, // ......m_texture.
	0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xa0, 0x11,
	0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x56, // ..........bgfx_V
	0x6f, 0x69, 0x64, 0x46, 0x72, 0x61, 0x67, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xd6, 0x5d, // oidFrag........]
	0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xa7, 0x54, // ..param........T
	0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xf4, 0x2b, // ..param........+
	0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f,
	0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, // ..v_color0......
	0x05, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x76, 0x5f,
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, // ..w...v_color0..
	0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x03, 0x3c,
	0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // .......<..v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00,
	0x05, 0x00, 0x74, 0x14, 0x00, 0x00, 0x76, 0x5f, // oord0.....t...v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64,
	0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0xce, 0x1c, // texcoord0.......
	0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61,
	0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, // ..gl_FragData_0_
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xc9, 0x47,
	0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, // .......G..param.
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xab, 0x55,
	0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, // .......U..param.
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, 0x16,
	0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, // ..........param.
	0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xd1, 0x0d,
	0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, // ..........gl_Fra
	0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f,
	0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xba, 0x00, // gData_0_........
	0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, 0x61,
	0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0xba, 0x00, // ..$Global.......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f,
	0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, // ......u_viewRect
	0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, // ..............u_
	0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, 0x65,
	0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0xba, 0x00, // viewTexel.......
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, 0x5f,
	0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, // ......u_view....
	0x06, 0x00, 0xba, 0x00, 0x00, 0x00, 0x03, 0x00,
	0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, // ..........u_invV
	0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x04, 0x00, // iew.............
	0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, 0x6a,
	0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xba, 0x00, // ..u_proj........
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, 0x5f,
	0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, // ......u_invProj.
	0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, // ..............u_
	0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a,
	0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0xba, 0x00, // viewProj........
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, 0x5f,
	0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, // ......u_invViewP
	0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x08, 0x00, // roj.............
	0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65,
	0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0xba, 0x00, // ..u_model.......
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, 0x5f,
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, // ......u_modelVie
	0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, // w.............u_
	0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65,
	0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, // modelViewProj...
	0x06, 0x00, 0xba, 0x00, 0x00, 0x00, 0x0b, 0x00,
	0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, // ..........u_alph
	0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x47, 0x00,
	0x04, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x22, 0x00, // aRef4.G.......".
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00,
	0x04, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x21, 0x00, // ......G.......!.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00,
	0x04, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x22, 0x00, // ......G.......".
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00,
	0x04, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x21, 0x00, // ......G.......!.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00,
	0x04, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x1e, 0x00, // ......G...w.....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00,
	0x04, 0x00, 0x74, 0x14, 0x00, 0x00, 0x1e, 0x00, // ......G...t.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00,
	0x04, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x1e, 0x00, // ......G.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00,
	0x04, 0x00, 0xda, 0x00, 0x00, 0x00, 0x06, 0x00, // ......G.........
	0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x00, 0x00, // ..@...H.........
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00, // ..#.......H.....
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x23, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, // ......#.......H.
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, // ..........#... .
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, // ..H.............
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x03, 0x00, // ......H.........
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x03, 0x00, // ......H.........
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x00,
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00, // ..#...`...H.....
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x04, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x04, 0x00,
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, // ..........#.....
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, // ..H.............
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x05, 0x00, // ......H.........
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x05, 0x00, // ......H.........
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x00,
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00, // ..#.......H.....
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x06, 0x00,
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, // ..........#... .
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, // ..H.............
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x07, 0x00, // ......H.........
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x07, 0x00, // ......H.........
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x60, 0x01,
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00, // ..#...`...H.....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x08, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x08, 0x00,
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, // ..........#.....
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, // ..H.............
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x09, 0x00, // ......H.........
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x09, 0x00, // ......H.........
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x09,
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00, // ..#.......H.....
	0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x04, 0x00, 0xba, 0x00, 0x00, 0x00, 0x0a, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, // ..............H.
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x0a, 0x00,
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, // ..........#.....
	0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0xba, 0x00,
	0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, // ..H.............
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00,
	0x05, 0x00, 0xba, 0x00, 0x00, 0x00, 0x0b, 0x00, // ......H.........
	0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x0a,
	0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0xba, 0x00, // ..#... ...G.....
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x13, 0x00,
	0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, 0x00, // ..............!.
	0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00,
	0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0xfc, 0x01, // ................
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x79, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x01, // .. ...y.........
	0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00,
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, 0x00, // .......... .....
	0x09, 0x00, 0x96, 0x00, 0x00, 0x00, 0x0d, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x13, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x00, // .. .............
	0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x13, 0x00,
	0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x02, 0x00, // ................
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x90, 0x02,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x13, 0x00, // .. .............
	0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00,
	0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, 0x00, // ................
	0x00, 0x00, 0x21, 0x00, 0x06, 0x00, 0x0a, 0x08,
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x79, 0x04, // ..!...........y.
	0x00, 0x00, 0x13, 0x03, 0x00, 0x00, 0x90, 0x02,
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8a, 0x02, // .......... .....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0d, 0x00,
	0x00, 0x00, 0x21, 0x00, 0x04, 0x00, 0xef, 0x00, // ..........!.....
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x8a, 0x02,
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, 0x02, // .......... .....
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00,
	0x00, 0x00, 0x21, 0x00, 0x06, 0x00, 0x69, 0x00, // ..........!...i.
	0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x9a, 0x02,
	0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x9a, 0x02, // ................
	0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, 0x61, 0x09,
	0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x96, 0x00, // ......a.........
	0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x1b, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, 0x09, // .. ...........a.
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x1b, 0x00,
	0x00, 0x00, 0x08, 0x10, 0x00, 0x00, 0x00, 0x00, // ..;.............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x79, 0x04,
	0x00, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x00, 0x00, // ..;...y.........
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x13, 0x03,
	0x00, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x00, 0x00, // ..;.............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x79, 0x04,
	0x00, 0x00, 0x67, 0x12, 0x00, 0x00, 0x00, 0x00, // ..;...y...g.....
	0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00,
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, 0x00, // .......... .....
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00,
	0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, 0x00, // ..+.............
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x13, 0x03,
	0x00, 0x00, 0xa3, 0x14, 0x00, 0x00, 0x00, 0x00, // ..;.............
	0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00,
	0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x01, 0x00, // ..+.............
	0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0xfe, 0x01,
	0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x2b, 0x00, // ..............+.
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, // .............. .
	0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..............;.
	0x04, 0x00, 0x9b, 0x02, 0x00, 0x00, 0x77, 0x0e,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ......w....... .
	0x04, 0x00, 0x91, 0x02, 0x00, 0x00, 0x01, 0x00,
	0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..............;.
	0x04, 0x00, 0x91, 0x02, 0x00, 0x00, 0x74, 0x14,
	0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, // ......t....... .
	0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0x03, 0x00,
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, // ..............;.
	0x04, 0x00, 0x9c, 0x02, 0x00, 0x00, 0xd1, 0x0d,
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x18, 0x00, // ................
	0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, 0x00, // ..e.............
	0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, 0x00, // ...... .......+.
	0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a,
	0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, 0x00, // ......j... .....
	0x04, 0x00, 0xda, 0x00, 0x00, 0x00, 0x65, 0x00,
	0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x1e, 0x00, // ......e...j.....
	0x0e, 0x00, 0xba, 0x00, 0x00, 0x00, 0x1d, 0x00,
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, 0x00, // ..............e.
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00,
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, // ..e...e...e...e.
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0xda, 0x00,
	0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, // ..e.......e...e.
	0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x36, 0x00,
	0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1f, 0x16, // ......6.........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05,
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x53, 0x61, // ..............Sa
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02,
	0x00, 0x00, 0xc9, 0x47, 0x00, 0x00, 0x07, 0x00, // ..;........G....
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, 0x02,
	0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x07, 0x00, // ..;........U....
	0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02,
	0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x07, 0x00, // ..;.............
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0xfc, 0x01,
	0x00, 0x00, 0x21, 0x43, 0x00, 0x00, 0xb2, 0x0c, // ..=.......!C....
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x96, 0x00,
	0x00, 0x00, 0x02, 0x33, 0x00, 0x00, 0xee, 0x0e, // ..=........3....
	0x00, 0x00, 0x50, 0x00, 0x05, 0x00, 0x61, 0x09,
	0x00, 0x00, 0x5e, 0x20, 0x00, 0x00, 0x21, 0x43, // ..P...a...^ ..!C
	0x00, 0x00, 0x02, 0x33, 0x00, 0x00, 0x3e, 0x00,
	0x03, 0x00, 0x08, 0x10, 0x00, 0x00, 0x5e, 0x20, // ...3..>.......^
	0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x79, 0x04,
	0x00, 0x00, 0xf4, 0x56, 0x00, 0x00, 0x08, 0x10, // ..A...y....V....
	0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x1f, 0x1f, // ......=.........
	0x00, 0x00, 0xf4, 0x56, 0x00, 0x00, 0x3e, 0x00,
	0x03, 0x00, 0x67, 0x12, 0x00, 0x00, 0x1f, 0x1f, // ...V..>...g.....
	0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x13, 0x03,
	0x00, 0x00, 0xee, 0x40, 0x00, 0x00, 0x08, 0x10, // ..A........@....
	0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0x96, 0x00, 0x00, 0x00, 0xd3, 0x1e, // ......=.........
	0x00, 0x00, 0xee, 0x40, 0x00, 0x00, 0x3e, 0x00,
	0x03, 0x00, 0xa3, 0x14, 0x00, 0x00, 0xd3, 0x1e, // ...@..>.........
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00,
	0x00, 0x00, 0xf4, 0x2b, 0x00, 0x00, 0x77, 0x0e, // ..=........+..w.
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00,
	0x00, 0x00, 0x03, 0x3c, 0x00, 0x00, 0x74, 0x14, // ..=........<..t.
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xc9, 0x47,
	0x00, 0x00, 0xf4, 0x2b, 0x00, 0x00, 0x3e, 0x00, // ..>....G...+..>.
	0x03, 0x00, 0xab, 0x55, 0x00, 0x00, 0x03, 0x3c,
	0x00, 0x00, 0x39, 0x00, 0x07, 0x00, 0x08, 0x00, // ...U...<..9.....
	0x00, 0x00, 0xbd, 0x26, 0x00, 0x00, 0x16, 0x0e,
	0x00, 0x00, 0xc9, 0x47, 0x00, 0x00, 0xab, 0x55, // ...&.......G...U
	0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xce, 0x1c, // ......=.........
	0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00,
	0x03, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0xce, 0x1c, // ......>.........
	0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00,
	0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1d, 0x00, // ......8...6.....
	0x00, 0x00, 0x99, 0x0f, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0a, 0x08, 0x00, 0x00, 0x37, 0x00, // ..............7.
	0x03, 0x00, 0x79, 0x04, 0x00, 0x00, 0xe2, 0x2e,
	0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x13, 0x03, // ..y.......7.....
	0x00, 0x00, 0x2f, 0x42, 0x00, 0x00, 0x37, 0x00,
	0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0xe7, 0x15, // ../B..7.........
	0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0xca, 0x1c,
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x96, 0x00, // ..........=.....
	0x00, 0x00, 0xc6, 0x19, 0x00, 0x00, 0x2f, 0x42,
	0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0xfc, 0x01, // ....../B..=.....
	0x00, 0x00, 0xca, 0x48, 0x00, 0x00, 0xe2, 0x2e,
	0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0xfe, 0x01, // ...H......V.....
	0x00, 0x00, 0xf7, 0x3e, 0x00, 0x00, 0xc6, 0x19,
	0x00, 0x00, 0xca, 0x48, 0x00, 0x00, 0x3d, 0x00, // ...>.......H..=.
	0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0xfe, 0x24,
	0x00, 0x00, 0xe7, 0x15, 0x00, 0x00, 0x57, 0x00, // .......$......W.
	0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x82, 0x59,
	0x00, 0x00, 0xf7, 0x3e, 0x00, 0x00, 0xfe, 0x24, // .......Y...>...$
	0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x82, 0x59,
	0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, // .......Y..8...6.
	0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x35, 0x13,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xef, 0x00, // ......5.........
	0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x8a, 0x02,
	0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0xf8, 0x00, // ..7.............
	0x02, 0x00, 0x2e, 0x5f, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xe0, 0x5b, // ..._..=........[
	0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x25, 0x53, // ......=.......%S
	0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xc5, 0x3d, // ......=........=
	0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xd8, 0x3d, // ......=........=
	0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x50, 0x00,
	0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x56, 0x5b, // ......P.......V[
	0x00, 0x00, 0xe0, 0x5b, 0x00, 0x00, 0x25, 0x53,
	0x00, 0x00, 0xc5, 0x3d, 0x00, 0x00, 0xd8, 0x3d, // ...[..%S...=...=
	0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x56, 0x5b,
	0x00, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, 0x00, // ......V[..8...6.
	0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x0e,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x69, 0x00, // ..............i.
	0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02,
	0x00, 0x00, 0x6e, 0x62, 0x00, 0x00, 0x37, 0x00, // ..7.......nb..7.
	0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0x8f, 0x41,
	0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, // .......A..7.....
	0x00, 0x00, 0x8c, 0x4a, 0x00, 0x00, 0xf8, 0x00,
	0x02, 0x00, 0xc0, 0x53, 0x00, 0x00, 0x3b, 0x00, // ...J.......S..;.
	0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0xd6, 0x5d,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, // .......]......;.
	0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0xa7, 0x54,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3e, 0x00, // .......T......>.
	0x03, 0x00, 0xd6, 0x5d, 0x00, 0x00, 0x0c, 0x0a,
	0x00, 0x00, 0x39, 0x00, 0x05, 0x00, 0x1d, 0x00, // ...]......9.....
	0x00, 0x00, 0xa0, 0x11, 0x00, 0x00, 0x35, 0x13,
	0x00, 0x00, 0xd6, 0x5d, 0x00, 0x00, 0x3d, 0x00, // ......5....]..=.
	0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0xd7, 0x40,
	0x00, 0x00, 0x8f, 0x41, 0x00, 0x00, 0x3e, 0x00, // .......@...A..>.
	0x03, 0x00, 0xa7, 0x54, 0x00, 0x00, 0xd7, 0x40,
	0x00, 0x00, 0x39, 0x00, 0x07, 0x00, 0x1d, 0x00, // ...T...@..9.....
	0x00, 0x00, 0x8e, 0x1d, 0x00, 0x00, 0x99, 0x0f,
	0x00, 0x00, 0x67, 0x12, 0x00, 0x00, 0xa3, 0x14, // ..........g.....
	0x00, 0x00, 0xa7, 0x54, 0x00, 0x00, 0x3d, 0x00,
	0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xba, 0x5b, // ...T..=........[
	0x00, 0x00, 0x6e, 0x62, 0x00, 0x00, 0x85, 0x00,
	0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x34, // ..nb..........;4
	0x00, 0x00, 0x8e, 0x1d, 0x00, 0x00, 0xba, 0x5b,
	0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x8c, 0x4a, // .......[..>....J
	0x00, 0x00, 0x3b, 0x34, 0x00, 0x00, 0xfd, 0x00,
	0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00, // ..;4......8....
};
static const uint8_t fs_debugdraw_fill_texture_dx9[240] = {
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1,
	0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00,
	0x00, 0x01, 0x00, 0xd0, 0x00, 0x00, 0x00, 0x00, // Color0..........
	0x03, 0xff, 0xff, 0xfe, 0xff, 0x20, 0x00, 0x43,
	0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, // ..... .CTAB....S
	0x00, 0x00, 0x00, 0x00, 0x03, 0xff, 0xff, 0x01,
	0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, // ................
	0x91, 0x00, 0x00, 0x4c, 0x00, 0x00, 0x00, 0x30,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, // ...L...0........
	0x00, 0x02, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, // ...<.......s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04,
	0x00, 0x0c, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, // Color...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70,
	0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, // .......ps_3_0.Mi
	0x63, 0x72, 0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20,
	0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, // crosoft (R) HLSL
	0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20,
	0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, //  Shader Compiler
	0x20, 0x31, 0x30, 0x2e, 0x31, 0x00, 0xab, 0x1f,
	0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, //  10.1...........
	0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05,
	0x00, 0x00, 0x80, 0x01, 0x00, 0x03, 0x90, 0x1f, // ................
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00,
	0x08, 0x0f, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x00, // ...........B....
	0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x00,
	0x08, 0xe4, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, // ................
	0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00,
	0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00, // ................
};
static const uint8_t fs_debugdraw_fill_texture_dx11[403] = {
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1,
	0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00,
	0x00, 0x01, 0x00, 0x70, 0x01, 0x00, 0x00, 0x44, // Color0.....p...D
	0x58, 0x42, 0x43, 0xbe, 0x78, 0xe7, 0xa5, 0x19,
	0x0c, 0x70, 0xeb, 0x4c, 0xb1, 0xac, 0x1f, 0x16, // XBC.x....p.L....
	0x84, 0xe9, 0x97, 0x01, 0x00, 0x00, 0x00, 0x70,
	0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, // .......p.......,
	0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4,
	0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, // ...........ISGNl
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x08,
	0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, // ...........P....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, // ................
	0x00, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f,
	0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, // ...........b....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, // ................
	0x03, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f,
	0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, // ...SV_POSITION.C
	0x4f, 0x4c, 0x4f, 0x52, 0x00, 0x54, 0x45, 0x58,
	0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, // OLOR.TEXCOORD..O
	0x53, 0x47, 0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01,
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, // SGN,...........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x53,
	0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, // .......SV_TARGET
	0x00, 0xab, 0xab, 0x53, 0x48, 0x44, 0x52, 0x94,
	0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x25, // ...SHDR....@...%
	0x00, 0x00, 0x00, 0x5a, 0x00, 0x00, 0x03, 0x00,
	0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, // ...Z....`......X
	0x18, 0x00, 0x04, 0x00, 0x70, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, // ....p......UU..b
	0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, 0x01,
	0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, // ...........b...2
	0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x65,
	0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, // .......e.... ...
	0x00, 0x00, 0x00, 0x68, 0x00, 0x00, 0x02, 0x01,
	0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, // ...h.......E....
	0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46,
	0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, // .......F.......F
	0x7e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, // ~.......`......8
	0x00, 0x00, 0x07, 0xf2, 0x20, 0x10, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, // .... ......F....
	0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, 0x01,
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, // ...F.......>....
	0x00, 0x00, 0x00,								// ...
};
static const uint8_t fs_debugdraw_fill_texture_mtl[590] = {
	0x46, 0x53, 0x48, 0x05, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0x3f, 0x02, 0x00, 0x00,
	0x75, 0x73, // FSH.......?...us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20,
	0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c,
	0x61, 0x74, // tal;.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74,
	0x20, 0x7b, // MtlShaderInput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f,
	0x6c, 0x6f, // .  float4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76,
	0x5f, 0x74, // r0;.  float2 v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73,
	0x74, 0x72, // excoord0;.};.str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61,
	0x64, 0x65, // uct xlatMtlShade
	0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c,
	0x6f, 0x61, // rOutput {.  floa
	0x74, 0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f,
	0x72, 0x3b, // t4 gl_FragColor;
	0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61,
	0x74, 0x4d, // .};.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72,
	0x6d, 0x20, // tlShaderUniform
	0x7b, 0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20,
	0x78, 0x6c, // {.};.fragment xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74,
	0x70, 0x75, // atMtlShaderOutpu
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20,
	0x28, 0x78, // t xlatMtlMain (x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e,
	0x70, 0x75, // latMtlShaderInpu
	0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61,
	0x67, 0x65, // t _mtl_i [[stage
	0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e,
	0x74, 0x20, // _in]], constant
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55,
	0x6e, 0x69, // xlatMtlShaderUni
	0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b,
	0x5b, 0x62, // form& _mtl_u [[b
	0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c,
	0x20, 0x20, // uffer(0)]].  ,
	0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f,
	0x61, 0x74, //  texture2d<float
	0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b,
	0x5b, 0x74, // > s_texColor [[t
	0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73,
	0x61, 0x6d, // exture(0)]], sam
	0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73,
	0x5f, 0x74, // pler _mtlsmp_s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70,
	0x6c, 0x65, // exColor [[sample
	0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c,
	0x61, 0x74, // r(0)]]).{.  xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75,
	0x74, 0x20, // MtlShaderOutput
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c,
	0x5f, 0x6f, // _mtl_o;.  _mtl_o
	0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20,
	0x3d, 0x20, // .gl_FragColor =
	0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61,
	0x6d, 0x70, // (s_texColor.samp
	0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74,
	0x65, 0x78, // le(_mtlsmp_s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32,
	0x29, 0x28, // Color, (float2)(
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f,
	0x6f, 0x72, // _mtl_i.v_texcoor
	0x64, 0x30, 0x29, 0x29, 0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e,
	0x76, 0x5f, // d0)) * _mtl_i.v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74,
	0x75, 0x72,																			// color0);.  retur
	0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00, // n _mtl_o;.}...
};
extern const uint8_t* fs_debugdraw_fill_texture_pssl;
extern const uint32_t fs_debugdraw_fill_texture_pssl_size;
