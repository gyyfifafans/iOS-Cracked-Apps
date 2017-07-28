//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "STPCoreViewController.h"

#import "STPAddCardViewControllerDelegate.h"
#import "STPPaymentMethodsInternalViewControllerDelegate.h"

@class NSArray, NSString, STPAPIClient, STPAddress, STPPaymentActivityIndicatorView, STPPaymentConfiguration, STPPromise, STPUserInformation, UIViewController;

@interface STPPaymentMethodsViewController : STPCoreViewController <STPPaymentMethodsInternalViewControllerDelegate, STPAddCardViewControllerDelegate>
{
    _Bool _loading;
    id <STPPaymentMethodsViewControllerDelegate> _delegate;
    STPUserInformation *_prefilledInformation;
    STPPaymentConfiguration *_configuration;
    STPAddress *_shippingAddress;
    id <STPBackendAPIAdapter> _apiAdapter;
    STPAPIClient *_apiClient;
    STPPromise *_loadingPromise;
    NSArray *_paymentMethods;
    id <STPPaymentMethod> _selectedPaymentMethod;
    STPPaymentActivityIndicatorView *_activityIndicator;
    UIViewController *_internalViewController;
}

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) __weak UIViewController *internalViewController; // @synthesize internalViewController=_internalViewController;
@property(nonatomic) __weak STPPaymentActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) id <STPPaymentMethod> selectedPaymentMethod; // @synthesize selectedPaymentMethod=_selectedPaymentMethod;
@property(retain, nonatomic) NSArray *paymentMethods; // @synthesize paymentMethods=_paymentMethods;
@property(retain, nonatomic) STPPromise *loadingPromise; // @synthesize loadingPromise=_loadingPromise;
@property(retain, nonatomic) STPAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) id <STPBackendAPIAdapter> apiAdapter; // @synthesize apiAdapter=_apiAdapter;
@property(retain, nonatomic) STPAddress *shippingAddress; // @synthesize shippingAddress=_shippingAddress;
@property(retain, nonatomic) STPPaymentConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) STPUserInformation *prefilledInformation; // @synthesize prefilledInformation=_prefilledInformation;
@property(readonly, nonatomic) __weak id <STPPaymentMethodsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)addCardViewController:(id)arg1 didCreateToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addCardViewControllerDidCancel:(id)arg1;
- (void)internalViewControllerDidCancel;
- (void)internalViewControllerDidCreateToken:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)internalViewControllerDidSelectPaymentMethod:(id)arg1;
- (void)finishWithPaymentMethod:(id)arg1;
- (void)updateAppearance;
- (void)viewDidLayoutSubviews;
- (void)createAndSetupViews;
- (id)retrieveCustomerWithConfiguration:(id)arg1 apiAdapter:(id)arg2;
- (id)initWithConfiguration:(id)arg1 theme:(id)arg2 apiAdapter:(id)arg3 delegate:(id)arg4;
- (id)initWithPaymentContext:(id)arg1;
- (id)initWithConfiguration:(id)arg1 apiAdapter:(id)arg2 loadingPromise:(id)arg3 theme:(id)arg4 shippingAddress:(id)arg5 delegate:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
