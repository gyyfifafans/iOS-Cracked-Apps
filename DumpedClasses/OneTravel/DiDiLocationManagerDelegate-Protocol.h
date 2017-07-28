//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CLHeading, CLLocation, DiDiLocationManager, NSArray, NSError, NSString;

@protocol DiDiLocationManagerDelegate <NSObject>

@optional
- (double)intervalFromAppEnterBackground;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didiChangeStatus:(long long)arg2;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didUpdateToLocation:(CLLocation *)arg2 fromLocation:(CLLocation *)arg3;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didUpdateLocations:(NSArray *)arg2;
- (void)didiLocationManagerStartLocation:(DiDiLocationManager *)arg1;
- (void)didHideAuthorizationAlert;
- (void)analyticsAccuracyForNewLocation:(CLLocation *)arg1;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didTimeoutWithInterval:(double)arg2 withRecommendTip:(NSString *)arg3;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didTimeoutWithInterval:(double)arg2;
- (void)didiLocationManagerDidUpdateDistance:(double)arg1 distanceFilter:(double)arg2;
- (void)didiLocationManagerUpdateHeading;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didUpdateHeading:(CLHeading *)arg2;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didFailWithError:(NSError *)arg2;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didLowAccuracyFilterLocation:(CLLocation *)arg2;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didUpdateLocation:(CLLocation *)arg2;
- (void)didiLocationManager:(DiDiLocationManager *)arg1 didChangeAuthorizationStatus:(int)arg2;
@end
