//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MunionImageDataModel;

@interface MunionExtImageRequest : NSObject
{
    long long _requestCnt;
    MunionImageDataModel *_userData;
    CDUnknownBlockType _successedBlock;
    CDUnknownBlockType _failedBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failedBlock; // @synthesize failedBlock=_failedBlock;
@property(copy, nonatomic) CDUnknownBlockType successedBlock; // @synthesize successedBlock=_successedBlock;
@property(retain, nonatomic) MunionImageDataModel *userData; // @synthesize userData=_userData;
@property(nonatomic) long long requestCnt; // @synthesize requestCnt=_requestCnt;
- (void).cxx_destruct;
- (void)imageReqError:(id)arg1 url:(id)arg2;
- (void)retrySendRequest;
- (void)sendImageRequest:(id)arg1 finishedBlock:(CDUnknownBlockType)arg2 failedBlock:(CDUnknownBlockType)arg3;
- (void)initProperty;
- (id)init;

@end

