//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "KTVSelectedAccViewDataSource.h"
#import "KTVSelectedAccViewEventDelegate.h"

@class KTVSelectedAccVM, NSString;

@interface KTVSelectedAccVLL : NSObject <KTVSelectedAccViewDataSource, KTVSelectedAccViewEventDelegate>
{
    KTVSelectedAccVM *_viewModel;
    id <KTVSelectedAccVLLDelegate> _delegate;
}

@property(nonatomic) __weak id <KTVSelectedAccVLLDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) KTVSelectedAccVM *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
- (void)selectedAccView:(id)arg1 configureMenuCell:(id)arg2 forAccompanyIndex:(long long)arg3;
- (void)selectedAccView:(id)arg1 configureAccompanyCell:(id)arg2 forAccompanyIndex:(long long)arg3;
- (long long)numberOfAccompanys:(id)arg1;
- (void)goSingSong;
- (_Bool)selectedAccView:(id)arg1 deleteAccAtIndex:(long long)arg2;
- (void)selectedAccViewIntoRecord:(id)arg1 selectedAccAtIndex:(long long)arg2;
- (void)selectedAccView:(id)arg1 selectedAccAtIndex:(long long)arg2;
- (void)selectedAccViewShouldReflashData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

