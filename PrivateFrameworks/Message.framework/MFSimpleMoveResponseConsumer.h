/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class MFError, NSMutableArray, NSDictionary;



@interface MFSimpleMoveResponseConsumer : MFDAMailAccountConsumer <DAMessageMoveRequestConsumer>
{
    NSDictionary *messagesByMessageID;
    NSMutableArray *failedMessages;
    MFError *_error;
}

@property(retain) MFError *error;


- (id)error;
- (void)resultsForMessageMove:(id)arg1;
- (void)actionFailed:(NSInteger)arg1 forTask:(id)arg2 error:(id)arg3;
- (void)dealloc;
- (void)setError:(id)arg1;

@end