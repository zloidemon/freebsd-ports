# New ports collection makefile for:	gitorious
# Date created:		2010-02-07
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	gitorious
PORTVERSION=	0.0.0
CATEGORIES=	www devel
MASTER_SITES=	http://fbsd.zlonet.ru/distfiles/ \
		http://tourservice.kz/zloidemon/distfiles/
DISTNAME=	${PORTNAME}-mainline-master

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Is a great way of collaborating on distributed projects

BUILD_DEPENDS=	rubygem-chronic:${PORTSDIR}/devel/rubygem-chronic \
		rubygem-daemons:${PORTSDIR}/devel/rubygem-daemons \
		rubygem-diff-lcs:${PORTSDIR}/textproc/rubygem-diff-lcs \
		rubygem-echoe:${PORTSDIR}/devel/rubygem-echoe \
		rubygem-fastthread:${PORTSDIR}/devel/rubygem-fastthread \
		rubygem-geoip:${PORTSDIR}/net/rubygem-geoip \
		rubygem-highline:${PORTSDIR}/devel/rubygem-highline \
		rubygem-hoe:${PORTSDIR}/devel/rubygem-hoe \
		rubygem-mime-types:${PORTSDIR}/misc/rubygem-mime-types \
		rubygem-rack:${PORTSDIR}/www/rubygem-rack \
		rubygem-rake:${PORTSDIR}/devel/rubygem-rake \
		rubygem-rdiscount:${PORTSDIR}/textproc/rubygem-rdiscount \
		rubygem-redcloth:${PORTSDIR}/www/rubygem-redcloth \
		rubygem-openid:${PORTSDIR}/net/rubygem-openid \
		rubygem-yadis:${PORTSDIR}/net/rubygem-yadis \
		rubygem-stomp:${PORTSDIR}/devel/rubygem-stomp \
		rubygem-json:${PORTSDIR}/devel/rubygem-json \
		rubygem-mocha:${PORTSDIR}/devel/rubygem-mocha \
		rubygem-mongrel:${PORTSDIR}/www/rubygem-mongrel

RUN_DEPENDS=	iconv:${PORTSDIR}/converters/iconv \
		git:${PORTSDIR}/devel/git

NO_BUILD=	yes
DEPEND_RUBY_ICONV=	yes
USE_RUBY=	yes
USE_MYSQL=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-mainline

do-install:
	${MKDIR} ${WWWDIR}
	@cd ${WRKSRC} && \
		${FIND} . -type d -exec ${MKDIR} ${WWWDIR}/{} \; \
			-exec ${CHOWN} ${WWWOWN}:${WWWGRP} ${WWWDIR}/{} \;
	@cd ${WRKSRC} && \
		${FIND} . \! -type d -exec ${INSTALL_DATA} {} ${WWWDIR}/{} \; \
			-exec ${CHOWN} ${WWWOWN}:${WWWGRP} ${WWWDIR}/{} \;

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
