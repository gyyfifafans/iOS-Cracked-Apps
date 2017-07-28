//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BaseShareBLL : NSObject
{
    NSMutableArray *_blockCallBackArray;
}

@property(retain, nonatomic) NSMutableArray *blockCallBackArray; // @synthesize blockCallBackArray=_blockCallBackArray;
- (void).cxx_destruct;
- (_Bool)isInstall;
- (_Bool)getMessageFromOtherAppWithSharedInfo:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (_Bool)sendMessageWithToken:(id)arg1 content:(id)arg2 image:(id)arg3 andCallBackBlcok:(CDUnknownBlockType)arg4;
- (_Bool)getUserFollowListWithCallBackBlock:(CDUnknownBlockType)arg1 cursor:(int)arg2 token:(id)arg3 uid:(id)arg4;
- (_Bool)getUserFriendListWithCallBackBlock:(CDUnknownBlockType)arg1 page:(int)arg2 token:(id)arg3 uid:(id)arg4;
- (_Bool)openURLInOtherAppWithUrl:(id)arg1 AndCallBack:(CDUnknownBlockType)arg2;
- (_Bool)payWithPayInfo:(id)arg1 AndCallBack:(CDUnknownBlockType)arg2;
- (_Bool)getUserInfoWithCallBackBlock:(CDUnknownBlockType)arg1;
- (id)modelTitle;
- (_Bool)sendVideo:(id)arg1 isGroup:(_Bool)arg2 andCallBackBlock:(CDUnknownBlockType)arg3;
- (_Bool)sendMessage:(id)arg1 andCallBackBlock:(CDUnknownBlockType)arg2;
- (_Bool)sendShared:(id)arg1 andCallBackBlock:(CDUnknownBlockType)arg2;
- (_Bool)loginWithCallBackBlock:(CDUnknownBlockType)arg1;
- (_Bool)isAuthValid;
- (void)removeCallBackBlockWithName:(id)arg1;
- (id)getCallBackBlockWithName:(id)arg1;
- (void)addCallBackBlock:(id)arg1 AndName:(id)arg2;
- (void)dealloc;
- (id)init;

@end
