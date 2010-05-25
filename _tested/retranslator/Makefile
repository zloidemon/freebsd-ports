# New ports collection makefile for:	retranslator
# Date created:		2010-05-25
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	retranslator
PORTVERSION=	5.0.0
CATEGORIES=	security
MASTER_SITES=	http://utils.kaspersky.com/updater/retranslator_5.0.0.7/FreeBSD_6.3/ \
		http://fbsd.zlonet.ru/distfiles/
DISTNAME=	${PORTNAME}-${PORTVERSION}-7

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	The update utility for Kaspersky applications

NO_BUILD=	yes
USE_LDCONIFIG=	yes
PLIST_FILES=	bin/${PORTNAME} \
		etc/${PORTNAME}.conf.sample

WRKSRC=		${WRKDIR}/${PORTNAME}

.include <bsd.port.pre.mk>

.if ${OSVERSION} > 630000
LIB_DEPENDS+=	m.4:${PORTSDIR}/misc/compat6x
.endif

do-configure:

.for f in 's,./backup/,/var/db/${PORTNAME}/backup,g' \
	's,./bases/,/var/db/${PORTNAME}/bases,g' \
	's,./${PORTNAME}.log,/var/log/${PORTNAME}.log,g'
	@${REINPLACE_CMD} -e ${f} \
		${WRKSRC}/${PORTNAME}.conf
.endfor

do-install:
	@${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME}.bin \
		${PREFIX}/bin/${PORTNAME}

post-install:
	@${INSTALL_DATA} ${WRKSRC}/${PORTNAME}.conf \
		${PREFIX}/etc/${PORTNAME}.conf.sample
	@${ECHO_MSG} ""
	@${ECHO_MSG} " Usage: "
	@${ECHO_MSG} " Copy and edit ${PORTNAME}.conf.sample "
	@${ECHO_MSG} " cp ${ETCDIR}/${PORTNAME}.conf.sample ${ETCDIR}/${PORTNAME}.conf "
	@${ECHO_MSG} ""
	@${ECHO_MSG} " ${PORTNAME} -l /var/log/${PORTNAME}.log -c ${ETCDIR}/${PORTNAME}.conf \ "
	@${ECHO_MSG} " -b /var/db/${PORTNAME}/backup "
	@${ECHO_MSG} ""

.include <bsd.port.post.mk>
