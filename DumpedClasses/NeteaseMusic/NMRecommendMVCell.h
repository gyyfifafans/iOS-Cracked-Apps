//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "NMRecommendMVViewDelegate.h"

@class NSArray, NSMutableArray, NSString;

@interface NMRecommendMVCell : UITableViewCell <NMRecommendMVViewDelegate>
{
    NSMutableArray *_viewArray;
    NSArray *_contentArray;
    id <NMRecommendMVCellDelegate> _delegate;
}

+ (double)heightForContents:(id)arg1;
@property(nonatomic) __weak id <NMRecommendMVCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSArray *contentArray; // @synthesize contentArray=_contentArray;
- (void).cxx_destruct;
- (void)recommendMVView:(id)arg1 mvClicked:(id)arg2;
- (void)recommendMVView:(id)arg1 contentClicked:(id)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
