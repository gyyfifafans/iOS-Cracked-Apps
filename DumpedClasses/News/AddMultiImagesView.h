//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSViewBase.h"

#import "TTPhotoScrollViewControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "WSAssetPickerControllerDelegate.h"
#import "WSAssetViewColumnDelegate.h"

@class ALAssetsLibrary, NSMutableArray, NSString, UIActionSheet, UIButton, UIView;

@interface AddMultiImagesView : SSViewBase <WSAssetPickerControllerDelegate, WSAssetViewColumnDelegate, TTPhotoScrollViewControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate>
{
    double _imageSize;
    ALAssetsLibrary *_assetsLibrary;
    long long _selectionLimit;
    NSMutableArray *_selectedAssetsImages;
    NSMutableArray *_selectedImageViews;
    UIButton *_addImagesButton;
    UIActionSheet *_tSheet;
    UIView *_disableInteractionView;
    NSString *_eventName;
}

@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(retain, nonatomic) UIView *disableInteractionView; // @synthesize disableInteractionView=_disableInteractionView;
@property(retain, nonatomic) UIActionSheet *tSheet; // @synthesize tSheet=_tSheet;
@property(retain, nonatomic) UIButton *addImagesButton; // @synthesize addImagesButton=_addImagesButton;
@property(retain, nonatomic) NSMutableArray *selectedImageViews; // @synthesize selectedImageViews=_selectedImageViews;
@property(retain, nonatomic) NSMutableArray *selectedAssetsImages; // @synthesize selectedAssetsImages=_selectedAssetsImages;
@property(nonatomic) long long selectionLimit; // @synthesize selectionLimit=_selectionLimit;
@property(retain, nonatomic) ALAssetsLibrary *assetsLibrary; // @synthesize assetsLibrary=_assetsLibrary;
- (void).cxx_destruct;
- (void)TTPhotoScrollViewControllerDidFinishSelect:(id)arg1;
- (void)DidTapWSAssetViewColumn:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)assetPickerController:(id)arg1 didFinishPickingMediaWithAssets:(id)arg2;
- (void)assetPickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)presentPickerController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showActionSheet;
- (void)addImagesButtonClicked:(id)arg1;
- (void)removeAssetViewColumn:(id)arg1;
- (void)appendAssetViewColumnByImage:(id)arg1;
- (void)appendSelectedImage:(id)arg1;
- (void)appendSelectedAsset:(id)arg1;
- (void)themeChanged:(id)arg1;
- (void)stopObserving;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

