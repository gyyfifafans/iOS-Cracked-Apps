//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AliDetailBaseContainerView.h"

#import "AliDetailContractPhoneViewProtocal.h"

@class AliDetailContractNumCardPackageView, AliDetailContractPhoneDataEngine, AliDetailContractPhoneNavigationBar, NSString;

@interface AliDetailNumberCardPackageSubView : AliDetailBaseContainerView <AliDetailContractPhoneViewProtocal>
{
    AliDetailContractPhoneDataEngine *_dataEngine;
    CDUnknownBlockType _selectBlock;
    AliDetailContractNumCardPackageView *_packageView;
    AliDetailContractPhoneNavigationBar *_navigationBar;
    AliDetailContractPhoneDataEngine *_contractDataEngine;
}

@property(retain, nonatomic) AliDetailContractPhoneDataEngine *contractDataEngine; // @synthesize contractDataEngine=_contractDataEngine;
@property(retain, nonatomic) AliDetailContractPhoneNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) AliDetailContractNumCardPackageView *packageView; // @synthesize packageView=_packageView;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(nonatomic) __weak AliDetailContractPhoneDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
- (void).cxx_destruct;
- (void)handlePackageEvent:(id)arg1;
- (void)clearData;
- (void)prepareData;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

