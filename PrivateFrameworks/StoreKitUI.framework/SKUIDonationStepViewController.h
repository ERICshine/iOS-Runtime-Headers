/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@class NSOperationQueue, SKUIDonationConfiguration, SKUIGiftCharity;

@interface SKUIDonationStepViewController : UIViewController {
    SKUIGiftCharity *_charity;
    SKUIDonationConfiguration *_configuration;
    NSOperationQueue *_operationQueue;
}

@property(readonly) SKUIGiftCharity * charity;
@property(readonly) SKUIDonationConfiguration * donationConfiguration;
@property(retain) NSOperationQueue * operationQueue;

- (void).cxx_destruct;
- (id)charity;
- (id)donationConfiguration;
- (id)initWithCharity:(id)arg1 configuration:(id)arg2;
- (id)operationQueue;
- (void)setOperationQueue:(id)arg1;

@end
