//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MSFPacketSendParam : NSObject
{
    char *pWup;
    NSString *cmd;
    NSString *uin;
    int resendSeq;
    _Bool immediately;
    int timeout;
    BOOL answerFlag;
    BOOL resendNum;
    BOOL isNotResend;
}

@property(nonatomic) BOOL isNotResend; // @synthesize isNotResend;
@property(nonatomic) BOOL resendNum; // @synthesize resendNum;
@property(nonatomic) BOOL answerFlag; // @synthesize answerFlag;
@property(nonatomic) int timeout; // @synthesize timeout;
@property(nonatomic) _Bool immediately; // @synthesize immediately;
@property(nonatomic) int resendSeq; // @synthesize resendSeq;
@property(retain, nonatomic) NSString *uin; // @synthesize uin;
@property(retain, nonatomic) NSString *cmd; // @synthesize cmd;
@property(nonatomic) char *pWup; // @synthesize pWup;
- (void)dealloc;
- (id)init;

@end

