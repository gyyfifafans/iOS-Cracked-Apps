//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMobileSecurityResult.h"

@class NSString;

@interface MSBiometricStatusResp : MSMobileSecurityResult
{
    NSString *_biometricStatus;
    NSString *_nextStepCertifyTpye;
}

@property(retain, nonatomic) NSString *nextStepCertifyTpye; // @synthesize nextStepCertifyTpye=_nextStepCertifyTpye;
@property(retain, nonatomic) NSString *biometricStatus; // @synthesize biometricStatus=_biometricStatus;
- (void).cxx_destruct;

@end
