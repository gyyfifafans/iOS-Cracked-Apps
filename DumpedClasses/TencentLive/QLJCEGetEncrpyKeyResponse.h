//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCECommRsp;

@interface QLJCEGetEncrpyKeyResponse : JceObjectV2
{
    QLJCECommRsp *jcev2_p_0_r_stCommRsp;
    NSString *jcev2_p_1_r_strEncrpyKey;
    NSString *jcev2_p_2_o_sDomain;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_sDomain, setter=setJce_sDomain:) NSString *jcev2_p_2_o_sDomain; // @synthesize jcev2_p_2_o_sDomain;
@property(retain, nonatomic, getter=jce_strEncrpyKey, setter=setJce_strEncrpyKey:) NSString *jcev2_p_1_r_strEncrpyKey; // @synthesize jcev2_p_1_r_strEncrpyKey;
@property(retain, nonatomic, getter=jce_stCommRsp, setter=setJce_stCommRsp:) QLJCECommRsp *jcev2_p_0_r_stCommRsp; // @synthesize jcev2_p_0_r_stCommRsp;
- (void).cxx_destruct;
- (id)init;

@end
