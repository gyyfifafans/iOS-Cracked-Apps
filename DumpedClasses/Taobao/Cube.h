//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Geometry.h"

@class VRGLProgram;

@interface Cube : Geometry
{
    VRGLProgram *_cubeGLProgram;
    float _side_length;
    float *_verticesFull;
    unsigned short *_indicesFull;
    float *_texCoordsFull;
}

@property(nonatomic) float side_length; // @synthesize side_length=_side_length;
@property(nonatomic) float *texCoordsFull; // @synthesize texCoordsFull=_texCoordsFull;
@property(nonatomic) unsigned short *indicesFull; // @synthesize indicesFull=_indicesFull;
@property(nonatomic) float *verticesFull; // @synthesize verticesFull=_verticesFull;
- (void).cxx_destruct;
- (void)dealloc;
- (void)drawEye:(int)arg1 inContext:(struct VRContext)arg2;
- (void)releaseCubeAlloc;
- (void)setCubeView;
- (void)setVideoDisplayDetails:(int)arg1;
- (void)buildProgram;
- (int)esGenFullCube;
- (void)initCubeParam:(_Bool)arg1;
- (id)initWithRendType:(int)arg1 videoOrImage:(_Bool)arg2;

@end

