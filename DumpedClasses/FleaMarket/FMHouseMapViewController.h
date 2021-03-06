//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FMBaseViewController.h"

#import "FMMapLocationAnnotationViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class FMMapView, FMMapViewComponent, NSMutableArray, NSString, UICollectionView;

@interface FMHouseMapViewController : FMBaseViewController <UICollectionViewDelegate, UICollectionViewDataSource, FMMapLocationAnnotationViewDelegate>
{
    _Bool _houseCollectionHidden;
    FMMapView *_mapView;
    UICollectionView *_collectionView;
    FMMapViewComponent *_mapComponent;
    NSMutableArray *_houseItemComponents;
    long long _useType;
}

@property(nonatomic) long long useType; // @synthesize useType=_useType;
@property(nonatomic) _Bool houseCollectionHidden; // @synthesize houseCollectionHidden=_houseCollectionHidden;
@property(retain, nonatomic) NSMutableArray *houseItemComponents; // @synthesize houseItemComponents=_houseItemComponents;
@property(retain, nonatomic) FMMapViewComponent *mapComponent; // @synthesize mapComponent=_mapComponent;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) FMMapView *mapView; // @synthesize mapView=_mapView;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)didSelectAnnotationCallout:(id)arg1;
- (void)didSelectAnnotation:(id)arg1;
- (void)highlightCollectionCellOnItem:(id)arg1 shouldScroll:(_Bool)arg2;
- (void)highlightMapAnnotationOnAnnotation:(id)arg1 moveToCenter:(_Bool)arg2;
- (void)highlightMapAnnotationOnItem:(id)arg1 moveToCenter:(_Bool)arg2;
- (void)initNavigationBar;
- (void)setCollectionViewHidden:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithURL:(id)arg1 query:(id)arg2 nativeParams:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

