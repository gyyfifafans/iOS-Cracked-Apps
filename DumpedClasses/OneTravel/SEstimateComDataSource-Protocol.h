//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBizDataSource.h"

@protocol SEstimateComDataSource <SBizDataSource>
- (void)requestEstimateWithSuccess:(void (^)(id))arg1 failure:(void (^)(NSError *))arg2;
- (long long)estimateComPollInteval;
- (_Bool)estimateComShouldSupportPoll;
@end

