//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@interface QLJCECircleMsgFollowRequest : JceObjectV2
{
    unsigned char jcev2_p_0_r_cVersion;
    unsigned int jcev2_p_3_o_dwTime;
    long long jcev2_p_1_r_ddwUserid;
    long long jcev2_p_2_r_ddwMsgid;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_dwTime, setter=setJce_dwTime:) unsigned int jcev2_p_3_o_dwTime; // @synthesize jcev2_p_3_o_dwTime;
@property(nonatomic, getter=jce_ddwMsgid, setter=setJce_ddwMsgid:) long long jcev2_p_2_r_ddwMsgid; // @synthesize jcev2_p_2_r_ddwMsgid;
@property(nonatomic, getter=jce_ddwUserid, setter=setJce_ddwUserid:) long long jcev2_p_1_r_ddwUserid; // @synthesize jcev2_p_1_r_ddwUserid;
@property(nonatomic, getter=jce_cVersion, setter=setJce_cVersion:) unsigned char jcev2_p_0_r_cVersion; // @synthesize jcev2_p_0_r_cVersion;
- (id)init;

@end
