//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString, QLJCEChannelTriggerType;

@interface QLJCEChannelTrigger : JceObjectV2
{
    int jcev2_p_2_r_index;
    QLJCEChannelTriggerType *jcev2_p_0_r_channelTriggerType;
    NSString *jcev2_p_1_r_prefixId;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_index, setter=setJce_index:) int jcev2_p_2_r_index; // @synthesize jcev2_p_2_r_index;
@property(retain, nonatomic, getter=jce_prefixId, setter=setJce_prefixId:) NSString *jcev2_p_1_r_prefixId; // @synthesize jcev2_p_1_r_prefixId;
@property(retain, nonatomic, getter=jce_channelTriggerType, setter=setJce_channelTriggerType:) QLJCEChannelTriggerType *jcev2_p_0_r_channelTriggerType; // @synthesize jcev2_p_0_r_channelTriggerType;
- (void).cxx_destruct;
- (id)init;

@end

