//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SHireDriverCom.h"

@interface SHireDriverUnit : SHireDriverCom
{
    long long _lastSubType;
}

@property(nonatomic) long long lastSubType; // @synthesize lastSubType=_lastSubType;
- (void)jumpToPaymentPage:(id)arg1;
- (void)createOrderSuccess;
- (void)reloadCitySupport;
- (void)serviceDidCancel;
- (void)showHireDriverPageWithLastSubType:(long long)arg1;
- (void)initBaseInfo;
- (id)init;
- (id)initWithDataSource:(id)arg1 config:(id)arg2;

@end
