/*
 * WordPenalty.h
 *
 *  Created on: 28 Oct 2015
 *      Author: hieu
 */

#ifndef WORDPENALTY_H_
#define WORDPENALTY_H_

#include "StatelessFeatureFunction.h"

class WordPenalty  : public StatelessFeatureFunction
{
public:
	WordPenalty(size_t startInd, const std::string &line);
	virtual ~WordPenalty();

	  virtual void
	  EvaluateInIsolation(const Manager &mgr,
			  const Phrase &source,
			  const TargetPhrase &targetPhrase,
			  Scores& scores,
			  Scores& estimatedFutureScores) const;

};

#endif /* WORDPENALTY_H_ */

