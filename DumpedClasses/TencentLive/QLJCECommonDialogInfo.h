//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEAction;

@interface QLJCECommonDialogInfo : JceObjectV2
{
    NSString *jcev2_p_0_r_content;
    NSString *jcev2_p_1_o_title;
    NSString *jcev2_p_2_o_left;
    NSString *jcev2_p_3_o_right;
    QLJCEAction *jcev2_p_4_o_leftAction;
    QLJCEAction *jcev2_p_5_o_negativeAction;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_negativeAction, setter=setJce_negativeAction:) QLJCEAction *jcev2_p_5_o_negativeAction; // @synthesize jcev2_p_5_o_negativeAction;
@property(retain, nonatomic, getter=jce_leftAction, setter=setJce_leftAction:) QLJCEAction *jcev2_p_4_o_leftAction; // @synthesize jcev2_p_4_o_leftAction;
@property(retain, nonatomic, getter=jce_right, setter=setJce_right:) NSString *jcev2_p_3_o_right; // @synthesize jcev2_p_3_o_right;
@property(retain, nonatomic, getter=jce_left, setter=setJce_left:) NSString *jcev2_p_2_o_left; // @synthesize jcev2_p_2_o_left;
@property(retain, nonatomic, getter=jce_title, setter=setJce_title:) NSString *jcev2_p_1_o_title; // @synthesize jcev2_p_1_o_title;
@property(retain, nonatomic, getter=jce_content, setter=setJce_content:) NSString *jcev2_p_0_r_content; // @synthesize jcev2_p_0_r_content;
- (void).cxx_destruct;
- (id)init;

@end
