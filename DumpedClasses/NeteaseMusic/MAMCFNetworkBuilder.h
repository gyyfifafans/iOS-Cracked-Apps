//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MAMHTTPDataBuilder.h"

@interface MAMCFNetworkBuilder : MAMHTTPDataBuilder
{
    _Bool _bAcceptResponse;
    _Bool _isFinished;
}

@property(nonatomic) _Bool isFinished; // @synthesize isFinished=_isFinished;
@property(nonatomic) _Bool bAcceptResponse; // @synthesize bAcceptResponse=_bAcceptResponse;
- (void)httpDataBuildFail:(id)arg1;
- (void)httpDataBuildReceiveResponseHeader:(id)arg1 statusCode:(int)arg2;
- (void)httpDataBuildFinishLoading;
- (id)init;

@end

